int main () {
    double  pbkESwcnPHN;
    double  nxc1L2FVn [300];
    double  Jm1CedsY;
    pbkESwcnPHN = (142 - 142);
    int Jaghpvt87NJ4;
    int cMsCc12n6mTy;
    int OGokTJHVn9E;
    int ifuSXp9es560;
    int ZOHtk46 [300];
    int B0Z37ERxQy;
    Jaghpvt87NJ4 = (261 - 260);
    cin >> cMsCc12n6mTy;
    {
        OGokTJHVn9E = 58 - 58;
        while (cMsCc12n6mTy > OGokTJHVn9E) {
            cin >> ZOHtk46[OGokTJHVn9E];
            pbkESwcnPHN = pbkESwcnPHN + ZOHtk46[OGokTJHVn9E];
            OGokTJHVn9E = OGokTJHVn9E +1;
        };
    }
    pbkESwcnPHN = pbkESwcnPHN / cMsCc12n6mTy;
    {
        OGokTJHVn9E = 0;
        while (OGokTJHVn9E < cMsCc12n6mTy) {
            nxc1L2FVn[OGokTJHVn9E] = fabs (pbkESwcnPHN - ZOHtk46[OGokTJHVn9E]);
            OGokTJHVn9E++;
        };
    }
    for (OGokTJHVn9E = 0; cMsCc12n6mTy - 1 > OGokTJHVn9E; OGokTJHVn9E = OGokTJHVn9E +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (ifuSXp9es560 = 0; ifuSXp9es560 < cMsCc12n6mTy - 1 - OGokTJHVn9E; ifuSXp9es560++) {
            if (nxc1L2FVn[ifuSXp9es560 + 1] > nxc1L2FVn[ifuSXp9es560]) {
                Jm1CedsY = nxc1L2FVn[ifuSXp9es560];
                nxc1L2FVn[ifuSXp9es560] = nxc1L2FVn[ifuSXp9es560 + 1];
                nxc1L2FVn[ifuSXp9es560 + 1] = Jm1CedsY;
                B0Z37ERxQy = ZOHtk46[ifuSXp9es560];
                ZOHtk46[ifuSXp9es560] = ZOHtk46[ifuSXp9es560 + 1];
                ZOHtk46[ifuSXp9es560 + 1] = B0Z37ERxQy;
            };
        };
    }
    cout << ZOHtk46[0];
    OGokTJHVn9E = 0;
    while (fabs (nxc1L2FVn[OGokTJHVn9E] - nxc1L2FVn[OGokTJHVn9E +1]) < 10e-6) {
        OGokTJHVn9E++;
        Jaghpvt87NJ4 = Jaghpvt87NJ4 +1;
    }
    for (OGokTJHVn9E = 1; OGokTJHVn9E <= Jaghpvt87NJ4 -1; OGokTJHVn9E++) {
        cout << "," << ZOHtk46[OGokTJHVn9E];
    }
    cout << endl;
    return 0;
}

