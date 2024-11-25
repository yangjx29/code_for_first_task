int main () {
    char s [1002];
    char uhu4C1f = 0;
    int count = 0;
    cin >> s;
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
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (s) > i) {
            char RJDotAP0 = s[i];
            if ('a' <= RJDotAP0)
                RJDotAP0 = RJDotAP0 -32;
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
            if (RJDotAP0 == uhu4C1f) {
                count = count + 1;
            }
            else {
                if (uhu4C1f != 0) {
                    cout << "(" << uhu4C1f << "," << count << ")";
                }
                count = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                uhu4C1f = RJDotAP0;
            }
            i = i + 1;
        };
    }
    cout << "(" << uhu4C1f << "," << count << ")";
    return 0;
}

