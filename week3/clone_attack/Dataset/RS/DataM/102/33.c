int main () {
    int DkZgwe5P;
    int qPHO8oRM;
    int zIrFaGCy;
    int mUZhB9bOrf;
    int yZ1UEdfDrnV0;
    DkZgwe5P = (277 - 276);
    qPHO8oRM = (523 - 522);
    double  TEdxbgGr [(952 - 912)];
    double  vY1z4ylqUmiE [(665 - 625)];
    double  Tvrb2LRj;
    char LPIAflp7bZ49 [(472 - 431)] [(329 - 322)];
    char y70JgCB2w [7] = {'m', 'a', 'l', 'e'};
    cin >> zIrFaGCy;
    for (mUZhB9bOrf = (947 - 946); zIrFaGCy >= mUZhB9bOrf; mUZhB9bOrf = mUZhB9bOrf + 1) {
        cin >> LPIAflp7bZ49[mUZhB9bOrf];
        if (!(0 != strcmp (LPIAflp7bZ49[mUZhB9bOrf], y70JgCB2w))) {
            cin >> TEdxbgGr[DkZgwe5P];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            DkZgwe5P++;
        }
        else {
            cin >> vY1z4ylqUmiE[qPHO8oRM];
            qPHO8oRM++;
        };
    }
    DkZgwe5P = DkZgwe5P -1;
    for (mUZhB9bOrf = 1; DkZgwe5P > mUZhB9bOrf; mUZhB9bOrf++) {
        for (yZ1UEdfDrnV0 = mUZhB9bOrf + 1; DkZgwe5P >= yZ1UEdfDrnV0; yZ1UEdfDrnV0 = yZ1UEdfDrnV0 + 1) {
            if (TEdxbgGr[yZ1UEdfDrnV0] < TEdxbgGr[mUZhB9bOrf]) {
                Tvrb2LRj = TEdxbgGr[mUZhB9bOrf];
                TEdxbgGr[mUZhB9bOrf] = TEdxbgGr[yZ1UEdfDrnV0];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                TEdxbgGr[yZ1UEdfDrnV0] = Tvrb2LRj;
            };
        };
    }
    qPHO8oRM--;
    {
        mUZhB9bOrf = 1;
        while (qPHO8oRM > mUZhB9bOrf) {
            for (yZ1UEdfDrnV0 = mUZhB9bOrf + 1; yZ1UEdfDrnV0 <= qPHO8oRM; yZ1UEdfDrnV0++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                if (vY1z4ylqUmiE[mUZhB9bOrf] < vY1z4ylqUmiE[yZ1UEdfDrnV0]) {
                    Tvrb2LRj = vY1z4ylqUmiE[mUZhB9bOrf];
                    vY1z4ylqUmiE[mUZhB9bOrf] = vY1z4ylqUmiE[yZ1UEdfDrnV0];
                    vY1z4ylqUmiE[yZ1UEdfDrnV0] = Tvrb2LRj;
                };
            }
            mUZhB9bOrf++;
        };
    }
    for (mUZhB9bOrf = 1; mUZhB9bOrf <= DkZgwe5P; mUZhB9bOrf++) {
        cout << fixed << setprecision ((399 - 397)) << TEdxbgGr[mUZhB9bOrf] << " ";
    }
    for (mUZhB9bOrf = 1; mUZhB9bOrf <= qPHO8oRM; mUZhB9bOrf++) {
        cout << fixed << setprecision (2) << vY1z4ylqUmiE[mUZhB9bOrf];
        if (mUZhB9bOrf != qPHO8oRM) {
            cout << " ";
        }
        else {
            cout << endl;
        };
    }
    return 0;
}

