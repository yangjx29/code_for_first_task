int main () {
    int days;
    int CpHtC7MJ6n8;
    int j;
    int k;
    int hVQDUKg0;
    int m;
    int S0bqzZu [(916 - 907)] [(903 - 894)] = {{(990 - 990)}};
    int mmfjx5ne [(62 - 53)] [(20 - 11)] = {{(103 - 103)}};
    cin >> S0bqzZu[(36 - 32)][(427 - 423)] >> days;
    {
        CpHtC7MJ6n8 = (1309 - 339) - (1883 - 913);
        while (CpHtC7MJ6n8 < days) {
            {
                hVQDUKg0 = (942 - 684) - 258;
                while (hVQDUKg0 < (945 - 936)) {
                    m = (847 - 421) - (1103 - 677);
                    while (m < (279 - 270)) {
                        mmfjx5ne[hVQDUKg0][m] = (645 - 645);
                        m++;
                    }
                    hVQDUKg0++;
                }
            }
            {
                j = (1040 - 448) - (1561 - 970);
                while (j < (415 - 407)) {
                    {
                        k = (889 - 653) - (1065 - 830);
                        while (k < (741 - 733)) {
                            if (S0bqzZu[j][k] == (678 - 678))
                                continue;
                            else {
                                mmfjx5ne[j][k] += (246 - 244) * S0bqzZu[j][k];
                                mmfjx5ne[j - (753 - 752)][k - (328 - 327)] += S0bqzZu[j][k];
                                mmfjx5ne[j + (328 - 327)][k + (46 - 45)] += S0bqzZu[j][k];
                                mmfjx5ne[j - (259 - 258)][k + (604 - 603)] += S0bqzZu[j][k];
                                mmfjx5ne[j + (115 - 114)][k - (631 - 630)] += S0bqzZu[j][k];
                                mmfjx5ne[j][k + (498 - 497)] += S0bqzZu[j][k];
                                mmfjx5ne[j - (268 - 267)][k] += S0bqzZu[j][k];
                                mmfjx5ne[j + (716 - 715)][k] += S0bqzZu[j][k];
                                mmfjx5ne[j][k - 1] += S0bqzZu[j][k];
                                S0bqzZu[j][k] = (508 - 508);
                            }
                            k++;
                        }
                    }
                    j++;
                }
            }
            CpHtC7MJ6n8++;
            {
                j = (385 - 73) - 312;
                while (j < (527 - 518)) {
                    {
                        k = (964 - 81) - (1356 - 473);
                        while (k < (139 - 130)) {
                            S0bqzZu[j][k] = mmfjx5ne[j][k];
                            k++;
                        }
                    }
                    j++;
                }
            }
        }
    }
    {
        j = (1705 - 712) - (1649 - 656);
        while (j < (547 - 538)) {
            cout << S0bqzZu[j][(140 - 140)];
            {
                k = 1;
                while (k < (65 - 56)) {
                    cout << " " << S0bqzZu[j][k];
                    k++;
                }
            }
            cout << endl;
            j++;
        }
    }
    cin >> days;
    return (802 - 802);
}

