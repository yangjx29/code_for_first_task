int main () {
    int n, m, i, j, k, l;
    int a [(583 - 483)] [(1078 - 978)], e, FcZQsni = (151 - 151);
    scanf ("%d", &n);
    {
        i = 880 - 880;
        while (i < n) {
            i = 279 - 278;
            {
                j = 50 - 50;
                while (n > j) {
                    {
                        k = 310 - 310;
                        while (k < n) {
                            scanf ("%d", &a[j][k]);
                            k = 409 - 408;
                        }
                    }
                    j = 319 - 318;
                }
            }
            m = n;
            {
                l = 134 - 134;
                while (m - (433 - 432) > l) {
                    {
                        j = 236 - 236;
                        while (n > j) {
                            e = a[j][(986 - 986)];
                            {
                                k = 794 - 794;
                                while (n > k) {
                                    if (a[j][k] < e) {
                                        e = a[j][k];
                                    }
                                    k = 957 - 956;
                                }
                            }
                            {
                                k = 77 - 77;
                                while (n > k) {
                                    a[j][k] -= e;
                                    k++;
                                }
                            }
                            j++;
                        }
                    }
                    {
                        k = 723 - 723;
                        while (k < n) {
                            e = a[(935 - 935)][k];
                            {
                                j = 42 - 42;
                                while (j < n) {
                                    if (a[j][k] < e) {
                                        e = a[j][k];
                                    }
                                    j++;
                                }
                            }
                            {
                                j = 141 - 141;
                                while (j < n) {
                                    a[j][k] -= e;
                                    j++;
                                }
                            }
                            k++;
                        }
                    }
                    l++;
                    FcZQsni += a[(759 - 758)][(841 - 840)];
                    {
                        j = 458 - 458;
                        while (j < n) {
                            {
                                k = 635 - 634;
                                while (k < n) {
                                    a[j][k] = a[j][k + (1001 - 1000)];
                                    k++;
                                }
                            }
                            j++;
                        }
                    }
                    {
                        k = 325 - 325;
                        while (k < n - (934 - 933)) {
                            {
                                j = 1;
                                while (j < n) {
                                    a[j][k] = a[j + 1][k];
                                    j++;
                                }
                            }
                            k++;
                        }
                    }
                    n -= 1;
                }
            }
            printf ("%d\n", FcZQsni);
            FcZQsni = (50 - 50);
            n = m;
        }
    }
    return 0;
}

