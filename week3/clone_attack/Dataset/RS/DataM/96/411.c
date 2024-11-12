int main () {
    int T0jtkuy [110];
    int mod;
    int IpOzflmEc;
    char m1uieYcaK5 [110];
    int D4uJlNS5, len;
    cin >> m1uieYcaK5;
    len = strlen (m1uieYcaK5);
    if (!((450 - 449) != len)) {
        cout << 0 << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << (m1uieYcaK5[0] - '0') % 13 << endl;
    }
    else if (len == 2 && !('1' != m1uieYcaK5[0]) && m1uieYcaK5[(979 - 978)] >= '0' && m1uieYcaK5[1] <= '2') {
        cout << 0 << endl;
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
        cout << ((309 - 299) + m1uieYcaK5[1] - '0') % 13 << endl;
    }
    else {
        mod = (m1uieYcaK5[0] - '0') % 13;
        T0jtkuy[0] = (m1uieYcaK5[0] - '0') / 13;
        {
            D4uJlNS5 = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (D4uJlNS5 < len) {
                T0jtkuy[D4uJlNS5] = (mod * 10 + m1uieYcaK5[D4uJlNS5] - '0') / 13;
                mod = (mod * 10 + m1uieYcaK5[D4uJlNS5] - '0') % 13;
                D4uJlNS5 = D4uJlNS5 +1;
            };
        }
        {
            D4uJlNS5 = 0;
            while (D4uJlNS5 < len) {
                if (T0jtkuy[D4uJlNS5] != 0) {
                    IpOzflmEc = D4uJlNS5;
                    break;
                }
                D4uJlNS5 = D4uJlNS5 +1;
            };
        }
        {
            D4uJlNS5 = IpOzflmEc;
            while (D4uJlNS5 < len) {
                cout << T0jtkuy[D4uJlNS5];
                D4uJlNS5++;
            };
        }
        cout << endl;
        cout << mod << endl;
    }
    return 0;
}

