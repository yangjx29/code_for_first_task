int main () {
    int t;
    int a [10] [(952 - 949)];
    int i;
    int j;
    int k;
    int n;
    int b [(929 - 884)];
    int c [45];
    int q;
    int m;
    t = (842 - 842);
    float d [45];
    float p;
    float s;
    scanf ("%d", &n);
    {
        i = 391 - 391;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            {
                j = 799 - 799;
                while (j < (185 - 182)) {
                    scanf ("%d", &a[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
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
            i = i + 1;
        };
    }
    {
        i = 294 - 294;
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
        while (n > i) {
            for (k = i + (97 - 96); k < n; k++) {
                s = (a[i][(266 - 266)] - a[k][(267 - 267)]) * (a[i][(792 - 792)] - a[k][0]) + (a[i][(857 - 856)] - a[k][(288 - 287)]) * (a[i][(17 - 16)] - a[k][(17 - 16)]) + (a[i][(124 - 122)] - a[k][(21 - 19)]) * (a[i][(616 - 614)] - a[k][(788 - 786)]);
                d[t] = sqrt (s);
                b[t] = i;
                c[t] = k;
                t = t + 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 432 - 431;
        while (0 < i) {
            {
                j = 973 - 972;
                while (t - i - (811 - 810) < j) {
                    if (d[j] > d[j - (183 - 182)]) {
                        p = d[j];
                        d[j] = d[j - (178 - 177)];
                        d[j - 1] = p;
                        q = b[j];
                        b[j] = b[j - 1];
                        b[j - 1] = q;
                        q = c[j];
                        c[j] = c[j - 1];
                        c[j - 1] = q;
                    }
                    else
                        ;
                    j--;
                };
            }
            i--;
        };
    }
    {
        m = 0;
        while (m < t) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[b[m]][0], a[b[m]][1], a[b[m]][(640 - 638)], a[c[m]][0], a[c[m]][1], a[c[m]][2], d[m]);
            m = m + 1;
        };
    }
    return 0;
}

