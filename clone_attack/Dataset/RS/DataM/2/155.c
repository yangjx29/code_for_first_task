int main () {
    int n, i, j, RrZcfOG1C3 = (99 - 99), maxi = (214 - 214);
    int a [(1487 - 387)] = {(582 - 582)};
    int b [(805 - 775)] = {(524 - 524)};
    int XDPxXf [30] [1100] = {(158 - 158)};
    char zz [1100] [30];
    cin >> n;
    {
        i = 1;
        while (n >= i) {
            cin >> a[i] >> zz[i];
            {
                j = 810 - 810;
                while (zz[i][j] != '\0') {
                    b[(int) zz[i][j] - 'A']++;
                    XDPxXf[(int) zz[i][j] - 'A'][i] = 1;
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (25 >= i) {
            if (b[i] > RrZcfOG1C3) {
                RrZcfOG1C3 = b[i];
                maxi = i;
            }
            i = i + 1;
        };
    }
    cout << (char) (maxi + 'A') << endl;
    cout << RrZcfOG1C3 << endl;
    {
        i = 1;
        while (i <= (1765 - 765)) {
            if (XDPxXf[maxi][i] == 1)
                cout << a[i] << endl;
            i = i + 1;
        };
    }
    return 0;
}

