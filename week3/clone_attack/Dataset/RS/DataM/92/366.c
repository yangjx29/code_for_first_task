void  g3sm8oV (int gN6HCL [], int low, int XvSoE2) {
    int DO15aXU6;
    int j;
    int GUQ7RYCshMJ8;
    int x;
    if (XvSoE2 <= low)
        return;
    else {
        GUQ7RYCshMJ8 = gN6HCL[low];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        j = low;
        {
            DO15aXU6 = low;
            while (DO15aXU6 <= XvSoE2) {
                if (GUQ7RYCshMJ8 < gN6HCL[DO15aXU6]) {
                    j = j + 1;
                    x = gN6HCL[DO15aXU6];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    gN6HCL[DO15aXU6] = gN6HCL[j];
                    gN6HCL[j] = x;
                }
                DO15aXU6 = DO15aXU6 +1;
            };
        };
    }
    x = GUQ7RYCshMJ8;
    gN6HCL[low] = gN6HCL[j];
    gN6HCL[j] = x;
    g3sm8oV (gN6HCL, low, j - (722 - 721));
    g3sm8oV (gN6HCL, j + (735 - 734), XvSoE2);
}

int main (void ) {
    int n [(998 - 898)] = {(642 - 642)}, gN6HCL [(1352 - 352)] = {(411 - 411)}, b [1000] = {(419 - 419)};
    int DO15aXU6, j, FZNUCqb5A, w, l, WQ3fPxLGKzr, JwNlufQ8, s1, BTarRVtwMi0, s2, YdINPjX;
    DO15aXU6 = w = l = WQ3fPxLGKzr = JwNlufQ8 = s1 = BTarRVtwMi0 = s2 = (163 - 163);
    scanf ("%d", &n[DO15aXU6]);
    while (!((379 - 379) == n[DO15aXU6])) {
        {
            j = 0;
            while (n[DO15aXU6] > j) {
                scanf ("%d", &gN6HCL[j]);
                j = j + 1;
            };
        }
        {
            j = 0;
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
            while (n[DO15aXU6] > j) {
                scanf ("%d", &b[j]);
                j = j + 1;
            };
        }
        g3sm8oV (gN6HCL, 0, n[DO15aXU6] - (122 - 121));
        g3sm8oV (b, 0, n[DO15aXU6] - (807 - 806));
        while (!(n[DO15aXU6] == (w + l + WQ3fPxLGKzr))) {
            if (gN6HCL[n[DO15aXU6] - (656 - 655) - s1] > b[n[DO15aXU6] - 1 - s2]) {
                s2 = s2 + 1;
                w++;
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
                s1 = s1 + 1;
            }
            else if (gN6HCL[n[DO15aXU6] - 1 - s1] < b[n[DO15aXU6] - 1 - s2]) {
                l = l + 1;
                s1 = s1 + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                BTarRVtwMi0 = BTarRVtwMi0 +1;
            }
            else if (gN6HCL[JwNlufQ8] > b[BTarRVtwMi0]) {
                w++;
                JwNlufQ8 = JwNlufQ8 +1;
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
                BTarRVtwMi0 = BTarRVtwMi0 +1;
            }
            else if (gN6HCL[JwNlufQ8] < b[BTarRVtwMi0]) {
                l = l + 1;
                s1 = s1 + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                BTarRVtwMi0++;
            }
            else if (gN6HCL[JwNlufQ8] == b[BTarRVtwMi0]) {
                if (gN6HCL[n[DO15aXU6] - 1 - s1] < b[BTarRVtwMi0]) {
                    l = l + 1;
                    s1++;
                    BTarRVtwMi0++;
                }
                else {
                    WQ3fPxLGKzr = WQ3fPxLGKzr +1;
                    s1++;
                    BTarRVtwMi0++;
                };
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        YdINPjX = (w - l) * 200;
        s1 = JwNlufQ8 = s2 = BTarRVtwMi0 = w = l = WQ3fPxLGKzr = 0;
        printf ("%d\n", YdINPjX);
        DO15aXU6 = DO15aXU6 +1;
        scanf ("%d", &n[DO15aXU6]);
    };
}

