#import necessary libraries
import uproot, ROOT, numpy
import keras
from keras import layers
from tensorflow.keras.models import Sequential
from tensorflow.keras.preprocessing.sequence import pad_sequences
import glob

# Build RNN from checkpoint weights/biases

checkpoint_path='/home/users/smasanam/EarthAsDMProject/CMSSW_13_0_10/src/CosmicsAnalyzer/EarthAsDMAnalyzer/test/rnn_v5_188k_final_weights.ckpt'

cp_callback = keras.callbacks.ModelCheckpoint(
    filepath=checkpoint_path, 
    verbose=1, 
    save_best_only=True,
    save_weights_only=True)

# Build the model.
model = Sequential([
    layers.Masking(mask_value=-9999.),
    layers.Bidirectional(layers.LSTM(64)),
    layers.Dense(64, activation='relu'),
    layers.Dense(1, activation='sigmoid')
])

model.load_weights(checkpoint_path)

# Define directory & ntuple subdirectories to create the hpass_fail prep file from
dir_path = '/ceph/cms/store/user/tvami/EarthAsDM/Cosmics'
subdirs = [
    "crab_Ntuplizer-Cosmics_Run2022B-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2022C-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2022D-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2022D-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2022D-CosmicTP-PromptReco-v3_v3",
    "crab_Ntuplizer-Cosmics_Run2022E-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2022F-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2022G-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2023A-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2023A-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2023B-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2023C-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2023C-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2023C-CosmicTP-PromptReco-v3_v3",
    "crab_Ntuplizer-Cosmics_Run2023C-CosmicTP-PromptReco-v4_v3",
    "crab_Ntuplizer-Cosmics_Run2023D-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2023D-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2023E-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2023F-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024A-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024B-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024C-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024D-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024E-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024E-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2024F-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024G-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024H-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024I-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024I-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2024J-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2025A-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2025A-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2025B-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2025C-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2025C-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2025D-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2025E-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2025F-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2025F-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2025G-CosmicTP-PromptReco-v1_v3"
]

# Define corresponding labels to subdirs
labels = [
    "Data-Run2022B-CosmicTP-PromptReco-v1",
    "Data-Run2022C-CosmicTP-PromptReco-v1",
    "Data-Run2022D-CosmicTP-PromptReco-v1",
    "Data-Run2022D-CosmicTP-PromptReco-v2",
    "Data-Run2022D-CosmicTP-PromptReco-v3",
    "Data-Run2022E-CosmicTP-PromptReco-v1",
    "Data-Run2022F-CosmicTP-PromptReco-v1",
    "Data-Run2022G-CosmicTP-PromptReco-v1",
    "Data-Run2023A-CosmicTP-PromptReco-v1",
    "Data-Run2023A-CosmicTP-PromptReco-v2",
    "Data-Run2023B-CosmicTP-PromptReco-v1",
    "Data-Run2023C-CosmicTP-PromptReco-v1",
    "Data-Run2023C-CosmicTP-PromptReco-v2",
    "Data-Run2023C-CosmicTP-PromptReco-v3",
    "Data-Run2023C-CosmicTP-PromptReco-v4",
    "Data-Run2023D-CosmicTP-PromptReco-v1",
    "Data-Run2023D-CosmicTP-PromptReco-v2",
    "Data-Run2023E-CosmicTP-PromptReco-v1",
    "Data-Run2023F-CosmicTP-PromptReco-v1",
    "Data-Run2024A-CosmicTP-PromptReco-v1",
    "Data-Run2024B-CosmicTP-PromptReco-v1",
    "Data-Run2024C-CosmicTP-PromptReco-v1",
    "Data-Run2024D-CosmicTP-PromptReco-v1",
    "Data-Run2024E-CosmicTP-PromptReco-v1",
    "Data-Run2024E-CosmicTP-PromptReco-v2",
    "Data-Run2024F-CosmicTP-PromptReco-v1",
    "Data-Run2024G-CosmicTP-PromptReco-v1",
    "Data-Run2024H-CosmicTP-PromptReco-v1",
    "Data-Run2024I-CosmicTP-PromptReco-v1",
    "Data-Run2024I-CosmicTP-PromptReco-v2",
    "Data-Run2024J-CosmicTP-PromptReco-v1",
    "Data-Run2025A-CosmicTP-PromptReco-v1",
    "Data-Run2025A-CosmicTP-PromptReco-v2",
    "Data-Run2025B-CosmicTP-PromptReco-v1",
    "Data-Run2025C-CosmicTP-PromptReco-v1",
    "Data-Run2025C-CosmicTP-PromptReco-v2",
    "Data-Run2025D-CosmicTP-PromptReco-v1",
    "Data-Run2025E-CosmicTP-PromptReco-v1",
    "Data-Run2025F-CosmicTP-PromptReco-v1",
    "Data-Run2025F-CosmicTP-PromptReco-v2",
    "Data-Run2025G-CosmicTP-PromptReco-v1"
]

