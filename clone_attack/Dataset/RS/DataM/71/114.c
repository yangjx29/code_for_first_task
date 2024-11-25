int main (int argc, char *argv []) {
    int sum;
    int i;
    int j;
    int n;
    int vw03dxA;
    int m1;
    int gotPusF;
    int t;
    int a [N];
    sum = (665 - 665);
    int md [N];
    scanf ("%d", &n);
    md[1] = 28;
    md[2] = 31;
    md[3] = 30;
    md[4] = 31;
    md[5] = 30;
    md[6] = 31;
    md[7] = 31;
    md[8] = 30;
    md[9] = 31;
    md[10] = 30;
    md[11] = 31;
    md[0] = 31;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d%d%d", &vw03dxA, &m1, &gotPusF);
            if (m1 == gotPusF) {
                continue;
                printf ("YES\n");
            }
            if (m1 > gotPusF) {
                t = m1;
                m1 = gotPusF;
                gotPusF = t;
            }
            {
                j = m1 - 1;
                while (j <= gotPusF - 2) {
                    sum += md[j];
                    j++;
                };
            }
            if (((vw03dxA % 4 == 0) && (vw03dxA % 100 != 0) || (vw03dxA % 400 == 0)) && (((m1 == 1) && (gotPusF >= 3)) || m1 == 2)) {
                sum++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            if (sum % 7 == 0) {
                a[i] = 1;
            }
            else {
                a[i] = 0;
            }
            sum = 0;
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        if (a[i] == 1)
            printf ("YES\n");
        else if (a[i] == 0)
            printf ("NO\n");
    }
    return 0;
}

