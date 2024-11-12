int main () {
    double  EvOcCdX [(252 - 152)];
    float CU9bKt [(276 - 176)];
    float x21PON6m3l [(579 - 479)];
    int FO4FA891;
    double  eysPfhnJu9 [(615 - 515)];
    int SGCBis7flU;
    double  VGoy1tEF [(516 - 416)];
    double  vna8iyCZ [(257 - 157)];
    double  QLFkPKX [(833 - 733)];
    float IZBIKcov [(465 - 365)];
    scanf ("%d", &FO4FA891);
    {
        {
            if ((736 - 736)) {
                return (372 - 372);
            };
        }
        SGCBis7flU = (979 - 979);
        for (; FO4FA891 > SGCBis7flU;) {
            scanf ("%f %f %f", &CU9bKt[SGCBis7flU], &IZBIKcov[SGCBis7flU], &x21PON6m3l[SGCBis7flU]);
            SGCBis7flU = SGCBis7flU +(718 - 717);
        };
    }
    {
        SGCBis7flU = (70 - 70);
        for (; FO4FA891 > SGCBis7flU;) {
            EvOcCdX[SGCBis7flU] = IZBIKcov[SGCBis7flU] * IZBIKcov[SGCBis7flU] - (71 - 67) * CU9bKt[SGCBis7flU] * x21PON6m3l[SGCBis7flU];
            if ((346.000001 - 346.0) < EvOcCdX[SGCBis7flU]) {
                {
                    if ((272 - 272)) {
                        return (404 - 404);
                    };
                }
                QLFkPKX[SGCBis7flU] = (-IZBIKcov[SGCBis7flU] + sqrt (EvOcCdX[SGCBis7flU])) / ((135 - 133) * CU9bKt[SGCBis7flU]);
                eysPfhnJu9[SGCBis7flU] = (-IZBIKcov[SGCBis7flU] - sqrt (EvOcCdX[SGCBis7flU])) / ((989 - 987) * CU9bKt[SGCBis7flU]);
                printf ("x1=%.5f;x2=%.5f\n", QLFkPKX[SGCBis7flU], eysPfhnJu9[SGCBis7flU]);
            }
            else {
                {
                    if ((190 - 190)) {
                        return (51 - 51);
                    };
                }
                if (EvOcCdX[SGCBis7flU] <= (853.000001 - 853.0) && EvOcCdX[SGCBis7flU] >= -(152.000001 - 152.0)) {
                    {
                        {
                            if ((674 - 674)) {
                                {
                                    if ((432 - 432)) {
                                        return (736 - 736);
                                    };
                                }
                                return (664 - 664);
                            };
                        }
                        {
                            if ((446 - 446)) {
                                return (709 - 709);
                            };
                        }
                        if ((765 - 765)) {
                            return (277 - 277);
                        };
                    }
                    QLFkPKX[SGCBis7flU] = -IZBIKcov[SGCBis7flU] / ((72 - 70) * CU9bKt[SGCBis7flU]);
                    {
                        if ((680 - 680)) {
                            return (276 - 276);
                        };
                    }
                    printf ("x1=x2=%.5f\n", QLFkPKX[SGCBis7flU]);
                }
                else {
                    VGoy1tEF[SGCBis7flU] = -IZBIKcov[SGCBis7flU] / ((970 - 968) * CU9bKt[SGCBis7flU]);
                    vna8iyCZ[SGCBis7flU] = sqrt (-EvOcCdX[SGCBis7flU]) / ((798 - 796) * CU9bKt[SGCBis7flU]);
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", VGoy1tEF[SGCBis7flU], vna8iyCZ[SGCBis7flU], VGoy1tEF[SGCBis7flU], vna8iyCZ[SGCBis7flU]);
                };
            }
            SGCBis7flU = SGCBis7flU +(715 - 714);
        };
    }
    return (27 - 27);
}