# Define counter and file name to save hpf prep file to
file_name = 'Data_hpf_run3_22_23_24_part25_with_tevMuon_chi2.root'
n = 0

# Loop over subdirectories
for file in subdirs:
    print(f'{file} with label {labels[n]}')
    
    # If this is the first subdir, create new root file. Else, update
    if n == 0: root_file = ROOT.TFile(file_name, "RECREATE")
    else: root_file = ROOT.TFile(file_name, "UPDATE")
    tree = ROOT.TTree(labels[n], labels[n])
    print(labels[n])
    n += 1

    # Find all ntuple files in subdirectory
    input_files = glob.glob(f'{dir_path}/{file}/**/*.root', recursive = True)
    print(len(input_files))

    # Define all desired variables to feed into branches of root file
    var_pt = numpy.zeros(1, dtype=float)
    var_chi2 = numpy.zeros(1, dtype=float)
    var_ndof = numpy.zeros(1, dtype=float)
    var_tevMuon_chi2 = numpy.zeros(1, dtype=float)
    var_tevMuon_ndof = numpy.zeros(1, dtype=float)
    var_tevMuon_numberOfValidHits = numpy.zeros(1, dtype=float)
    var_tevMuon_validFraction = numpy.zeros(1, dtype=float)
    #var_gen_pt = numpy.zeros(1, dtype=float)
    var_nHits = numpy.zeros(1, dtype=float)
    var_nTrack = numpy.zeros(1, dtype=float)
    var_rnn = numpy.zeros(1, dtype=float)
    var_rnn_t0 = numpy.zeros(1, dtype=float)
    var_eta = numpy.zeros(1, dtype=float)
    var_energy = numpy.zeros(1, dtype=float)
    total = numpy.zeros(1, dtype=int)
    trigger_pass = numpy.zeros(1, dtype=int)
    presel_seg_pass = numpy.zeros(1, dtype=int)
    presel_pT_pass = numpy.zeros(1, dtype=int)

    # Define tree branches to save desired variables
    tree.Branch("pT", var_pt, "pT/D") # The "/D" specifies the type as double
    tree.Branch("chi2", var_chi2, "chi2/D")
    tree.Branch("ndof", var_ndof, "ndof/D")
    tree.Branch("tevMuon_chi2", var_tevMuon_chi2, "tevMuon_chi2/D")
    tree.Branch("tevMuon_ndof", var_tevMuon_ndof, "tevMuon_ndof/D")
    tree.Branch("tevMuon_numberOfValidHits", var_tevMuon_numberOfValidHits, "tevMuon_numberOfValidHits/D")
    tree.Branch("tevMuon_validFraction", var_tevMuon_validFraction, "tevMuon_validFraction/D")
    #tree.Branch("gen_pt", var_gen_pt, "gen_pt/D")
    tree.Branch("nHits", var_nHits, "nHits/D")
    tree.Branch("nTracks", var_nTrack, "nTracks/D")
    tree.Branch("RNNscore", var_rnn, "RNNscore/D")
    tree.Branch("RNNscore_t0", var_rnn_t0, "RNNscore_t0/D")
    tree.Branch("eta", var_eta, "eta/D")
    tree.Branch("energy", var_energy, "energy/D")
    tree.Branch("totalEvents", total, "totalEvents/I")
    tree.Branch("triggerPass", trigger_pass, "triggerPass/I")
    tree.Branch("segPass", presel_seg_pass, "segPass/I")
    tree.Branch("validpTPass", presel_pT_pass, "validpTPass/I")

    # Define helper variables to diagnose preselection efficiencies
    event_num = 0
    trigger_cut = 0
    seg_cut = 0
    pT_cut = 0

    try:
        # Loop over individual ntuple files
        for file in input_files:
            ntuple2 = uproot.open(file)
            # Convert leafs to numpy arrays
            tree2 = ntuple2["muonPhiAnalyzer/tree"]
            run = numpy.asarray(tree2["run"])
            ls = numpy.asarray(tree2["ls"])
            event = numpy.asarray(tree2["event"])
            pt = numpy.asarray(tree2["track_pt"])
            chi2 = numpy.asarray(tree2["muon_chi2"])
            ndof = numpy.asarray(tree2["muon_comb_ndof"])
            tevMuon_chi2 = numpy.asarray(tree2["track_chi2"])
            tevMuon_ndof = numpy.asarray(tree2["track_ndof"])
            tevMuon_numberOfValidHits = numpy.asarray(tree2["track_numberOfValidHits"])
            tevMuon_validFraction = numpy.asarray(tree2["track_validFraction"])
            #gen_pt = numpy.asarray(tree2["gen_pt"])
            eta = numpy.asarray(tree2["track_eta"])
            energy = numpy.asarray(tree2["muon_energy"])
            trigger = numpy.asarray(tree2["HLT_L1SingleMuCosmics"])
            t0 = numpy.asarray(tree2["muon_dtSeg_t0timing"])
            x = numpy.asarray(tree2["muon_dtSeg_globX"])
            y = numpy.asarray(tree2["muon_dtSeg_globY"])
            z = numpy.asarray(tree2["muon_dtSeg_globZ"])

            # Define lists to save leaf data that passes preselection in a given file. This step is necessary to ensure RNN
            # isn't classifying too many events at once. The bottle neck is converting all the data into a tensor so
            # this naturally divides up events by file which is a manageable size to convert to a tensor.
            rnn_data = []
            rnn_t0 = []
            pt_data = []
            chi2_data = []
            ndof_data = []
            tevMuon_chi2_data = []
            tevMuon_ndof_data = []
            tevMuon_numberOfValidHits_data = []
            tevMuon_validFraction_data = []
            #gen_pt_data = []
            n_data = []
            nTrack_data = []
            eta_data = []
            energy_data = []
            total_data = []
            trigger_cut_data = []
            seg_cut_data = []
            pT_cut_data = []

            # To reduce overhead, for each ntuple file, redefine nMax so padding isn't unnecessarily large
            nMax = 0
            for i in range(t0.shape[0]):
                if t0[i][(t0[i] < 9998) & (t0[i] > -998)].shape[0] > nMax: nMax = t0[i][(t0[i] < 9998) & (t0[i] > -998)].shape[0]

            # Loop over each event in ntuple
            for i in range(t0.shape[0]):
                if event_num % 50000 == 0 and event_num != 0:
                    ''' To keep track of progress '''
                    print(event_num, trigger_cut, seg_cut, pT_cut)
                    print(round(100*trigger_cut/event_num, 1), round(100*seg_cut/event_num, 1), round(100*pT_cut/event_num, 1))
                
                event_num += 1
                
                # If event doesn't pass trigger, indicate that and continue to next event
                if trigger[i] == 0:
                    total_data.append(1)
                    trigger_cut_data.append(0)
                    seg_cut_data.append(0)
                    pT_cut_data.append(0)
                    continue

                trigger_cut += 1

                cond = (t0[i] < 9998) & (t0[i] > -998)
                
                # If event doesn't pass nSeg preselection, indicate that and continue
                if numpy.sum(cond) < 3:
                    total_data.append(1)
                    trigger_cut_data.append(1)
                    seg_cut_data.append(0)
                    pT_cut_data.append(0)
                    continue

                seg_cut += 1
                
                # If event doesn't pass nTrack preselection, indicate that and continue
                if len(pt[i]) == 0:
                    total_data.append(1)
                    trigger_cut_data.append(1)
                    seg_cut_data.append(1)
                    pT_cut_data.append(0)
                    continue

                pT_cut += 1

                # Create modified t0 timing to quantify t0 systematic
                sys_t0 = t0[i][cond] + numpy.random.normal(0, 1, size=t0[i][cond].shape)

                # Index by timing and append desired variables to lists
                ind = numpy.argsort(t0[i][cond])
                ind_sys_t0 = numpy.argsort(sys_t0)
                rnn_data.append(numpy.expand_dims(numpy.swapaxes(pad_sequences(numpy.array([numpy.take_along_axis(t0[i][cond], ind, axis=-1), numpy.take_along_axis(x[i][cond], ind, axis=-1), numpy.take_along_axis(y[i][cond], ind, axis=-1), numpy.take_along_axis(z[i][cond], ind, axis=-1)]), dtype='float64', maxlen=nMax, padding='post', value=-9999.),0,1), axis=0))
                rnn_t0.append(numpy.expand_dims(numpy.swapaxes(pad_sequences(numpy.array([numpy.take_along_axis(sys_t0, ind_sys_t0, axis=-1), numpy.take_along_axis(x[i][cond], ind_sys_t0, axis=-1), numpy.take_along_axis(y[i][cond], ind_sys_t0, axis=-1), numpy.take_along_axis(z[i][cond], ind_sys_t0, axis=-1)]), dtype='float64', maxlen=nMax, padding='post', value=-9999.),0,1), axis=0))
                pt_data.append(numpy.max(pt[i]))
                chi2_data.append(numpy.max(chi2[i]))
                ndof_data.append(numpy.max(ndof[i]))
                tevMuon_chi2_data.append(tevMuon_chi2[i][numpy.argmax(pt[i])])
                tevMuon_ndof_data.append(tevMuon_ndof[i][numpy.argmax(pt[i])])
                tevMuon_numberOfValidHits_data.append(tevMuon_numberOfValidHits[i][numpy.argmax(pt[i])])
                tevMuon_validFraction_data.append(tevMuon_validFraction[i][numpy.argmax(pt[i])])
                #gen_pt_data.append(numpy.max(gen_pt[i]))
                eta_data.append(eta[i][numpy.argmax(numpy.abs(eta[i]))])
                energy_data.append(numpy.max(energy[i]))
                n_data.append(len(t0[i][cond]))
                nTrack_data.append(len(pt[i]))
                total_data.append(1)
                trigger_cut_data.append(1)
                seg_cut_data.append(1)
                pT_cut_data.append(1)
                if numpy.max(pt[i]) > 90000:
                    '''To flag high-pT events'''
                    # print("ROOT File:", file)
                    # print("Run Number:", run[i])
                    # print("ls: ", ls[i])
                    # print("event: ", event[i])
                    # print("pT:", numpy.max(pt[i]))
                    # print("nSeg:", len(t0[i][cond]))
                    # print(f"COMMAND: file dataset={labels[n-1]} run={run[i]} lumi={ls[i]}")

            # As long as there are events in the file, classify them
            if len(rnn_data) != 0:
                rnn_scores = model.predict(numpy.concatenate(rnn_data, axis=0))
                rnn_t0_scores = model.predict(numpy.concatenate(rnn_t0, axis=0))
            
            # Append data from each event to 1 element arrays defined initially. Then fill branches and repeat.
            counter = 0
            for i in range(len(total_data)):
                var_pt[0] = -999999
                var_chi2[0] = -999999
                var_ndof[0] = -999999
                var_tevMuon_chi2[0] = -999999
                var_tevMuon_ndof[0] = -999999
                var_tevMuon_numberOfValidHits[0] = -999999
                var_tevMuon_validFraction[0] = -999999
                #var_gen_pt[0] = -999999
                var_nHits[0] = -99
                var_nTrack[0] = -99
                var_rnn[0] = -99
                var_rnn_t0[0] = -99
                var_eta[0] = -99
                var_energy[0] = -99
                trigger_pass[0] = -1
                presel_seg_pass[0] = -1
                presel_pT_pass[0] = -1

                total[0] = total_data[i]

                if trigger_cut_data[i] == 0:
                    tree.Fill()
                    continue
                trigger_pass[0] = trigger_cut_data[i]

                if seg_cut_data[i] == 0:
                    tree.Fill()
                    continue
                presel_seg_pass[0] = seg_cut_data[i]

                if pT_cut_data[i] == 0:
                    tree.Fill()
                    continue

                presel_pT_pass[0] = pT_cut_data[i]
                var_pt[0] = pt_data[counter]
                var_chi2[0] = chi2_data[counter]
                var_ndof[0] = ndof_data[counter]
                var_tevMuon_chi2[0] = tevMuon_chi2_data[counter]
                var_tevMuon_ndof[0] = tevMuon_ndof_data[counter]
                var_tevMuon_numberOfValidHits[0] = tevMuon_numberOfValidHits_data[counter]
                var_tevMuon_validFraction[0] = tevMuon_validFraction_data[counter]
                #var_gen_pt[0] = gen_pt_data[counter]
                var_nHits[0] = n_data[counter]
                var_nTrack[0] = nTrack_data[counter]
                var_rnn[0] = rnn_scores[counter]
                var_rnn_t0[0] = rnn_t0_scores[counter]
                var_eta[0] = eta_data[counter]
                var_energy[0] = energy_data[counter]
                tree.Fill()
                counter += 1
        
        # Write filled up branches to root file and close file in anticipation for next subdir
        tree.Write()
        print(event_num, trigger_cut, seg_cut, pT_cut)
        print(round(100*trigger_cut/event_num, 1), round(100*seg_cut/event_num, 1), round(100*pT_cut/event_num, 1))
        root_file.Close()
    
    except KeyboardInterrupt:
        print("Ctrl+C was pressed!")
        root_file.Close()
        break