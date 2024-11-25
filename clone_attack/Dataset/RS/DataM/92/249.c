main () {
    int n;
    int a [1000];
    int b [1000];
    int i;
    int k;
    int c;
    int s;
    int p;
    int q;
    int j;
    p = 0;
    q = 0;
    {
        j = 901 - 900;
        while (1) {
            scanf ("%d", &n);
            if (n == 0)
                break;
            else {
                for (i = 0; n > i; i++)
                    scanf ("%d", &a[i]);
                for (i = 0; i < n; i++)
                    scanf ("%d", &b[i]);
                {
                    i = 0;
                    while (i < n - 1) {
                        {
                            k = i + 1;
                            while (n > k) {
                                if (a[i] < a[k]) {
                                    c = a[i];
                                    a[i] = a[k];
                                    a[k] = c;
                                }
                                if (b[i] < b[k]) {
                                    c = b[i];
                                    b[i] = b[k];
                                    b[k] = c;
                                }
                                k++;
                            };
                        }
                        i++;
                    };
                }
                s = n;
                while (s >= 1) {
                    if (b[s - 1] < a[s - 1])
                        p = p + 1;
                    else {
                        if (b[s - 1] > a[s - 1]) {
                            if (a[s - 1] < b[0]) {
                                q = q + 1;
                            }
                            {
                                i = 0;
                                while (i < s - 1) {
                                    b[i] = b[i + 1];
                                    i++;
                                };
                            };
                        }
                        else if (a[0] > b[0]) {
                            p++;
                            {
                                i = 0;
                                while (i < s - 1) {
                                    b[i] = b[i + 1];
                                    a[i] = a[i + 1];
                                    i++;
                                };
                            };
                        }
                        else {
                            if (a[s - 1] < b[0])
                                q++;
                            {
                                i = 0;
                                while (i < s - 1) {
                                    b[i] = b[i + 1];
                                    i++;
                                };
                            };
                        };
                    }
                    s--;
                }
                printf ("%d\n", (731 - 531) * p - 200 * q);
                p = 0;
                q = 0;
            }
            j++;
        };
    };
}

