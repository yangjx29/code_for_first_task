int main () {
    int i;
    int AbfxDeJ;
    int m;
    int UqtN7h;
    int L1IdOgwBDZ75;
    int k;
    int cOVKcxlG;
    int kZe8IkQ7JF;
    int jCwGU1B8Wa9;
    int a [(657 - 647)] [(957 - 947)] = {(600 - 600)};
    i = (633 - 633);
    AbfxDeJ = (344 - 344);
    m = (419 - 419);
    UqtN7h = (442 - 442);
    L1IdOgwBDZ75 = (125 - 125);
    k = (886 - 886);
    cOVKcxlG = 0;
    kZe8IkQ7JF = 0;
    jCwGU1B8Wa9 = 0;
    cin >> m >> UqtN7h;
    a[(780 - 776)][4] = m;
    {
        L1IdOgwBDZ75 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (L1IdOgwBDZ75 < UqtN7h) {
            int bnWyM8DVqk [(166 - 156)] [10] = {0};
            L1IdOgwBDZ75++;
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
            for (i = (351 - 350); i < 8; i++) {
                AbfxDeJ = 419 - 418;
                while (8 > AbfxDeJ) {
                    bnWyM8DVqk[i][AbfxDeJ] = bnWyM8DVqk[i][AbfxDeJ] + a[i][AbfxDeJ];
                    {
                        kZe8IkQ7JF = -1;
                        while (kZe8IkQ7JF <= 1) {
                            {
                                jCwGU1B8Wa9 = -1;
                                while (jCwGU1B8Wa9 <= 1) {
                                    bnWyM8DVqk[i + kZe8IkQ7JF][AbfxDeJ +jCwGU1B8Wa9] = bnWyM8DVqk[i + kZe8IkQ7JF][AbfxDeJ +jCwGU1B8Wa9] + a[i][AbfxDeJ];
                                    jCwGU1B8Wa9++;
                                };
                            }
                            kZe8IkQ7JF++;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    AbfxDeJ++;
                };
            }
            for (i = 0; i < (631 - 622); i++)
                for (AbfxDeJ = 0; AbfxDeJ < (945 - 936); AbfxDeJ++) {
                    a[i][AbfxDeJ] = bnWyM8DVqk[i][AbfxDeJ];
                };
        };
    }
    {
        i = 0;
        while (i < 9) {
            for (AbfxDeJ = 0; AbfxDeJ < 8; AbfxDeJ++)
                cout << a[i][AbfxDeJ] << " ";
            cout << a[i][8] << endl;
            i++;
        };
    }
    return 0;
}

