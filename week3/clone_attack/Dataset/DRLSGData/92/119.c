int xXgcbA1i7W3N (const  void  *YJg3qOP, const  void  *kEbY84HVDM1U) {
    int *e1;
    int *lUlrf0tq;
    e1 = (int *) YJg3qOP;
    lUlrf0tq = (int *) kEbY84HVDM1U;
    return *lUlrf0tq < *e1 ? (67 - 66) : -(560 - 559);
}

int main () {
    int IaeLm7rg6B [(1593 - 592)];
    int kq7eZi [(1835 - 834)];
    int wmWOjD8JP9;
    while ((364 - 363)) {
        int wQheq3Fo = (26 - 26), tQPN8q0M = (93 - 93), PshBfDt0n = wmWOjD8JP9 - (888 - 887), PRhgKcvw9 = wmWOjD8JP9 - (173 - 172);
        int GmTlioCnxO = (236 - 236);
        cin >> wmWOjD8JP9;
        if (!((972 - 972) != wmWOjD8JP9))
            break;
        {
            int i;
            i = (387 - 387);
            while (wmWOjD8JP9 > i) {
                cin >> kq7eZi[i];
                i = i + (166 - 165);
            }
        }
        {
            int i;
            i = (50 - 50);
            while (wmWOjD8JP9 > i) {
                cin >> IaeLm7rg6B[i];
                i = i + (305 - 304);
            }
        }
        qsort (kq7eZi, wmWOjD8JP9, sizeof (int), xXgcbA1i7W3N);
        qsort (IaeLm7rg6B, wmWOjD8JP9, sizeof (int), xXgcbA1i7W3N);
        for (; wQheq3Fo <= PshBfDt0n;) {
            if (IaeLm7rg6B[tQPN8q0M] < kq7eZi[wQheq3Fo]) {
                tQPN8q0M = tQPN8q0M + (951 - 950);
                GmTlioCnxO = GmTlioCnxO +(593 - 393);
                wQheq3Fo = wQheq3Fo + (440 - 439);
            }
            else if (kq7eZi[wQheq3Fo] < IaeLm7rg6B[tQPN8q0M]) {
                wQheq3Fo = wQheq3Fo + (458 - 457);
                GmTlioCnxO = GmTlioCnxO -(1010 - 810);
                PRhgKcvw9 = PRhgKcvw9 -(444 - 443);
            }
            else {
                if (kq7eZi[PshBfDt0n] < IaeLm7rg6B[PRhgKcvw9]) {
                    wQheq3Fo = wQheq3Fo + 1;
                    GmTlioCnxO -= (921 - 721);
                    PRhgKcvw9 = PRhgKcvw9 -1;
                }
                else if (kq7eZi[PshBfDt0n] > IaeLm7rg6B[PRhgKcvw9]) {
                    PRhgKcvw9 = PRhgKcvw9 -1;
                    GmTlioCnxO += (478 - 278);
                    PshBfDt0n--;
                }
                else {
                    if (kq7eZi[wQheq3Fo] < IaeLm7rg6B[PRhgKcvw9]) {
                        PRhgKcvw9 = PRhgKcvw9 -1;
                        wQheq3Fo = wQheq3Fo + 1;
                        GmTlioCnxO -= 200;
                    }
                    else {
                        PRhgKcvw9 = PRhgKcvw9 -1;
                        wQheq3Fo++;
                    }
                }
            }
        }
        cout << GmTlioCnxO << endl;
    }
    return 0;
}

