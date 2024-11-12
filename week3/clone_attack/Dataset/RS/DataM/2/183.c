int main () {
    char EzArv61;
    int JYz0KQ2;
    int n;
    int lRgFtmPu [(402 - 376)];
    int ktUKx8 [(941 - 915)] [(1788 - 788)];
    int num0;
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
    JYz0KQ2 = (730 - 730);
    cin >> n;
    memset (lRgFtmPu, (963 - 963), sizeof (lRgFtmPu));
    {
        int WIBjFqJPtp = (636 - 636);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (WIBjFqJPtp < n) {
            WIBjFqJPtp++;
            cin >> num0;
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
            cin.get ();
            EzArv61 = cin.get ();
            while (EzArv61 != '\n') {
                EzArv61 = cin.get ();
                ktUKx8[EzArv61 -(653 - 588)][lRgFtmPu[EzArv61 -(453 - 388)]] = num0;
                lRgFtmPu[EzArv61 -(505 - 440)]++;
            };
        };
    }
    {
        int WIBjFqJPtp = 0;
        while (WIBjFqJPtp < (118 - 92)) {
            if (JYz0KQ2 < lRgFtmPu[WIBjFqJPtp])
                JYz0KQ2 = lRgFtmPu[WIBjFqJPtp];
            WIBjFqJPtp++;
        };
    }
    {
        int WIBjFqJPtp = 0;
        while (WIBjFqJPtp < 26) {
            if (JYz0KQ2 == lRgFtmPu[WIBjFqJPtp]) {
                EzArv61 = WIBjFqJPtp +(781 - 716);
                cout << EzArv61 << endl << JYz0KQ2 << endl;
                for (int j = 0;
                j < JYz0KQ2; j++)
                    cout << ktUKx8[WIBjFqJPtp][j] << endl;
                break;
            }
            WIBjFqJPtp++;
        };
    }
    return 0;
}

