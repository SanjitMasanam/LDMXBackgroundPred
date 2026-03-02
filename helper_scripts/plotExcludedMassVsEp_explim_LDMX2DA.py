import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
from matplotlib import cm
from matplotlib.colors import LogNorm
import matplotlib.ticker as mticker
from matplotlib import rcParams
from matplotlib.font_manager import FontProperties
pd.set_option('display.max_columns', None)
plt.rcParams.update({'font.size': 15})

cms_fp = FontProperties(family="sans-serif", weight="bold")  # ≈ font 61

def closest(lst, K): return min(range(len(lst)), key=lambda i: abs(lst[i] - K))

# def y_calc_func(m_x):
#     m_A_list = [0.001, 0.0012366730653835798, 0.00152936027064522, 0.0018913186539746855, 0.0023389428374280203, 0.002892507608519078, 0.0035770862508726162, 0.004423686219008095, 0.005470653596755839, 0.00676540995315175, 0.008366600265340756, 0.010346749196978026, 0.012795546046181909, 0.015823907152188527, 0.01956899976424214, 0.024200454924935874, 0.0299280507756976, 0.037011214293737375, 0.04577077183420477, 0.05660348070917843, 0.07000000000000002, 0.07007000000000001, 0.076193787866788, 0.08285276594104592, 0.0900937073253702, 0.09796747287115372, 0.1065293684285713, 0.11583953331853096, 0.12596336275524284, 0.13697196718653112, 0.14894267177832451, 0.16195955955173807, 0.17611406198777715, 0.19150560124810967, 0.20824228852290788, 0.22644168341100188, 0.24623161966628004, 0.2677511031104347, 0.2911512880190515, 0.31659653883924227, 0.34426558469639684, 0.37435277479938617, 0.40706944356226477, 0.4426453950311777, 0.48133051704318713, 0.5233965364549734, 0.5691389277702555, 0.6188789885722565, 0.6729660963391867, 0.7317801624947681, 0.7957343009312118, 0.8652777297485313, 0.9408989265922004, 1.0231290597524567, 1.1125457191255168, 1.2097769732432238, 1.3155057808679755, 1.4304747881402573, 1.5554915449742717, 1.6914341773419719, 1.8392575552879875, 1.9999999999999993]
#     y_list = [1.1624526215397256e-13, 1.8499965991914807e-13, 2.8820968690533657e-13, 4.3759199992998257e-13, 6.543006558167147e-13, 9.77337787581875e-13, 1.4727072933669024e-12, 2.237738727024082e-12, 3.448215875987076e-12, 5.43698129903051e-12, 8.386013827375133e-12, 1.3199852993557314e-11, 2.087573845415636e-11, 3.306175193235173e-11, 5.2415537512736647e-11, 8.311160739084584e-11, 1.317900889057147e-10, 2.090618402987901e-10, 3.3118345554124715e-10, 5.250764020824616e-10, 8.309326876170143e-10, 8.321720042375674e-10, 9.831952470353677e-10, 1.1735959034866532e-9, 1.3931651408884446e-9, 1.572958694053173e-9, 1.399583770579172e-9, 1.4582141658346638e-9, 1.6337892018768655e-9, 1.8767029864151678e-9, 2.1649599865154807e-9, 2.4938817785560145e-9, 2.8733126782127946e-9, 3.306369413561811e-9, 3.771488920729027e-9, 4.249433621489174e-9, 4.6146240562150864e-9, 4.9318780771376625e-9, 4.874312449641469e-9, 4.070076822857117e-9, 2.966142979098644e-9, 2.635821496946105e-9, 6.6264410186669436e-9, 1.1344313044687645e-8, 8.857220969637143e-9, 1.928112656151557e-8, 2.321050040827506e-8, 2.5550065749530778e-8, 2.6883115192881515e-8, 2.785234266833842e-8, 3.0618300626836945e-8, 3.784192509811736e-8, 4.8223995555937076e-8, 5.7069054145975544e-8, 6.753583802411422e-8, 7.933990860846672e-8, 9.15923980005424e-8, 9.553083010693836e-8, 1.0629860906656293e-7, 1.194476824697889e-7, 1.281522875896667e-7, 1.4507006907331348e-7]
#     m_A = m_x
#     closest_idx = closest(m_A_list, m_A)
#     return y_list[closest_idx]

