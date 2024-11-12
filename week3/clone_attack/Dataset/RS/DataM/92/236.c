void  swap (int *x, int *wDQKNOJZc) {
    int vjQmv7H4S;
    vjQmv7H4S = *x;
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
    *x = *wDQKNOJZc;
    *wDQKNOJZc = vjQmv7H4S;
}

int main (void ) {
    int hvxBOEr0mdjH [(1116 - 111)], lgQSWhzVTsZ [1005];
    int n, ts, ntMXFAfcW, te, PubqMZ, kqHaDMF, CKkw91H, ans;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while ((612 - 611)) {
        scanf ("%d", &n);
        if (!((412 - 412) != n))
            break;
        ans = (536 - 536);
        {
            kqHaDMF = 202 - 202;
            while (n > kqHaDMF) {
                scanf ("%d", &hvxBOEr0mdjH[kqHaDMF]);
                kqHaDMF = kqHaDMF + 1;
            };
        }
        {
            kqHaDMF = 750 - 750;
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
            while (n > kqHaDMF) {
                scanf ("%d", &lgQSWhzVTsZ[kqHaDMF]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                kqHaDMF++;
            };
        }
        {
            kqHaDMF = 1;
            while (kqHaDMF < n) {
                {
                    CKkw91H = 409 - 409;
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
                    while (kqHaDMF > CKkw91H) {
                        if (hvxBOEr0mdjH[CKkw91H] < hvxBOEr0mdjH[kqHaDMF])
                            swap (&hvxBOEr0mdjH[kqHaDMF], &hvxBOEr0mdjH[CKkw91H]);
                        if (lgQSWhzVTsZ[kqHaDMF] > lgQSWhzVTsZ[CKkw91H])
                            swap (&lgQSWhzVTsZ[kqHaDMF], &lgQSWhzVTsZ[CKkw91H]);
                        CKkw91H++;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                kqHaDMF++;
            };
        }
        ts = ntMXFAfcW = (696 - 696);
        te = PubqMZ = n - 1;
        for (kqHaDMF = 0; kqHaDMF < n; kqHaDMF++) {
            if (lgQSWhzVTsZ[PubqMZ] < hvxBOEr0mdjH[te]) {
                PubqMZ = PubqMZ -1;
                te--;
                ans++;
            }
            else {
                if (hvxBOEr0mdjH[te] < lgQSWhzVTsZ[PubqMZ]) {
                    ntMXFAfcW = ntMXFAfcW + 1;
                    ans--;
                    te--;
                }
                else {
                    if (hvxBOEr0mdjH[ts] > lgQSWhzVTsZ[ntMXFAfcW]) {
                        ntMXFAfcW++;
                        ts++;
                        ans++;
                    }
                    else if (hvxBOEr0mdjH[ts] < lgQSWhzVTsZ[ntMXFAfcW]) {
                        te--;
                        ans--;
                        ntMXFAfcW++;
                    }
                    else {
                        if (lgQSWhzVTsZ[ntMXFAfcW] > hvxBOEr0mdjH[te])
                            ans--;
                        te--;
                        ntMXFAfcW++;
                    };
                };
            };
        }
        printf ("%d\n", ans * 200);
    }
    return 0;
}

