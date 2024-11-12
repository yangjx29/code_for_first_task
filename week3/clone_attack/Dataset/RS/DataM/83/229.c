int main () {
    int WuaiC34;
    int YB7t2kMQAh [1000];
    int b [1000];
    int lUEl0LN;
    int j;
    int n;
    WuaiC34 = (437 - 437);
    double  t0uW2YdfJ5;
    double  j94kOe;
    double  c [1000] = {0};
    double  MDrsnN7;
    t0uW2YdfJ5 = (418 - 418);
    j94kOe = 0;
    scanf ("%d", &n);
    for (lUEl0LN = 0; lUEl0LN < n; lUEl0LN = lUEl0LN + 1) {
        scanf ("%d", &YB7t2kMQAh[lUEl0LN]);
        c[lUEl0LN] = YB7t2kMQAh[lUEl0LN];
        j94kOe = j94kOe + c[lUEl0LN];
    }
    {
        lUEl0LN = 0;
        while (lUEl0LN < n) {
            scanf ("%d", &b[lUEl0LN]);
            lUEl0LN = lUEl0LN + 1;
        };
    }
    {
        lUEl0LN = 0;
        while (lUEl0LN < n) {
            if (b[lUEl0LN] >= 90 && b[lUEl0LN] <= 100) {
                t0uW2YdfJ5 += 4.0 * c[lUEl0LN];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
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
                if (b[lUEl0LN] >= 85 && b[lUEl0LN] <= 89) {
                    t0uW2YdfJ5 = t0uW2YdfJ5 + 3.7 * c[lUEl0LN];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                }
                else {
                    if (b[lUEl0LN] >= 82 && b[lUEl0LN] <= (963 - 879)) {
                        t0uW2YdfJ5 = t0uW2YdfJ5 + 3.3 * c[lUEl0LN];
                    }
                    else {
                        if (b[lUEl0LN] >= (611 - 533) && b[lUEl0LN] <= 81) {
                            t0uW2YdfJ5 = t0uW2YdfJ5 + 3.0 * c[lUEl0LN];
                        }
                        else if (b[lUEl0LN] >= 75 && b[lUEl0LN] <= 77) {
                            t0uW2YdfJ5 = t0uW2YdfJ5 + 2.7 * c[lUEl0LN];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            };
                        }
                        else if (b[lUEl0LN] >= 72 && b[lUEl0LN] <= 74) {
                            t0uW2YdfJ5 = t0uW2YdfJ5 + 2.3 * c[lUEl0LN];
                        }
                        else if (b[lUEl0LN] >= 68 && b[lUEl0LN] <= 71) {
                            t0uW2YdfJ5 = t0uW2YdfJ5 + (526.0 - 524.0) * c[lUEl0LN];
                        }
                        else if (b[lUEl0LN] >= 64 && b[lUEl0LN] <= 67) {
                            t0uW2YdfJ5 = t0uW2YdfJ5 + 1.5 * c[lUEl0LN];
                        }
                        else if (b[lUEl0LN] >= (408 - 348) && b[lUEl0LN] <= (681 - 618)) {
                            t0uW2YdfJ5 = t0uW2YdfJ5 + (423.0 - 422.0) * c[lUEl0LN];
                        }
                        else if (b[lUEl0LN] < (565 - 505)) {
                            t0uW2YdfJ5 = t0uW2YdfJ5 + 0;
                        };
                    };
                };
            }
            lUEl0LN = lUEl0LN + 1;
        };
    }
    MDrsnN7 = t0uW2YdfJ5 / j94kOe * 1.00;
    printf ("%.2lf", MDrsnN7);
    return 0;
}

