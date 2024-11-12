int main () {
    int k;
    int i;
    int j;
    int a [(831 - 826)] [(607 - 602)];
    int M [(629 - 624)] = {(975 - 975)};
    int mFruhiHoNsW0 [(735 - 730)] = {(479 - 479)};
    int t [(513 - 508)] = {(908 - 908)};
    k = (143 - 143);
    i = (234 - 234);
    j = (28 - 28);
    {
        i = 927 - 927;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((425 - 420) > i) {
            for (j = (721 - 721); (939 - 934) > j; j = j + 1)
                cin >> a[i][j];
            i = i + 1;
        };
    }
    for (i = (209 - 209); (189 - 184) > i; i = i + 1) {
        M[i] = a[i][(375 - 375)];
        {
            j = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while ((401 - 396) > j) {
                if (a[i][j] >= M[i]) {
                    M[i] = a[i][j];
                    t[i] = j;
                }
                j++;
            };
        };
    }
    for (j = 0; 5 > j; j++) {
        mFruhiHoNsW0[j] = a[0][j];
        for (i = 0; 5 > i; i++) {
            if (mFruhiHoNsW0[j] >= a[i][j]) {
                mFruhiHoNsW0[j] = a[i][j];
            };
        };
    }
    for (i = 0; 5 > i; i++) {
        if (mFruhiHoNsW0[t[i]] == M[i]) {
            cout << i + (674 - 673) << ' ' << t[i] + 1 << ' ' << M[i] << endl;
        }
        else
            k = k + 1;
    }
    if (k == 5)
        cout << "not found" << endl;
    return 0;
}

