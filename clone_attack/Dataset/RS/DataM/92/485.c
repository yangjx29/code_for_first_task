int qqhspdt7C, k;
int kEA3bj1oVF9 [1000];
int t [1000];
int CSUzJOfm;
int sum = 1;

int mycmp (const  void  *a, const  void  *oQa4H1YxD6) {
    return *((int *) oQa4H1YxD6) - *((int *) a);
}

int main () {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (cin >> qqhspdt7C) {
        int xx;
        xx = qqhspdt7C - 1;
        int jQJ6A0VP = 0;
        int t5BXHE4z = qqhspdt7C - 1;
        int y = 0;
        int FHIfzB = 0;
        int sum;
        sum = 0;
        if (qqhspdt7C == (474 - 474))
            break;
        for (int QibT53YGvWxZ = 0;
        QibT53YGvWxZ < qqhspdt7C; QibT53YGvWxZ = QibT53YGvWxZ +1)
            cin >> t[QibT53YGvWxZ];
        {
            int QibT53YGvWxZ = 0;
            while (QibT53YGvWxZ < qqhspdt7C) {
                cin >> kEA3bj1oVF9[QibT53YGvWxZ];
                QibT53YGvWxZ = QibT53YGvWxZ +1;
            };
        }
        qsort (t, qqhspdt7C, sizeof (int), mycmp);
        qsort (kEA3bj1oVF9, qqhspdt7C, sizeof (int), mycmp);
        while (qqhspdt7C > FHIfzB) {
            FHIfzB++;
            if (t[jQJ6A0VP] < kEA3bj1oVF9[y]) {
                sum = sum - 200;
                y = y + 1;
                xx = xx - 1;
            }
            else {
                if (t[jQJ6A0VP] == kEA3bj1oVF9[y]) {
                    if (t[xx] > kEA3bj1oVF9[t5BXHE4z]) {
                        xx = xx - 1;
                        t5BXHE4z--;
                        sum += 200;
                    }
                    else {
                        if (kEA3bj1oVF9[t5BXHE4z] > t[xx]) {
                            xx--;
                            y++;
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            sum = sum - 200;
                        }
                        else {
                            if (t[xx] == kEA3bj1oVF9[t5BXHE4z]) {
                                if (t[xx] == kEA3bj1oVF9[y]) {
                                    xx--;
                                    y++;
                                }
                                else {
                                    xx--;
                                    sum -= 200;
                                    y++;
                                };
                            };
                        };
                    };
                }
                else {
                    if (t[jQJ6A0VP] > kEA3bj1oVF9[y]) {
                        jQJ6A0VP = jQJ6A0VP + 1;
                        y++;
                        sum += 200;
                    };
                };
            };
        }
        cout << sum << endl;
    };
}

