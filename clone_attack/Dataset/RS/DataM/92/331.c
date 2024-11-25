void  htcDbAkWOP (int *p, int n) {
    int i;
    int j;
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
    int k;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (p[i] < p[j]) {
                k = p[i];
                p[i] = p[j];
                p[j] = k;
            };
        };
    };
}

main () {
    int a [(1151 - 151)];
    int FYWZJ3g [1000];
    int n;
    int i;
    int j;
    int k;
    int s;
    int puna6k8R2w9;
    int sum;
    {
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
        while (true) {
            scanf ("%d", &n);
            if (n == 0)
                break;
            else {
                sum = 0;
                for (i = 0; i < n; i++) {
                    scanf ("%d", &a[i]);
                }
                for (i = 0; i < n; i++) {
                    scanf ("%d", &FYWZJ3g[i]);
                }
                s = n - 1;
                puna6k8R2w9 = n - 1;
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
                htcDbAkWOP (a, n);
                htcDbAkWOP (FYWZJ3g, n);
                for (i = 0, j = 0, k = 0; k < n; k++) {
                    if (a[i] > FYWZJ3g[j]) {
                        sum = sum + 200;
                        i++;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        j++;
                    }
                    else if (a[s] > FYWZJ3g[puna6k8R2w9]) {
                        sum = sum + 200;
                        s--;
                        puna6k8R2w9--;
                    }
                    else if (a[s] != FYWZJ3g[j]) {
                        s--;
                        sum = sum - 200;
                        j++;
                    }
                    else
                        ;
                }
                printf ("%d\n", sum);
            };
        };
    };
}

