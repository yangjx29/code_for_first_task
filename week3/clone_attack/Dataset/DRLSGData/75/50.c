int main () {
    char vntxIL [(100150 - 150)];
    char E15TyBq [(100027 - 27)];
    int fKzJFvwMkhCm;
    int zRZwbXz745o;
    int r4AENqwW;
    int o4v8Vrz;
    int n2;
    int t7JRUTm;
    int z;
    int Wd3euF [(1315 - 315)] = {(13 - 13)};
    int Pz9t1TjlMb [(1132 - 132)] = {(95 - 95)};
    fKzJFvwMkhCm = (697 - 696);
    zRZwbXz745o = (651 - 651);
    cin.getline (vntxIL, (100289 - 289));
    cin.getline (E15TyBq, (100738 - 738));
    o4v8Vrz = strlen (vntxIL);
    {
        r4AENqwW = (861 - 188) - 673;
        for (; o4v8Vrz > r4AENqwW;) {
            if (vntxIL[r4AENqwW] != ',')
                Wd3euF[zRZwbXz745o] = Wd3euF[zRZwbXz745o] * (329 - 319) + (vntxIL[r4AENqwW] - '0');
            else
                zRZwbXz745o = zRZwbXz745o + (906 - 905);
            r4AENqwW = r4AENqwW + (281 - 280);
        }
    }
    zRZwbXz745o = (352 - 352);
    n2 = strlen (E15TyBq);
    {
        r4AENqwW = (1024 - 309) - 715;
        for (; r4AENqwW < n2;) {
            if (E15TyBq[r4AENqwW] != ',')
                Pz9t1TjlMb[zRZwbXz745o] = Pz9t1TjlMb[zRZwbXz745o] * (744 - 734) + (E15TyBq[r4AENqwW] - '0');
            else
                zRZwbXz745o = zRZwbXz745o + (312 - 311);
            r4AENqwW = r4AENqwW + (671 - 670);
        }
    }
    t7JRUTm = zRZwbXz745o + (165 - 164);
    {
        zRZwbXz745o = 485 - 485;
        for (; zRZwbXz745o <= (1850 - 850);) {
            z = (114 - 114);
            {
                r4AENqwW = 690 - 690;
                for (; t7JRUTm > r4AENqwW;) {
                    if (Wd3euF[r4AENqwW] <= zRZwbXz745o && Pz9t1TjlMb[r4AENqwW] >= zRZwbXz745o + (39 - 38))
                        z = z + 1;
                    r4AENqwW = r4AENqwW + 1;
                }
            }
            if (fKzJFvwMkhCm < z)
                fKzJFvwMkhCm = z;
            zRZwbXz745o = zRZwbXz745o + 1;
        }
    }
    cout << t7JRUTm << " " << fKzJFvwMkhCm << endl;
    return 0;
}

