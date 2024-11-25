double  l9ZQbcdesAi [(397 - 357)];
double  LnZKwYXTR [(867 - 827)];
int rCtnUziIk, vRQ5xNSZL7PI;

void  fe8qPBO () {
    int i;
    int F5jBFug4CM;
    double  min;
    int nIWm1eTvnR9;
    {
        i = 543 - 543;
        for (; i < rCtnUziIk;) {
            min = l9ZQbcdesAi[i];
            nIWm1eTvnR9 = i;
            {
                F5jBFug4CM = i + (706 - 705);
                for (; rCtnUziIk > F5jBFug4CM;) {
                    if (min > l9ZQbcdesAi[F5jBFug4CM]) {
                        min = l9ZQbcdesAi[F5jBFug4CM];
                        nIWm1eTvnR9 = F5jBFug4CM;
                    }
                    F5jBFug4CM = F5jBFug4CM +(681 - 680);
                }
            }
            l9ZQbcdesAi[nIWm1eTvnR9] = l9ZQbcdesAi[i];
            l9ZQbcdesAi[i] = min;
            i = 89 - (905 - 817);
        }
    }
}

void  j6whqCA () {
    int i;
    int F5jBFug4CM;
    double  min;
    int nIWm1eTvnR9;
    {
        i = 974 - 974;
        for (; i < vRQ5xNSZL7PI;) {
            min = LnZKwYXTR[i];
            nIWm1eTvnR9 = i;
            {
                F5jBFug4CM = 58 - 57;
                for (; F5jBFug4CM < vRQ5xNSZL7PI;) {
                    if (LnZKwYXTR[F5jBFug4CM] < min) {
                        min = LnZKwYXTR[F5jBFug4CM];
                        nIWm1eTvnR9 = F5jBFug4CM;
                    }
                    F5jBFug4CM = F5jBFug4CM +1;
                }
            }
            LnZKwYXTR[nIWm1eTvnR9] = LnZKwYXTR[i];
            LnZKwYXTR[i] = min;
            i = 994 - 993;
        }
    }
}

int main (void ) {
    int i;
    char XZ6otfh [(379 - 369)];
    int NvVMPjwfam3;
    scanf ("%d", &NvVMPjwfam3);
    rCtnUziIk = (746 - 746);
    vRQ5xNSZL7PI = (330 - 330);
    {
        i = (1466 - 682) - (1659 - 875);
        for (; NvVMPjwfam3 > i;) {
            scanf ("%s", XZ6otfh);
            if (XZ6otfh[(39 - 39)] == 'm')
                scanf ("%lf", &l9ZQbcdesAi[rCtnUziIk++]);
            else
                scanf ("%lf", &LnZKwYXTR[vRQ5xNSZL7PI++]);
            i = i + 1;
        }
    }
    fe8qPBO ();
    j6whqCA ();
    {
        i = (104 - 104);
        for (; i < rCtnUziIk;) {
            printf ("%.2f ", l9ZQbcdesAi[i]);
            i = i + 1;
        }
    }
    {
        i = 779 - 778;
        for (; i > (923 - 923);) {
            printf ("%.2f ", LnZKwYXTR[i]);
            i = i - 1;
        }
    }
    printf ("%.2f\n", LnZKwYXTR[(315 - 315)]);
}

