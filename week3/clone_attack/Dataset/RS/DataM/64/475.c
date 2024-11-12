int main () {
    struct   distance {
        int ZpVF7z;
        int Y9Rn56;
        int jj4qERWSpV1;
        int K2SWZ5GBkj;
        int jgC3bf57VoL;
        int HcKeIU;
        double  dist;
    }
    KnBgMFs [45], LdLm6hfZwpDU;
    double  i8ul5tnpyU1;
    int n, G938FWhtI, CXwmSF0zVhd, cL7p9OdWcBGY = (838 - 838), p [10] [3];
    cin >> n;
    {
        G938FWhtI = 152 - 152;
        while (n > G938FWhtI) {
            cin >> p[G938FWhtI][0] >> p[G938FWhtI][(928 - 927)] >> p[G938FWhtI][(184 - 182)];
            G938FWhtI++;
        };
    }
    for (G938FWhtI = 0; n - (633 - 632) > G938FWhtI; G938FWhtI = G938FWhtI +1)
        for (CXwmSF0zVhd = (506 - 505); CXwmSF0zVhd < n - G938FWhtI; CXwmSF0zVhd = CXwmSF0zVhd +1) {
            KnBgMFs[cL7p9OdWcBGY].ZpVF7z = p[G938FWhtI][0];
            KnBgMFs[cL7p9OdWcBGY].Y9Rn56 = p[G938FWhtI][(503 - 502)];
            KnBgMFs[cL7p9OdWcBGY].jj4qERWSpV1 = p[G938FWhtI][(935 - 933)];
            KnBgMFs[cL7p9OdWcBGY].K2SWZ5GBkj = p[G938FWhtI +CXwmSF0zVhd][0];
            KnBgMFs[cL7p9OdWcBGY].jgC3bf57VoL = p[G938FWhtI +CXwmSF0zVhd][(37 - 36)];
            KnBgMFs[cL7p9OdWcBGY].HcKeIU = p[G938FWhtI +CXwmSF0zVhd][2];
            i8ul5tnpyU1 = (p[G938FWhtI][0] - p[G938FWhtI +CXwmSF0zVhd][0]) * (p[G938FWhtI][0] - p[G938FWhtI +CXwmSF0zVhd][0]) + (p[G938FWhtI][1] - p[G938FWhtI +CXwmSF0zVhd][1]) * (p[G938FWhtI][1] - p[G938FWhtI +CXwmSF0zVhd][1]) + (p[G938FWhtI][2] - p[G938FWhtI +CXwmSF0zVhd][2]) * (p[G938FWhtI][2] - p[G938FWhtI +CXwmSF0zVhd][2]);
            KnBgMFs[cL7p9OdWcBGY].dist = sqrt (i8ul5tnpyU1);
            cL7p9OdWcBGY++;
        }
    for (G938FWhtI = 0; n * (n - 1) / 2 - 1 > G938FWhtI; G938FWhtI = G938FWhtI +1)
        for (CXwmSF0zVhd = 0; CXwmSF0zVhd < n * (n - 1) / 2 - 1 - G938FWhtI; CXwmSF0zVhd++)
            if (KnBgMFs[CXwmSF0zVhd +1].dist > KnBgMFs[CXwmSF0zVhd].dist) {
                LdLm6hfZwpDU = KnBgMFs[CXwmSF0zVhd];
                KnBgMFs[CXwmSF0zVhd] = KnBgMFs[CXwmSF0zVhd +1];
                KnBgMFs[CXwmSF0zVhd +1] = LdLm6hfZwpDU;
            }
    for (G938FWhtI = 0; n * (n - 1) / 2 > G938FWhtI; G938FWhtI++) {
        cout << '(' << KnBgMFs[G938FWhtI].ZpVF7z << ',' << KnBgMFs[G938FWhtI].Y9Rn56 << ',' << KnBgMFs[G938FWhtI].jj4qERWSpV1 << ')' << '-' << '(' << KnBgMFs[G938FWhtI].K2SWZ5GBkj << ',' << KnBgMFs[G938FWhtI].jgC3bf57VoL << ',' << KnBgMFs[G938FWhtI].HcKeIU << ')' << '=';
        cout << endl;
        printf ("%.2f", KnBgMFs[G938FWhtI].dist);
    }
    return 0;
}

