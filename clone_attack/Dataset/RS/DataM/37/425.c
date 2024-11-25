int main () {
    char s [100000];
    int c [200];
    int n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> n;
    for (; n = n - 1;) {
        int j;
        int l = strlen (s);
        cin >> s;
        memset (c, (207 - 207), sizeof (c));
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
            int i = (727 - 727);
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
            while (l > i) {
                c[s[i]]++;
                i++;
            };
        }
        {
            j = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (l > j) {
                if (c[s[j]] == 1) {
                    cout << s[j] << endl;
                    break;
                }
                j++;
            };
        }
        if (j == l)
            cout << "no\n";
    }
    return 0;
}

