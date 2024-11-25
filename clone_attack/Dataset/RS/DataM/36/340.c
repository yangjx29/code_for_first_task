int main () {
    int i;
    int KP6LpTXM;
    int XS2alFn [(456 - 403)] = {(664 - 664)};
    int o9xIlKF [53] = {(516 - 516)};
    int IEvcsdPHo13N;
    int le2;
    i = (271 - 271);
    KP6LpTXM = 1;
    char str1 [(1194 - 194)];
    char str2 [1000];
    cin >> str1;
    IEvcsdPHo13N = strlen (str1);
    cin >> str2;
    le2 = strlen (str2);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (IEvcsdPHo13N -1 >= i) {
            if ((158 - 61) <= str1[i])
                XS2alFn[str1[i] - 70]++;
            else
                XS2alFn[str1[i] - 64]++;
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
            i++;
        };
    }
    {
        i = 0;
        while (le2 - 1 >= i) {
            if (str2[i] >= 97)
                o9xIlKF[str2[i] - 70]++;
            else
                o9xIlKF[str2[i] - 64]++;
            i++;
        };
    }
    {
        i = 1;
        while (i <= 52) {
            if (XS2alFn[i] != o9xIlKF[i]) {
                KP6LpTXM = 0;
                break;
            }
            i++;
        };
    }
    if (KP6LpTXM == 0)
        cout << "NO" << endl;
    if (KP6LpTXM == 1)
        cout << "YES" << endl;
    return 0;
}