# Create a square figure similar to the original aspect ratio
fig, _axs = plt.subplots(nrows=1, ncols=2, figsize=(10,5), constrained_layout=True)
fig.subplots_adjust(hspace=0.3)
axs = _axs.flatten()

exp_lim_scalar_dm = [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0.0006010691111689618, 0.0009023469668191054, 0.0011828299401437342, 0.0014452042392923646, 0.0016916670088115429, 0.0019240382888992319, 0.0021438426636766423, 0.002352369942094915, 0.0049221490778191225, 0.007705511314304053, 0.009864454792254743, 0.01162844005470968, 0.013119868343247142, 0.014411802291194611, 0.015551368795115305, 0.016570745769145297, 0.017492884409760143, 0.01833473103160024, 0.019109154852819984, 0.019826159320137704, 0.020493674509550922, 0.02111809326808517, 0.021704644531175533, 0.022257659772005868, 0.0227807673144148, 0.02327703674603586, 0.02719996548644148, 0.029983327722926417, 0.0321422712008771, 0.03558729701408097, 0.041452250228953755, 0.04653270379125552, 0.05101398142431224, 0.055022620865412875, 0.05864887633233578, 0.061959388201486804, 0.06500476390935324, 0.0678243414163596, 0.07044930527564415, 0.07290479497866136, 0.0752113730036249, 0.07738607261171807, 0.07944316197106238, 0.08139471205281872, 0.09682139646304999, 0.10776680324022453, 0.1162567203143819, 0.12319348765045583, 0.1290584408653286, 0.13413889442763038, 0.1386201720606871, 0.14262881150178774, 0.14625506696871066, 0.14956557883786167, 0.1526109545457281, 0.15543053205273447, 0.158055495912019, 0.16051098561503624, 0.16281756363999977, 0.16499226324809294, 0.16704935260743722, 0.16900090268919357, 0.18442758709942483, 0.19537299387659943, 0.20386291095075673, 0.2107996782868307, 0.21666463150170348, 0.22174508506400523, 0.22622636269706198, 0.2302350021381626]
exp_lim_scalar_dm_closed = [-1] * len(exp_lim_scalar_dm)
y = [
    0.00001,
    0.000011,
    0.000012,
    0.000013,
    0.000014,
    0.000015,
    0.000016,
    0.000017,
    0.000018,
    0.000019,
    0.00002,
    0.00003,
    0.00004,
    0.00005,
    0.00006,
    0.00007,
    0.00008,
    0.00009,
    0.0001,
    0.00011,
    0.00012,
    0.00013,
    0.00014,
    0.00015,
    0.00016,
    0.00017,
    0.00018,
    0.00019,
    0.0002,
    0.0003,
    0.0004,
    0.0005,
    0.0006,
    0.0007,
    0.0008,
    0.0009,
    0.001,
    0.0011,
    0.0012,
    0.0013,
    0.0014,
    0.0015,
    0.0016,
    0.0017,
    0.0018,
    0.0019,
    0.002,
    0.003,
    0.004,
    0.005,
    0.006,
    0.007,
    0.008,
    0.009,
    0.01,
    0.011,
    0.012,
    0.013,
    0.014,
    0.015,
    0.016,
    0.017,
    0.018,
    0.019,
    0.02,
    0.03,
    0.04,
    0.05,
    0.06,
    0.07,
    0.08,
    0.09,
    0.1,
    0.11,
    0.12,
    0.13,
    0.14,
    0.15,
    0.16,
    0.17,
    0.18,
    0.19,
    0.2,
    0.3,
    0.4,
    0.5,
    0.6,
    0.7,
    0.8,
    0.9,
    1
]
thermal_exp_lim = [100] * len(y)

x1 = [x * 1000 for x in exp_lim_scalar_dm]
y1 = [y_indiv * 6.17/10**(7) for y_indiv in y] # y_indiv * y_ref = true_y

print(x1, y1)

x2 = [x * 1000 for x in exp_lim_scalar_dm_closed]
y2 = [1 for y_indiv in y] # y_indiv * y_ref = true_y

print(x2, y2)

