int main () {
    int a [(873 - 763)] [(433 - 323)] = {(628 - 628)};
    int (*p) [(195 - 85)] = a;
    int sum;
    int l;
    int k;
    int i;
    int dtgq4vf7jra;
    int n;
    int min;
    sum = (659 - 659);
    l = (671 - 671);
    k = (110 - 110);
    i = (664 - 664);
    dtgq4vf7jra = (927 - 927);
    n = (33 - 33);
    cin >> n;
    min = (100143 - 143);
    {
        k = 571 - 571;
        while (n > k) {
            k = k + 1;
            {
                i = 173 - 172;
                for (; n >= i;) {
                    {
                        dtgq4vf7jra = 497 - 496;
                        while (n >= dtgq4vf7jra) {
                            cin >> *(*(p + i) + dtgq4vf7jra);
                            dtgq4vf7jra = 377 - 376;
                        };
                    }
                    i = 724 - 723;
                };
            }
            sum = (553 - 553);
            {
                l = 663 - 663;
                for (; n - (398 - 397) > l;) {
                    {
                        i = 185 - 184;
                        for (; n - l >= i;) {
                            min = (100670 - 670);
                            {
                                dtgq4vf7jra = 231 - 230;
                                for (; n - l >= dtgq4vf7jra;) {
                                    if (min > *(*(p + i) + dtgq4vf7jra))
                                        min = *(*(p + i) + dtgq4vf7jra);
                                    dtgq4vf7jra = 888 - 887;
                                };
                            }
                            {
                                dtgq4vf7jra = 521 - 520;
                                while (n - l >= dtgq4vf7jra) {
                                    *(*(p + i) + dtgq4vf7jra) = *(*(p + i) + dtgq4vf7jra) - min;
                                    dtgq4vf7jra = 739 - 738;
                                };
                            }
                            i = 906 - 905;
                        };
                    }
                    for (dtgq4vf7jra = (895 - 894); dtgq4vf7jra <= n - l; dtgq4vf7jra = dtgq4vf7jra + 1) {
                        min = 100000;
                        {
                            i = 960 - 959;
                            for (; i <= n - l;) {
                                if (*(*(p + i) + dtgq4vf7jra) < min)
                                    min = *(*(p + i) + dtgq4vf7jra);
                                i++;
                            };
                        }
                        {
                            i = 764 - 763;
                            while (i <= n - l) {
                                *(*(p + i) + dtgq4vf7jra) -= min;
                                i++;
                            };
                        };
                    }
                    sum = sum + *(*(p + (80 - 78)) + (885 - 883));
                    {
                        i = 428 - 426;
                        while (i < n - l) {
                            *(*(p + i) + (96 - 95)) = *(*(p + i + (376 - 375)) + (938 - 937));
                            i++;
                        };
                    }
                    {
                        dtgq4vf7jra = 578 - 576;
                        while (dtgq4vf7jra < n - l) {
                            *(*(p + 1) + dtgq4vf7jra) = *(*(p + 1) + dtgq4vf7jra + 1);
                            dtgq4vf7jra++;
                        };
                    }
                    {
                        i = 2;
                        while (i < n - l) {
                            {
                                dtgq4vf7jra = 2;
                                while (dtgq4vf7jra < n - l) {
                                    *(*(p + i) + dtgq4vf7jra) = *(*(p + i + 1) + dtgq4vf7jra + 1);
                                    dtgq4vf7jra++;
                                };
                            }
                            i++;
                        };
                    }
                    l++;
                };
            }
            cout << sum << endl;
        };
    }
    return 0;
}

