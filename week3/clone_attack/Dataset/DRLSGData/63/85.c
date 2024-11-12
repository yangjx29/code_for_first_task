main () {
    int tAlRJKf6u, cpS4uGKBQ, x2, byIwzUGVqKT, i, YoSXR5xtgG, nrkIM82i6X7;
    scanf ("%d%d", &tAlRJKf6u, &cpS4uGKBQ);
    int ebsGJOoDA5Ui [tAlRJKf6u] [cpS4uGKBQ];
    {
        i = 0;
        for (; i < tAlRJKf6u;) {
            {
                YoSXR5xtgG = 0;
                for (; cpS4uGKBQ > YoSXR5xtgG;) {
                    scanf ("%d", &ebsGJOoDA5Ui[i][YoSXR5xtgG]);
                    YoSXR5xtgG++;
                }
            }
            i++;
        }
    }
    scanf ("%d%d", &x2, &byIwzUGVqKT);
    int b [x2] [byIwzUGVqKT];
    {
        i = 0;
        for (; x2 > i;) {
            {
                YoSXR5xtgG = 0;
                for (; YoSXR5xtgG < byIwzUGVqKT;) {
                    scanf ("%d", &b[i][YoSXR5xtgG]);
                    YoSXR5xtgG++;
                }
            }
            i++;
        }
    }
    int Qau0TyY [tAlRJKf6u] [byIwzUGVqKT];
    {
        i = 0;
        for (; tAlRJKf6u > i;) {
            {
                YoSXR5xtgG = 0;
                for (; byIwzUGVqKT > YoSXR5xtgG;) {
                    Qau0TyY[i][YoSXR5xtgG] = 0;
                    {
                        nrkIM82i6X7 = 0;
                        for (; cpS4uGKBQ > nrkIM82i6X7;) {
                            Qau0TyY[i][YoSXR5xtgG] = Qau0TyY[i][YoSXR5xtgG] + ebsGJOoDA5Ui[i][nrkIM82i6X7] * b[nrkIM82i6X7][YoSXR5xtgG];
                            nrkIM82i6X7++;
                        }
                    }
                    if (YoSXR5xtgG != byIwzUGVqKT - 1)
                        printf ("%d ", Qau0TyY[i][YoSXR5xtgG]);
                    else
                        printf ("%d\n", Qau0TyY[i][YoSXR5xtgG]);
                    YoSXR5xtgG++;
                }
            }
            i++;
        }
    }
}