n = 0
for ax in axs:
    # --- Axes setup ------------------------------------------------------------
    ax.set_xscale('log')
    ax.set_yscale('log')
    ax.set_xlim(1, 1000)  # m_{A'} in GeV
    ax.set_ylim(1e-14, 1e-7)    # ε

    # Label the primary axes
    ax.set_xlabel(r"$m_\chi\;\mathrm{[GeV]}$")
    ax.set_ylabel(r"$y=\epsilon^{2}\alpha_{D}(m_{\chi}/m_{A'})^4$")
    #if n == 1: ax.tick_params(axis='y', which='both', right=False, labeleft=False)
    if n == 0:
        label = (
            r"$m_{A^\prime} = 3m_{\chi}$"
            "\n"
            r"$\alpha_{x}^{\text{thermal}}=0.035\;\mathrm{m_{\chi}/GeV}$"
        )
    elif n == 1:
        label = (
            r"$\alpha_{D}=0.5, m_{A^\prime} = 3m_{\chi}$"
            #"\n"
            #r"Depth = $10^{2}$ mm"
        )

    # --- Text annotations (place‐holders) --------------------------------------
    # Title–style annotation at the top centre
    ax.annotate(label, xy=(0.96, 0.2), xycoords="axes fraction", ha="right", va="top")

    if n == 1: 
        ax.plot(x1, y1, color='blue', linestyle='solid', label='Scalar DM Limit')
        ax.plot(x2, y2, color='blue', linestyle='solid')
        #ax.plot(x3, y3, color='red', linestyle='dashed')
        #ax.plot(x4, y4, color='green', linestyle='dashed')
        #ax.plot(x5, y5, color='green', linestyle='dashed')
        #ax.plot([x * 1000 for x in [2.3285008831831036, 2.2392995473298534]], [y[1], y[11]], color='blue', linestyle='dashed')
    else: ax.plot([x * 1000 for x in thermal_exp_lim], y, color='black', linestyle='dashed')

    ax.fill(
    x1 + x2[::-1],   # go along first curve, then back along second
    y1 + y2[::-1],
    color='blue', alpha=0.3
    )
    #ax.fill_between(x1,y1, 1, color='blue', edgecolor='none', alpha=0.3)
    #ax.fill_between(x2,y2, 1, color='blue', edgecolor='none', alpha=0.3)
    # Greys looks nice when shaded; pick any sequential map you like
    #CS = ax.contourf(X, Y, Z,
                    # levels=levels,
                    # norm=norm,
                    # cmap='Greys',         # or 'viridis', 'plasma', …
                    # extend='both')        # show arrows if Z spills outside bounds

    #C = ax.contour(X, Y, Z, levels=[1, 10], cmap='bwr', linewidths=1)
    #ax.clabel(C, fontsize=10)

    #ax.scatter([4210, 3440, 4970, 6750, 8880], [1e-08, 4e-08, 5e-08, 6e-08, 7e-08], marker="x", color='red', label='Expected Excluded Mass (2DA)')
    # Remove top and right spines for a cleaner look
    ax.spines[['top', 'right']].set_visible(False)
    ax.legend(loc='lower right', framealpha=1)
    n+=1

#cbar = fig.colorbar(CS, label='Monthly Muon Rate',         # the mappable & label
                    # ax=axs,                  # a list/array of *all* target axes
                    # location='right',
                    # pad=0.02, shrink=0.9)
#cbar.locator   = mticker.LogLocator(base=10, subs=(1.,))
#cbar.formatter = mticker.LogFormatterMathtext(base=10, labelOnlyBase=True)
#cbar.update_ticks()
#cbar.add_lines(C)
for side in ("left", "right", "top", "bottom"):
        axs[0].spines[side].set_visible(True)
        axs[1].spines[side].set_visible(True)

GeV_formatter = mticker.FuncFormatter(lambda x, pos: f"{x*1e-3:g}")

for ax in axs.flat:
    # ax.text(0.02, 1.04,                        # a tiny margin from left & top
    #         r"CMS Work in Progress",
    #         fontproperties=cms_fp,
    #         transform=ax.transAxes,            # axes-fraction coordinates
    #         ha='left', va='top',
    #         fontsize=15, fontweight='bold',
    #         clip_on=False,               # <-- important: don’t clip outside frame
    #         zorder=10)
    ax.text(0.98, 1.04,                        # a tiny margin from left & top
            r"5e13 EoT",
            transform=ax.transAxes,            # axes-fraction coordinates
            ha='right', va='top',
            fontsize=15,
            clip_on=False,               # <-- important: don’t clip outside frame
            zorder=10)
    ax.xaxis.set_major_formatter(GeV_formatter)

plt.savefig("ExcludedMass_mX_yYref.png")