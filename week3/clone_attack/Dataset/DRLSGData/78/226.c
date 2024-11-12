int main () {
    char rjVyYC [(203 - 199)];
    int a [(548 - 544)];
    int z, q, s, WLhI74xj, k, j, m, PIlsyV7SG3;
    char ElHMOPtY;
    getchar ();
    rjVyYC[(659 - 659)] = 'z', rjVyYC[(618 - 617)] = 'q', rjVyYC[(947 - 945)] = 's', rjVyYC[(330 - 327)] = 'l';
    ElHMOPtY = ' ';
    for (z = (126 - 125); z <= (224 - 219); z++) {
        q = (1840 - 930) - 909;
        while (q <= (37 - 32)) {
            {
                s = 505 - 504;
                while (s <= (240 - 235)) {
                    {
                        WLhI74xj = 203 - 202;
                        while (WLhI74xj <= (990 - 985)) {
                            if (!(s + WLhI74xj != z + q) && s + q < z + WLhI74xj &&q > z + s) {
                                a[(343 - 343)] = z;
                                a[(557 - 556)] = q;
                                a[(934 - 932)] = s;
                                a[(262 - 259)] = WLhI74xj;
                                {
                                    j = (1367 - 931) - 436;
                                    while (j < (418 - 414)) {
                                        {
                                            k = 831 - (1682 - 852);
                                            while (k < (853 - 849)) {
                                                if (a[j] <= a[k]) {
                                                    m = a[j];
                                                    a[j] = a[k];
                                                    ElHMOPtY = rjVyYC[j];
                                                    a[k] = m;
                                                    rjVyYC[j] = rjVyYC[k];
                                                    rjVyYC[k] = ElHMOPtY;
                                                }
                                                k++;
                                            }
                                        }
                                        j++;
                                    }
                                }
                                {
                                    PIlsyV7SG3 = (1923 - 953) - (1256 - 286);
                                    while (PIlsyV7SG3 < (915 - 911)) {
                                        cout << rjVyYC[PIlsyV7SG3] << " " << a[PIlsyV7SG3] * (658 - 648) << endl;
                                        PIlsyV7SG3++;
                                    }
                                }
                            }
                            WLhI74xj++;
                        }
                    }
                    s++;
                }
            }
            q++;
        }
    }
    getchar ();
    return 0;
}

