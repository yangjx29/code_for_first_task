int main () {
    int qAWBxp = 0, Q1caf9XwNCmt = 0, XGiJBD1E7 = 0, LliXUPdT3cGB = 0;
    double  VZeSxTgi1 [45] = {0};
    int WK5aBpYRF2 [10] [3] = {0};
    int Xl4n5vDKYo3 [45] [2] = {0};
    cin >> qAWBxp;
    {
        Q1caf9XwNCmt = 0;
        while (Q1caf9XwNCmt < qAWBxp) {
            {
                XGiJBD1E7 = 0;
                while (XGiJBD1E7 < 3) {
                    cin >> WK5aBpYRF2[Q1caf9XwNCmt][XGiJBD1E7];
                    XGiJBD1E7 = XGiJBD1E7 +1;
                }
            }
            Q1caf9XwNCmt = Q1caf9XwNCmt +1;
        }
    }
    {
        Q1caf9XwNCmt = 0;
        while (qAWBxp > Q1caf9XwNCmt) {
            {
                XGiJBD1E7 = Q1caf9XwNCmt +1;
                while (qAWBxp > XGiJBD1E7) {
                    VZeSxTgi1[LliXUPdT3cGB] = sqrt ((double ) (WK5aBpYRF2[Q1caf9XwNCmt][0] - WK5aBpYRF2[XGiJBD1E7][0]) * (WK5aBpYRF2[Q1caf9XwNCmt][0] - WK5aBpYRF2[XGiJBD1E7][0]) + (WK5aBpYRF2[Q1caf9XwNCmt][1] - WK5aBpYRF2[XGiJBD1E7][1]) * (WK5aBpYRF2[Q1caf9XwNCmt][1] - WK5aBpYRF2[XGiJBD1E7][1]) + (WK5aBpYRF2[Q1caf9XwNCmt][2] - WK5aBpYRF2[XGiJBD1E7][2]) * (WK5aBpYRF2[Q1caf9XwNCmt][2] - WK5aBpYRF2[XGiJBD1E7][2]));
                    Xl4n5vDKYo3[LliXUPdT3cGB][0] = Q1caf9XwNCmt;
                    Xl4n5vDKYo3[LliXUPdT3cGB][1] = XGiJBD1E7;
                    LliXUPdT3cGB++;
                    XGiJBD1E7 = XGiJBD1E7 +1;
                }
            }
            Q1caf9XwNCmt = Q1caf9XwNCmt +1;
        }
    }
    {
        Q1caf9XwNCmt = 0;
        while (qAWBxp * (qAWBxp - 1) / 2 > Q1caf9XwNCmt) {
            {
                XGiJBD1E7 = 0;
                while (XGiJBD1E7 < qAWBxp * (qAWBxp - 1) / 2 - Q1caf9XwNCmt -1) {
                    if (VZeSxTgi1[XGiJBD1E7 +1] - VZeSxTgi1[XGiJBD1E7] > 1e-4) {
                        int CiWOpUHo7;
                        double  WzB8sUMtG;
                        WzB8sUMtG = VZeSxTgi1[XGiJBD1E7];
                        VZeSxTgi1[XGiJBD1E7] = VZeSxTgi1[XGiJBD1E7 +1];
                        CiWOpUHo7 = Xl4n5vDKYo3[XGiJBD1E7][0];
                        Xl4n5vDKYo3[XGiJBD1E7][0] = Xl4n5vDKYo3[XGiJBD1E7 +1][0];
                        Xl4n5vDKYo3[XGiJBD1E7 +1][0] = CiWOpUHo7;
                        VZeSxTgi1[XGiJBD1E7 +1] = WzB8sUMtG;
                        CiWOpUHo7 = Xl4n5vDKYo3[XGiJBD1E7][1];
                        Xl4n5vDKYo3[XGiJBD1E7][1] = Xl4n5vDKYo3[XGiJBD1E7 +1][1];
                        Xl4n5vDKYo3[XGiJBD1E7 +1][1] = CiWOpUHo7;
                    }
                    XGiJBD1E7 = XGiJBD1E7 +1;
                }
            }
            Q1caf9XwNCmt = Q1caf9XwNCmt +1;
        }
    }
    {
        Q1caf9XwNCmt = 0;
        while (Q1caf9XwNCmt < qAWBxp * (qAWBxp - 1) / 2) {
            cout << "(" << WK5aBpYRF2[Xl4n5vDKYo3[Q1caf9XwNCmt][0]][0] << "," << WK5aBpYRF2[Xl4n5vDKYo3[Q1caf9XwNCmt][0]][1] << "," << WK5aBpYRF2[Xl4n5vDKYo3[Q1caf9XwNCmt][0]][2] << ")-(" << WK5aBpYRF2[Xl4n5vDKYo3[Q1caf9XwNCmt][1]][0] << "," << WK5aBpYRF2[Xl4n5vDKYo3[Q1caf9XwNCmt][1]][1] << "," << WK5aBpYRF2[Xl4n5vDKYo3[Q1caf9XwNCmt][1]][2] << ")=" << fixed << setprecision (2) << VZeSxTgi1[Q1caf9XwNCmt] << endl;
            Q1caf9XwNCmt++;
        }
    }
    return 0;
}

