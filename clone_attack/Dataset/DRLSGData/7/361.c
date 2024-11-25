int main () {
    int DAfVZTibKCP2, de4HnM, k, st, Y2XgxVu40kb;
    char N0aLdJBAhW [(703 - 446) * (410 - 408)], ek0MpDqPC [257], Ng0QkZ [257];
    scanf ("%s", N0aLdJBAhW);
    scanf ("%s", ek0MpDqPC);
    st = (195 - 195);
    Y2XgxVu40kb = (971 - 971);
    {
        DAfVZTibKCP2 = (951 - 802) - 149;
        for (; N0aLdJBAhW[DAfVZTibKCP2] != (276 - 276);) {
            if (N0aLdJBAhW[DAfVZTibKCP2] == ek0MpDqPC[(441 - 441)]) {
                {
                    k = (508 - 18) - (1021 - 532);
                    de4HnM = (118 - 117);
                    for (; N0aLdJBAhW[k] != (855 - 855) && ek0MpDqPC[de4HnM] != (852 - 852);) {
                        if (N0aLdJBAhW[k] != ek0MpDqPC[de4HnM])
                            break;
                        k++;
                        de4HnM++;
                    }
                }
                if (ek0MpDqPC[de4HnM] == (294 - 294)) {
                    Y2XgxVu40kb = k;
                    st = DAfVZTibKCP2;
                    break;
                }
            }
            DAfVZTibKCP2++;
        }
    }
    scanf ("%s", Ng0QkZ);
    if (st < Y2XgxVu40kb) {
        if (strlen (ek0MpDqPC) > strlen (Ng0QkZ)) {
            {
                DAfVZTibKCP2 = st;
                de4HnM = 0;
                for (; Ng0QkZ[de4HnM] != 0;) {
                    N0aLdJBAhW[DAfVZTibKCP2] = Ng0QkZ[de4HnM];
                    DAfVZTibKCP2++;
                    de4HnM++;
                }
            }
            for (k = Y2XgxVu40kb; N0aLdJBAhW[k] != 0; k++, DAfVZTibKCP2++) {
                N0aLdJBAhW[DAfVZTibKCP2] = N0aLdJBAhW[k];
            }
            N0aLdJBAhW[DAfVZTibKCP2] = 0;
        }
        else {
            DAfVZTibKCP2 = strlen (N0aLdJBAhW) + strlen (Ng0QkZ) - strlen (ek0MpDqPC);
            {
                k = N0aLdJBAhW;
                while (k >= Y2XgxVu40kb) {
                    N0aLdJBAhW[DAfVZTibKCP2] = N0aLdJBAhW[k];
                    DAfVZTibKCP2--;
                    k--;
                }
            }
            for (DAfVZTibKCP2 = st, de4HnM = 0; Ng0QkZ[de4HnM] != 0; DAfVZTibKCP2++, de4HnM++) {
                N0aLdJBAhW[DAfVZTibKCP2] = Ng0QkZ[de4HnM];
            }
        }
    }
    printf ("%s", N0aLdJBAhW);
    return 0;
}

