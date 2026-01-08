python extractDMLimits.py

python harvestToContours.py --inputFile DMLimits.json  -x m2 -y m1 --useUpperLimit --debug --forbiddenFunction 2\*x --yMax 1e-07 --yMin 1e-08 --xMax 10000 --xMin 3000 --logY -o output_BR100pct.root

python harvestToContours.py --inputFile DMLimits.json  -x m2 -y m1 --useUpperLimit --debug --forbiddenFunction 2\*x --yMax 1e-07 --yMin 1e-08 --xMax 10000 --xMin 3000 --logY --level 0.1 -o output_BR10pct.root

python harvestToContours.py --inputFile DMLimits.json  -x m2 -y m1 --useUpperLimit --debug --forbiddenFunction 2\*x --yMax 1e-07 --yMin 1e-08 --xMax 10000 --xMin 3000 --logY --level 0.001 -o output_BR1pct.root

python 2dplot.py outputGraphs.root



