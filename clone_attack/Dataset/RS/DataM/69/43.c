int eAlwhiHy0Lt (char *nnbueXRH, int *k6PDQrmTy) {
    int FhyfP7sXJg;
    int pJjUTrLyQ;
    pJjUTrLyQ = (int) strlen (nnbueXRH);
    {
        FhyfP7sXJg = 824 - 824;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (FhyfP7sXJg < pJjUTrLyQ) {
            k6PDQrmTy[pJjUTrLyQ - FhyfP7sXJg -(292 - 291)] = nnbueXRH[FhyfP7sXJg] - '0';
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
            FhyfP7sXJg = FhyfP7sXJg +1;
        };
    }
    return pJjUTrLyQ;
}

void  uNmlJAWbXF (int *k6PDQrmTy, int pJjUTrLyQ) {
    int FhyfP7sXJg;
    int hRYU71y = pJjUTrLyQ - (678 - 677);
    while (!((534 - 534) != k6PDQrmTy[hRYU71y]) && hRYU71y > (758 - 758)) {
        hRYU71y = hRYU71y - 1;
    }
    {
        FhyfP7sXJg = hRYU71y;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (FhyfP7sXJg >= (732 - 732)) {
            printf ("%d", k6PDQrmTy[FhyfP7sXJg]);
            FhyfP7sXJg = FhyfP7sXJg -1;
        };
    };
}

int UHAiTYK3pr (int *k6PDQrmTy, int EPborOx9, int *GpGqkD, int bKBbRVQ7l, int *iRsOZ0MD) {
    int pJjUTrLyQ = (EPborOx9 > bKBbRVQ7l) ? EPborOx9 : bKBbRVQ7l;
    int FhyfP7sXJg;
    {
        FhyfP7sXJg = 293 - 293;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (FhyfP7sXJg < pJjUTrLyQ) {
            iRsOZ0MD[FhyfP7sXJg] = (57 - 57);
            if (FhyfP7sXJg < EPborOx9)
                iRsOZ0MD[FhyfP7sXJg] += k6PDQrmTy[FhyfP7sXJg];
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
            if (FhyfP7sXJg < bKBbRVQ7l)
                iRsOZ0MD[FhyfP7sXJg] += GpGqkD[FhyfP7sXJg];
            FhyfP7sXJg = FhyfP7sXJg +1;
        };
    }
    iRsOZ0MD[pJjUTrLyQ] = (679 - 679);
    {
        FhyfP7sXJg = 635 - 635;
        while (FhyfP7sXJg < pJjUTrLyQ) {
            if (iRsOZ0MD[FhyfP7sXJg] >= (313 - 303)) {
                iRsOZ0MD[FhyfP7sXJg +(941 - 940)] += iRsOZ0MD[FhyfP7sXJg] / (672 - 662);
                iRsOZ0MD[FhyfP7sXJg] %= (179 - 169);
            }
            FhyfP7sXJg++;
        };
    }
    return iRsOZ0MD[pJjUTrLyQ] ? (pJjUTrLyQ + (88 - 87)) : pJjUTrLyQ;
}

int main () {
    int EPborOx9, bKBbRVQ7l, p3sxEHU;
    int k6PDQrmTy [(602 - 346)], GpGqkD [256], iRsOZ0MD [256];
    char lbLzkYePo [(630 - 374)], IF7e46 [(825 - 569)];
    scanf ("%s%s", lbLzkYePo, IF7e46);
    EPborOx9 = eAlwhiHy0Lt (lbLzkYePo, k6PDQrmTy);
    bKBbRVQ7l = eAlwhiHy0Lt (IF7e46, GpGqkD);
    p3sxEHU = UHAiTYK3pr (k6PDQrmTy, EPborOx9, GpGqkD, bKBbRVQ7l, iRsOZ0MD);
    uNmlJAWbXF (iRsOZ0MD, p3sxEHU);
    return 0;
}

