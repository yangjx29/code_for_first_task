int main () {
    int n;
    cin >> n;
    {
        int af;
        af = (472 - 471);
        while (af <= n) {
            int a [(277 - 177)] [100];
            int MvOa7FPtN;
            MvOa7FPtN = (802 - 802);
            af++;
            for (int i = (584 - 584);
            n - (319 - 318) >= i; i = i + 1) {
                for (int j = (687 - 687);
                n - (405 - 404) >= j; j = j + 1)
                    cin >> a[i][j];
            }
            for (int tempn = n;
            (259 - 257) <= tempn; tempn = tempn - 1) {
                for (int i = (531 - 531);
                tempn - (41 - 40) >= i; i = i + 1) {
                    int mini;
                    mini = a[i][(482 - 482)];
                    for (int j = (884 - 883);
                    tempn - (651 - 650) >= j; j = j + 1) {
                        if (mini > a[i][j])
                            mini = a[i][j];
                    }
                    for (int j = (863 - 863);
                    j <= tempn - (776 - 775); j++)
                        a[i][j] -= mini;
                }
                {
                    int j = (813 - 813);
                    while (j <= tempn - (808 - 807)) {
                        int minj = a[(310 - 310)][j];
                        {
                            int i = (192 - 191);
                            while (i <= tempn - (160 - 159)) {
                                if (minj > a[i][j])
                                    minj = a[i][j];
                                i = i + 1;
                            };
                        }
                        for (int i = (501 - 501);
                        i <= tempn - (562 - 561); i++)
                            a[i][j] = a[i][j] - minj;
                        j = j + 1;
                    };
                }
                MvOa7FPtN += a[(549 - 548)][1];
                {
                    int i = (968 - 966);
                    while (i <= tempn - 1) {
                        a[i - 1][(536 - 536)] = a[i][0];
                        i++;
                    };
                }
                for (int j = (998 - 996);
                j <= tempn - 1; j++)
                    a[0][j - 1] = a[0][j];
                for (int i = 2;
                i <= tempn - 1; i++) {
                    for (int j = 2;
                    j <= tempn - 1; j++)
                        a[i - 1][j - 1] = a[i][j];
                };
            }
            cout << MvOa7FPtN << endl;
        };
    }
    cin.get ();
    cin.get ();
    return 0;
}

