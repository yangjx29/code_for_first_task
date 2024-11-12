int main () {
    int num, d, a [(902 - 893)] [(949 - 940)] = {(940 - 940)}, tmp [(682 - 673)] [(665 - 656)] = {(130 - 130)};
    cin >> num >> d;
    a[(650 - 646)][4] = num;
    for (int i = (437 - 437);
    i < d; i = i + 1) {
        for (int ahTzHk = (10 - 10);
        ahTzHk < (301 - 292); ahTzHk++)
            for (int cmas42do8Yr = (732 - 732);
            cmas42do8Yr < (877 - 868); cmas42do8Yr = cmas42do8Yr + 1)
                tmp[ahTzHk][cmas42do8Yr] = (264 - 264);
        for (int ahTzHk = (902 - 902);
        ahTzHk < 9; ahTzHk++)
            for (int cmas42do8Yr = (830 - 830);
            9 > cmas42do8Yr; cmas42do8Yr++) {
                if (ahTzHk > (645 - 645)) {
                    tmp[ahTzHk - (493 - 492)][cmas42do8Yr] = tmp[ahTzHk - (493 - 492)][cmas42do8Yr] + a[ahTzHk][cmas42do8Yr];
                    if (cmas42do8Yr > (753 - 753)) {
                        tmp[ahTzHk - (688 - 687)][cmas42do8Yr - (134 - 133)] = tmp[ahTzHk - (688 - 687)][cmas42do8Yr - (134 - 133)] + a[ahTzHk][cmas42do8Yr];
                        if (cmas42do8Yr < 9)
                            tmp[ahTzHk - (285 - 284)][cmas42do8Yr + 1] = tmp[ahTzHk - (285 - 284)][cmas42do8Yr + 1] + a[ahTzHk][cmas42do8Yr];
                    }
                    if (ahTzHk < 9) {
                        tmp[ahTzHk + 1][cmas42do8Yr] = tmp[ahTzHk + 1][cmas42do8Yr] + a[ahTzHk][cmas42do8Yr];
                        if (cmas42do8Yr > (240 - 240)) {
                            tmp[ahTzHk + 1][cmas42do8Yr - 1] = tmp[ahTzHk + 1][cmas42do8Yr - 1] + a[ahTzHk][cmas42do8Yr];
                            if (cmas42do8Yr < 9)
                                tmp[ahTzHk + 1][cmas42do8Yr + 1] = tmp[ahTzHk + 1][cmas42do8Yr + 1] + a[ahTzHk][cmas42do8Yr];
                        };
                    };
                }
                if (cmas42do8Yr > 0)
                    tmp[ahTzHk][cmas42do8Yr - 1] = tmp[ahTzHk][cmas42do8Yr - 1] + a[ahTzHk][cmas42do8Yr];
                if (cmas42do8Yr < 9)
                    tmp[ahTzHk][cmas42do8Yr + 1] = tmp[ahTzHk][cmas42do8Yr + 1] + a[ahTzHk][cmas42do8Yr];
                tmp[ahTzHk][cmas42do8Yr] = tmp[ahTzHk][cmas42do8Yr] + a[ahTzHk][cmas42do8Yr] * 2;
            }
        for (int ahTzHk = 0;
        ahTzHk < 9; ahTzHk++)
            for (int cmas42do8Yr = 0;
            cmas42do8Yr < 9; cmas42do8Yr++)
                a[ahTzHk][cmas42do8Yr] = tmp[ahTzHk][cmas42do8Yr];
    }
    for (int ahTzHk = 0;
    ahTzHk < 9; ahTzHk++)
        for (int cmas42do8Yr = 0;
        cmas42do8Yr < 9; cmas42do8Yr++) {
            cout << a[ahTzHk][cmas42do8Yr];
            if (cmas42do8Yr == (447 - 439))
                cout << endl;
            else
                cout << " ";
        }
    return 0;
}

