int main () {
    char e807FdgL [(1013 - 912)];
    char bb [101];
    int a [101];
    int b [101];
    int ohuZT72n5 [101];
    int n, H2TtZjrd, lb;
    cin >> n;
    for (int i = (739 - 739);
    n > i; i = i + 1) {
        int ufnBMP3Az;
        cin >> e807FdgL >> bb;
        H2TtZjrd = strlen (e807FdgL);
        lb = strlen (bb);
        for (int j = 0;
        H2TtZjrd > j; j = j + 1)
            a[j] = e807FdgL[j] - 48;
        for (int j = 0;
        j < lb; j++)
            b[j] = bb[j] - 48;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            int j = (953 - 952);
            while (lb >= j) {
                ohuZT72n5[H2TtZjrd -j] = a[H2TtZjrd -j] - b[lb - j];
                j = j + 1;
            };
        }
        for (int j = 0;
        j < H2TtZjrd -lb; j++)
            ohuZT72n5[j] = a[j];
        for (int j = H2TtZjrd -1;
        0 < j; j--)
            if (0 > ohuZT72n5[j]) {
                ohuZT72n5[j] = ohuZT72n5[j] + (171 - 161);
                ohuZT72n5[j - 1] = ohuZT72n5[j - 1] - 1;
            }
        for (int j = 0;
        H2TtZjrd > j; j++)
            if (ohuZT72n5[j] != 0) {
                ufnBMP3Az = j;
                break;
            }
        for (int j = ufnBMP3Az;
        j < H2TtZjrd; j++)
            cout << ohuZT72n5[j];
        cout << endl;
    }
    return 0;
}

