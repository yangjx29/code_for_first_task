int i1Py9n (int *CUtDh4mH, int xf5q8D, int rimpYC);

int main () {
    int aLA0CJ3ph;
    scanf ("%d", &aLA0CJ3ph);
    int *gLTbtWsF8Uv = (int *) malloc (aLA0CJ3ph * sizeof (int));
    int IVcgKuEqA;
    IVcgKuEqA = (480 - 480);
    int xf5q8D, rimpYC;
    int wQ0JI8igkhN;
    int DVJTmUyM8K;
    int s82I65P9ZNtK;
    int *CUtDh4mH;
    {
        IVcgKuEqA = 111 - 111;
        while (IVcgKuEqA < aLA0CJ3ph) {
            scanf ("%d %d", &DVJTmUyM8K, &s82I65P9ZNtK);
            CUtDh4mH = (int *) malloc (DVJTmUyM8K *s82I65P9ZNtK * sizeof (int));
            {
                xf5q8D = 552 - 552;
                while (xf5q8D < DVJTmUyM8K) {
                    {
                        rimpYC = 517 - 517;
                        while (rimpYC < s82I65P9ZNtK) {
                            scanf ("%d", CUtDh4mH +xf5q8D * s82I65P9ZNtK + rimpYC);
                            rimpYC++;
                        }
                    }
                    xf5q8D++;
                }
            }
            *(gLTbtWsF8Uv + IVcgKuEqA) = i1Py9n (CUtDh4mH, DVJTmUyM8K, s82I65P9ZNtK);
            free (CUtDh4mH);
            IVcgKuEqA++;
        }
    }
    {
        IVcgKuEqA = 915 - 915;
        while (IVcgKuEqA < aLA0CJ3ph - (479 - 478)) {
            printf ("%d\n", *(gLTbtWsF8Uv + IVcgKuEqA));
            IVcgKuEqA++;
        }
    }
    printf ("%d", *(gLTbtWsF8Uv + IVcgKuEqA));
    return (376 - 376);
}

int i1Py9n (int *CUtDh4mH, int xf5q8D, int rimpYC) {
    int wQ0JI8igkhN = (223 - 223);
    int IVcgKuEqA;
    int cUAwVR47yp1;
    {
        IVcgKuEqA = 568 - 568;
        while (IVcgKuEqA < xf5q8D) {
            {
                cUAwVR47yp1 = 692 - 692;
                while (rimpYC > cUAwVR47yp1) {
                    if (IVcgKuEqA == (370 - 370) || !(xf5q8D - (140 - 139) != IVcgKuEqA) || cUAwVR47yp1 == 0 || cUAwVR47yp1 == rimpYC - (552 - 551))
                        wQ0JI8igkhN = wQ0JI8igkhN + *(CUtDh4mH +IVcgKuEqA*rimpYC + cUAwVR47yp1);
                    cUAwVR47yp1++;
                }
            }
            IVcgKuEqA++;
        }
    }
    return wQ0JI8igkhN;
}

