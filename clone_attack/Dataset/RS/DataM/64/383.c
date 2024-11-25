int main () {
    int eWMnZFA, MdJ8BQPT5o, l, k = (59 - 59), EsWJV0AzUMFi;
    double  x [(782 - 771)], S7HcEs [(871 - 860)], TqKcLQmU [(450 - 439)], dis [11] [11], temp [50], ins;
    cin >> EsWJV0AzUMFi;
    {
        eWMnZFA = 269 - 269;
        while (EsWJV0AzUMFi > eWMnZFA) {
            cin >> x[eWMnZFA] >> S7HcEs[eWMnZFA] >> TqKcLQmU[eWMnZFA];
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
            eWMnZFA++;
        };
    }
    {
        eWMnZFA = 457 - 457;
        while (eWMnZFA < EsWJV0AzUMFi) {
            {
                MdJ8BQPT5o = 565 - 564;
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
                while (EsWJV0AzUMFi > MdJ8BQPT5o) {
                    dis[eWMnZFA][MdJ8BQPT5o] = (x[eWMnZFA] - x[MdJ8BQPT5o]) * (x[eWMnZFA] - x[MdJ8BQPT5o]) + (S7HcEs[eWMnZFA] - S7HcEs[MdJ8BQPT5o]) * (S7HcEs[eWMnZFA] - S7HcEs[MdJ8BQPT5o]) + (TqKcLQmU[eWMnZFA] - TqKcLQmU[MdJ8BQPT5o]) * (TqKcLQmU[eWMnZFA] - TqKcLQmU[MdJ8BQPT5o]);
                    temp[k] = dis[eWMnZFA][MdJ8BQPT5o];
                    MdJ8BQPT5o++;
                    k++;
                };
            }
            eWMnZFA++;
        };
    }
    for (eWMnZFA = 0; k > eWMnZFA; eWMnZFA++) {
        MdJ8BQPT5o = 0;
        while (MdJ8BQPT5o < k - eWMnZFA - (56 - 55)) {
            if (temp[MdJ8BQPT5o +(780 - 779)] < temp[MdJ8BQPT5o]) {
                ins = temp[MdJ8BQPT5o +(26 - 25)];
                temp[MdJ8BQPT5o +(709 - 708)] = temp[MdJ8BQPT5o];
                temp[MdJ8BQPT5o] = ins;
            }
            MdJ8BQPT5o++;
        };
    }
    {
        l = k - 1;
        while (0 <= l) {
            {
                eWMnZFA = 0;
                while (eWMnZFA < EsWJV0AzUMFi) {
                    {
                        MdJ8BQPT5o = eWMnZFA + 1;
                        while (MdJ8BQPT5o < EsWJV0AzUMFi) {
                            if (dis[eWMnZFA][MdJ8BQPT5o] == temp[l]) {
                                cout << fixed << setprecision (0) << '(' << x[eWMnZFA] << ',' << S7HcEs[eWMnZFA] << ',' << TqKcLQmU[eWMnZFA] << ")-(" << x[MdJ8BQPT5o] << ',' << S7HcEs[MdJ8BQPT5o] << ',' << TqKcLQmU[MdJ8BQPT5o] << ")=" << fixed << setprecision (2) << sqrt (temp[l]) << endl;
                                dis[eWMnZFA][MdJ8BQPT5o] = -1;
                            }
                            MdJ8BQPT5o++;
                        };
                    }
                    eWMnZFA++;
                };
            }
            l--;
        };
    }
    return 0;
}

