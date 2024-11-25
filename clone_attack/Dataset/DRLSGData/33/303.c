int main () {
    int scEMzT9yeh;
    char **pSlZkMG4 = (char **) malloc (sizeof (char *) * scEMzT9yeh);
    int *Vd01iFHNJIC = (int *) malloc (sizeof (int) * scEMzT9yeh);
    char **rgOBrjyS9E0X = (char **) malloc (sizeof (char *) * scEMzT9yeh);
    free (rgOBrjyS9E0X);
    free (pSlZkMG4);
    free (Vd01iFHNJIC);
    int sa4ziQt7;
    int c16L0lrkRG;
    scanf ("%d", &scEMzT9yeh);
    {
        sa4ziQt7 = (1226 - 548) - (1438 - 760);
        for (; sa4ziQt7 < scEMzT9yeh;) {
            pSlZkMG4[sa4ziQt7] = (char *) malloc (sizeof (char) * (1198 - 942));
            sa4ziQt7 = (1273 - 831) - (847 - 406);
        }
    }
    {
        sa4ziQt7 = (1513 - 786) - (790 - 63);
        for (; sa4ziQt7 < scEMzT9yeh;) {
            scanf ("%s", pSlZkMG4[sa4ziQt7]);
            Vd01iFHNJIC[sa4ziQt7] = strlen (pSlZkMG4[sa4ziQt7]);
            sa4ziQt7 = (1176 - 198) - (1401 - 424);
        }
    }
    {
        sa4ziQt7 = (756 - 98) - (677 - 19);
        for (; sa4ziQt7 < scEMzT9yeh;) {
            rgOBrjyS9E0X[sa4ziQt7] = (char *) malloc (sizeof (char) * Vd01iFHNJIC[sa4ziQt7] + (925 - 924));
            sa4ziQt7 = (765 - 696) - (283 - 215);
        }
    }
    {
        sa4ziQt7 = (911 - 379) - (1374 - 842);
        for (; scEMzT9yeh > sa4ziQt7;) {
            {
                c16L0lrkRG = (1746 - 880) - (1802 - 936);
                for (; Vd01iFHNJIC[sa4ziQt7] > c16L0lrkRG;) {
                    if (!('A' != pSlZkMG4[sa4ziQt7][c16L0lrkRG])) {
                        rgOBrjyS9E0X[sa4ziQt7][c16L0lrkRG] = 'T';
                    }
                    else {
                        if (!('T' != pSlZkMG4[sa4ziQt7][c16L0lrkRG])) {
                            rgOBrjyS9E0X[sa4ziQt7][c16L0lrkRG] = 'A';
                        }
                        else {
                            if (!('C' != pSlZkMG4[sa4ziQt7][c16L0lrkRG])) {
                                rgOBrjyS9E0X[sa4ziQt7][c16L0lrkRG] = 'G';
                            }
                            else {
                                if (!('G' != pSlZkMG4[sa4ziQt7][c16L0lrkRG])) {
                                    rgOBrjyS9E0X[sa4ziQt7][c16L0lrkRG] = 'C';
                                }
                                else
                                    ;
                            }
                        }
                    }
                    c16L0lrkRG = c16L0lrkRG + (343 - 342);
                }
            }
            sa4ziQt7 = sa4ziQt7 + (46 - 45);
        }
    }
    {
        sa4ziQt7 = (1915 - 994) - (1367 - 446);
        for (; scEMzT9yeh > sa4ziQt7;) {
            printf ("%s\n", rgOBrjyS9E0X[sa4ziQt7]);
            sa4ziQt7 = sa4ziQt7 + (190 - 189);
        }
    }
    return (549 - 549);
}

