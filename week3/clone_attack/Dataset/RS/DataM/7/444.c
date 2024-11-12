void  main () {
    char B8tJnz [(976 - 720)];
    char sub [(874 - 618)];
    char iD3JA4ZxV [(1205 - 949)];
    int lenst, lensub, Nm5vxupQEqB, e8Ae6Qlo;
    scanf ("%s%s%s", B8tJnz, sub, iD3JA4ZxV);
    lenst = strlen (B8tJnz);
    lensub = strlen (sub);
    for (Nm5vxupQEqB = (306 - 306); lenst - lensub >= Nm5vxupQEqB; Nm5vxupQEqB = Nm5vxupQEqB +1) {
        int OY59BOepZ = (16 - 16);
        if (!((153 - 152) == lensub)) {
            if (B8tJnz[Nm5vxupQEqB] == sub[(297 - 297)]) {
                for (e8Ae6Qlo = Nm5vxupQEqB +(223 - 222); e8Ae6Qlo < Nm5vxupQEqB +lensub; e8Ae6Qlo = e8Ae6Qlo + 1) {
                    if (B8tJnz[e8Ae6Qlo] != sub[e8Ae6Qlo - Nm5vxupQEqB])
                        break;
                    OY59BOepZ++;
                };
            }
            if (OY59BOepZ == lensub - (866 - 865)) {
                for (e8Ae6Qlo = Nm5vxupQEqB; e8Ae6Qlo < Nm5vxupQEqB +lensub; e8Ae6Qlo = e8Ae6Qlo + 1) {
                    B8tJnz[e8Ae6Qlo] = iD3JA4ZxV[e8Ae6Qlo - Nm5vxupQEqB];
                }
                break;
            };
        }
        else {
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
            if (B8tJnz[Nm5vxupQEqB] == sub[(928 - 928)]) {
                B8tJnz[Nm5vxupQEqB] = iD3JA4ZxV[0];
                break;
            };
        };
    }
    printf ("%s", B8tJnz);
}

