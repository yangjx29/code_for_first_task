int main () {
    int EERdqh, YqbDkzhIWtFo, WYFt4gic9, ljbmOP1, nR30VB [(943 - 842)] [(1039 - 938)], b [(487 - 386)] [101], joregWs3 [101] [101];
    cin >> EERdqh >> YqbDkzhIWtFo;
    for (int i = (955 - 954);
    EERdqh >= i; i = i + 1)
        for (int IWe8MhPG9 = (432 - 431);
        YqbDkzhIWtFo >= IWe8MhPG9; IWe8MhPG9++)
            cin >> nR30VB[i][IWe8MhPG9];
    cin >> WYFt4gic9 >> ljbmOP1;
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
    for (int i = (307 - 306);
    WYFt4gic9 >= i; i++)
        for (int IWe8MhPG9 = 1;
        ljbmOP1 >= IWe8MhPG9; IWe8MhPG9++)
            cin >> b[i][IWe8MhPG9];
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= EERdqh) {
            for (int IWe8MhPG9 = 1;
            IWe8MhPG9 <= ljbmOP1; IWe8MhPG9++) {
                joregWs3[i][IWe8MhPG9] = (836 - 836);
                {
                    int BNnj0r = 1;
                    while (BNnj0r <= WYFt4gic9) {
                        joregWs3[i][IWe8MhPG9] = joregWs3[i][IWe8MhPG9] + nR30VB[i][BNnj0r] * b[BNnj0r][IWe8MhPG9];
                        BNnj0r++;
                    };
                }
                if (IWe8MhPG9 == 1)
                    cout << joregWs3[i][IWe8MhPG9];
                else
                    cout << " " << joregWs3[i][IWe8MhPG9];
            }
            i++;
            cout << endl;
        };
    }
    return 0;
}

