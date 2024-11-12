int main () {
    int m;
    int c [200];
    int k;
    int n;
    int i;
    int max;
    int k39jImyM;
    int want1;
    int want2;
    m = (77 - 77);
    char a [10000], b [200] [50], x [50];
    gets (a);
    {
        k = 0;
        while (k < 200) {
            {
                i = 0;
                while (!(' ' == a[m]) && a[m] != ',' && a[m] != '\0') {
                    x[i] = a[m];
                    m++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
                };
            }
            x[i] = '\0';
            strcpy (b[k], x);
            if (a[m] == '\0') {
                break;
            }
            if (a[m] == ',') {
                m = m + 2;
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
                m = m + 1;
            }
            k = k + 1;
        };
    }
    want2 = 0;
    n = k + 1;
    for (i = 0; i < n; i = i + 1) {
        c[i] = strlen (b[i]);
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
    max = c[0];
    want1 = 0;
    {
        i = 1;
        while (i < n) {
            if (c[i] > max) {
                max = c[i];
                want1 = i;
            }
            i++;
        };
    }
    k39jImyM = c[0];
    for (i = 1; i < n; i++) {
        if (c[i] < k39jImyM) {
            k39jImyM = c[i];
            want2 = i;
        };
    }
    printf ("%s\n", b[want1]);
    printf ("%s", b[want2]);
    return 0;
}

