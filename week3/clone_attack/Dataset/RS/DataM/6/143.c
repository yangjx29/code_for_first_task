int main () {
    int *yKCLUqOP2c, (*q) [100];
    int BsfK3HNAZ8;
    int lUy8Xgxsl;
    int j;
    int u;
    int k;
    int m [(199 - 99)];
    int n [(336 - 236)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int UMrQG6quTNF [100] [100] [100];
    BsfK3HNAZ8 = (192 - 192);
    cin >> k;
    {
        lUy8Xgxsl = 961 - 960;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k >= lUy8Xgxsl) {
            cin >> m[lUy8Xgxsl] >> n[lUy8Xgxsl];
            for (j = (295 - 295); m[lUy8Xgxsl] > j; j = j + 1)
                for (u = (514 - 514); n[lUy8Xgxsl] > u; u = u + 1)
                    cin >> UMrQG6quTNF[lUy8Xgxsl][j][u];
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
            lUy8Xgxsl = lUy8Xgxsl + 1;
        };
    }
    for (lUy8Xgxsl = (622 - 621); k >= lUy8Xgxsl; lUy8Xgxsl = lUy8Xgxsl + 1) {
        BsfK3HNAZ8 = (271 - 271);
        {
            yKCLUqOP2c = 0;
            while (&UMrQG6quTNF[lUy8Xgxsl][0][n[lUy8Xgxsl] - 1] >= yKCLUqOP2c) {
                BsfK3HNAZ8 = BsfK3HNAZ8 +(*yKCLUqOP2c);
                yKCLUqOP2c = yKCLUqOP2c + 1;
            };
        }
        {
            yKCLUqOP2c = 0;
            while (yKCLUqOP2c <= &UMrQG6quTNF[lUy8Xgxsl][m[lUy8Xgxsl] - 1][n[lUy8Xgxsl] - 1]) {
                BsfK3HNAZ8 = BsfK3HNAZ8 +(*yKCLUqOP2c);
                yKCLUqOP2c = yKCLUqOP2c + 1;
            };
        }
        {
            q = 1;
            while (q <= &UMrQG6quTNF[lUy8Xgxsl][m[lUy8Xgxsl] - 2]) {
                BsfK3HNAZ8 = BsfK3HNAZ8 +(*(*q));
                q = q + 1;
            };
        }
        {
            q = 1;
            while (q <= &UMrQG6quTNF[lUy8Xgxsl][m[lUy8Xgxsl] - 2]) {
                BsfK3HNAZ8 = BsfK3HNAZ8 +(*(*q + n[lUy8Xgxsl] - 1));
                q = q + 1;
            };
        }
        cout << BsfK3HNAZ8 << endl;
    }
    return 0;
}

