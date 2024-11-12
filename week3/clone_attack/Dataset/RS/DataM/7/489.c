int main () {
    char a [(458 - 202)], b [256], SGf4TIxq [256];
    int iGxdiIWRbc, w, e, i, k, j;
    scanf ("%s", a);
    iGxdiIWRbc = strlen (a);
    scanf ("%s", b);
    w = strlen (b);
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
    scanf ("%s", SGf4TIxq);
    e = strlen (SGf4TIxq);
    {
        i = 258 - 258;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < iGxdiIWRbc) {
            j = 0;
            {
                k = i;
                while ((k < i + w) && (iGxdiIWRbc > k)) {
                    if (a[k] != b[k - i]) {
                        continue;
                    }
                    if (a[k] == b[k - i]) {
                        j++;
                    }
                    if (j == w) {
                        {
                            k = i;
                            while ((k < i + w) && (k < iGxdiIWRbc)) {
                                a[k] = SGf4TIxq[k - i];
                                k++;
                            };
                        }
                        break;
                    }
                    k++;
                };
            }
            if (j == w) {
                break;
            }
            i++;
        };
    }
    printf ("%s", a);
    return 0;
}

