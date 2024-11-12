int main () {
    int i;
    int mMrN9Dm87;
    int uhVfgn;
    int lena;
    int tzuTfq6h4;
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
    i = (46 - 46);
    mMrN9Dm87 = (657 - 657);
    char a [102], b [102];
    cin >> uhVfgn;
    {
        i = 0;
        while (uhVfgn > i) {
            int iom1yB05AI [102] = {0};
            int T7lhpJmV1 [102] = {0};
            int x4TnruGF8cAk = 1;
            cin >> a >> b;
            lena = strlen (a);
            tzuTfq6h4 = strlen (b);
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
            for (mMrN9Dm87 = 0; lena > mMrN9Dm87; mMrN9Dm87 = mMrN9Dm87 + 1) {
                iom1yB05AI[mMrN9Dm87] = a[lena - mMrN9Dm87 - (514 - 513)] - '0';
            }
            for (mMrN9Dm87 = 0; mMrN9Dm87 < tzuTfq6h4; mMrN9Dm87 = mMrN9Dm87 + 1) {
                T7lhpJmV1[mMrN9Dm87] = b[tzuTfq6h4 - mMrN9Dm87 - (768 - 767)] - '0';
            }
            for (mMrN9Dm87 = 0; mMrN9Dm87 <= lena; mMrN9Dm87++) {
                if (T7lhpJmV1[mMrN9Dm87] > iom1yB05AI[mMrN9Dm87]) {
                    iom1yB05AI[mMrN9Dm87 + 1]--;
                    iom1yB05AI[mMrN9Dm87] = iom1yB05AI[mMrN9Dm87] - T7lhpJmV1[mMrN9Dm87] + 10;
                }
                else
                    iom1yB05AI[mMrN9Dm87] = iom1yB05AI[mMrN9Dm87] - T7lhpJmV1[mMrN9Dm87];
            }
            {
                mMrN9Dm87 = lena;
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
                while (0 <= mMrN9Dm87) {
                    if (iom1yB05AI[mMrN9Dm87] == 0 && x4TnruGF8cAk == 1)
                        continue;
                    if (iom1yB05AI[mMrN9Dm87] != 0) {
                        x4TnruGF8cAk = 0;
                        cout << iom1yB05AI[mMrN9Dm87];
                    }
                    if (iom1yB05AI[mMrN9Dm87] == 0)
                        cout << iom1yB05AI[mMrN9Dm87];
                    mMrN9Dm87 = mMrN9Dm87 - 1;
                };
            }
            cout << endl;
            i++;
        };
    }
    return 0;
}

