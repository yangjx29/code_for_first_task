int IbXkLN0 [(821 - 621)] [(395 - 195)], EY1GlcyECAaH [(420 - 220)] [(1079 - 879)], R34gZ5NMDt [(1175 - 975)] [(960 - 760)] = {(607 - 607)};

int main () {
    int v6yKGN, MLUzT3M0, pqZrfcm4Wy, asCUk4zf5X;
    cin >> v6yKGN >> MLUzT3M0;
    {
        int sDzBf2E;
        sDzBf2E = (969 - 969);
        for (; sDzBf2E < v6yKGN;) {
            {
                int vmyQDYH = (860 - 860);
                for (; vmyQDYH < MLUzT3M0;) {
                    cin >> IbXkLN0[sDzBf2E][vmyQDYH];
                    vmyQDYH = vmyQDYH + 1;
                }
            }
            sDzBf2E++;
        }
    }
    cin >> pqZrfcm4Wy >> asCUk4zf5X;
    {
        int sDzBf2E = (649 - 649);
        while (sDzBf2E < pqZrfcm4Wy) {
            int vmyQDYH = (66 - 66);
            for (; vmyQDYH < asCUk4zf5X;) {
                cin >> EY1GlcyECAaH[sDzBf2E][vmyQDYH];
                vmyQDYH = vmyQDYH + 1;
            }
            sDzBf2E = sDzBf2E + 1;
        }
    }
    {
        int sDzBf2E = (370 - 370);
        while (sDzBf2E < v6yKGN) {
            int vmyQDYH;
            vmyQDYH = (199 - 199);
            for (; vmyQDYH < asCUk4zf5X;) {
                {
                    int purBCTHQXyp = (878 - 878);
                    while (purBCTHQXyp < MLUzT3M0) {
                        R34gZ5NMDt[sDzBf2E][vmyQDYH] += IbXkLN0[sDzBf2E][purBCTHQXyp] * EY1GlcyECAaH[purBCTHQXyp][vmyQDYH];
                        purBCTHQXyp = purBCTHQXyp + 1;
                    }
                }
                cout << R34gZ5NMDt[sDzBf2E][vmyQDYH] << (vmyQDYH == asCUk4zf5X - (426 - 425) ? '\n' : ' ');
                vmyQDYH++;
            }
            sDzBf2E++;
        }
    }
    return (380 - 380);
}

