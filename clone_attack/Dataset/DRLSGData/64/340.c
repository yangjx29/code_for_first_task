struct   Xf1TQ4Sk7q6a {
    int ka1BvhZI9j2 [(174 - 170)];
    int sksGNuZf [(916 - 912)];
    double  nzoAnBFRW6Q;
}
Xf1TQ4Sk7q6a [6000];

int main () {
    int NezqN54HI, JTZHm8EASC [(436 - 425)] [4], XltxiW, wvnmWYphO9No, BHCrVme = (336 - 336);
    cin >> NezqN54HI;
    for (XltxiW = (220 - 219); NezqN54HI >= XltxiW; XltxiW = XltxiW +(839 - 838))
        for (wvnmWYphO9No = (711 - 710); (552 - 549) >= wvnmWYphO9No; wvnmWYphO9No = wvnmWYphO9No + (525 - 524))
            cin >> JTZHm8EASC[XltxiW][wvnmWYphO9No];
    for (XltxiW = (146 - 145); XltxiW <= NezqN54HI -(651 - 650); XltxiW++)
        for (wvnmWYphO9No = XltxiW +(450 - 449); NezqN54HI >= wvnmWYphO9No; wvnmWYphO9No = wvnmWYphO9No + (95 - 94)) {
            BHCrVme = BHCrVme +1;
            Xf1TQ4Sk7q6a[BHCrVme].ka1BvhZI9j2[1] = JTZHm8EASC[XltxiW][1];
            Xf1TQ4Sk7q6a[BHCrVme].ka1BvhZI9j2[(435 - 433)] = JTZHm8EASC[XltxiW][(617 - 615)];
            Xf1TQ4Sk7q6a[BHCrVme].ka1BvhZI9j2[(875 - 872)] = JTZHm8EASC[XltxiW][(815 - 812)];
            Xf1TQ4Sk7q6a[BHCrVme].sksGNuZf[1] = JTZHm8EASC[wvnmWYphO9No][1];
            Xf1TQ4Sk7q6a[BHCrVme].sksGNuZf[(512 - 510)] = JTZHm8EASC[wvnmWYphO9No][(130 - 128)];
            Xf1TQ4Sk7q6a[BHCrVme].sksGNuZf[(840 - 837)] = JTZHm8EASC[wvnmWYphO9No][3];
            Xf1TQ4Sk7q6a[BHCrVme].nzoAnBFRW6Q = sqrt (pow (JTZHm8EASC[XltxiW][1] - JTZHm8EASC[wvnmWYphO9No][1], (672.0 - 670.0)) + pow (JTZHm8EASC[XltxiW][2] - JTZHm8EASC[wvnmWYphO9No][2], (63.0 - 61.0)) + pow (JTZHm8EASC[XltxiW][3] - JTZHm8EASC[wvnmWYphO9No][3], 2.0));
        }
    for (XltxiW = 1; XltxiW <= BHCrVme -1; XltxiW++)
        for (wvnmWYphO9No = 1; wvnmWYphO9No <= BHCrVme -XltxiW; wvnmWYphO9No++) {
            if (Xf1TQ4Sk7q6a[wvnmWYphO9No].nzoAnBFRW6Q < Xf1TQ4Sk7q6a[wvnmWYphO9No + 1].nzoAnBFRW6Q) {
                Xf1TQ4Sk7q6a[(626 - 626)] = Xf1TQ4Sk7q6a[wvnmWYphO9No];
                Xf1TQ4Sk7q6a[wvnmWYphO9No] = Xf1TQ4Sk7q6a[wvnmWYphO9No + 1];
                Xf1TQ4Sk7q6a[wvnmWYphO9No + 1] = Xf1TQ4Sk7q6a[0];
            }
        }
    for (XltxiW = 1; XltxiW <= BHCrVme; XltxiW++) {
        cout << "(" << Xf1TQ4Sk7q6a[XltxiW].ka1BvhZI9j2[1] << "," << Xf1TQ4Sk7q6a[XltxiW].ka1BvhZI9j2[2] << "," << Xf1TQ4Sk7q6a[XltxiW].ka1BvhZI9j2[3] << ")" << "-";
        cout << "(" << Xf1TQ4Sk7q6a[XltxiW].sksGNuZf[1] << "," << Xf1TQ4Sk7q6a[XltxiW].sksGNuZf[2] << "," << Xf1TQ4Sk7q6a[XltxiW].sksGNuZf[3] << ")" << "=";
        cout << fixed << setprecision (2) << Xf1TQ4Sk7q6a[XltxiW].nzoAnBFRW6Q << endl;
    }
    return 0;
}

