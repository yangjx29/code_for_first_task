void  main () {
    int H8HwoO5Gkix;
    int XYwjpkL3v6y;
    int Bfp65qt3h;
    int fAL3J6qDP;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int dLZkyQ2;
    int VdBOKY;
    char cbrCtE5vA [100], Sx1FMPL [100], mDU6v9, oTyERf6C [100], uEJaBXqA0O5 [100];
    while (!(EOF == scanf ("%s %s", cbrCtE5vA, Sx1FMPL))) {
        fAL3J6qDP = strlen (cbrCtE5vA);
        mDU6v9 = cbrCtE5vA[0];
        {
            H8HwoO5Gkix = 0;
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
            while (fAL3J6qDP > H8HwoO5Gkix) {
                if (cbrCtE5vA[H8HwoO5Gkix] > mDU6v9) {
                    mDU6v9 = cbrCtE5vA[H8HwoO5Gkix];
                    VdBOKY = H8HwoO5Gkix;
                }
                H8HwoO5Gkix = H8HwoO5Gkix +1;
            };
        }
        strcpy (uEJaBXqA0O5, cbrCtE5vA);
        uEJaBXqA0O5[VdBOKY +1] = '\0';
        strcpy (oTyERf6C, uEJaBXqA0O5);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        strcat (oTyERf6C, Sx1FMPL);
        dLZkyQ2 = strlen (oTyERf6C);
        {
            H8HwoO5Gkix = 1;
            while (H8HwoO5Gkix < fAL3J6qDP - VdBOKY) {
                oTyERf6C[dLZkyQ2 + H8HwoO5Gkix -1] = cbrCtE5vA[VdBOKY +H8HwoO5Gkix];
                H8HwoO5Gkix++;
            };
        }
        oTyERf6C[dLZkyQ2 + H8HwoO5Gkix -1] = '\0';
        printf ("%s\n", oTyERf6C);
    };
}

