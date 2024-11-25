int main () {
    char s [200];
    char b [200];
    int c7DwO0;
    char a [200];
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
    char SRoH2A7pk [200];
    cin >> c7DwO0;
    for (; 0 < c7DwO0;) {
        int slen = strlen (s);
        int ld3c7s6C9;
        ld3c7s6C9 = 0;
        int j;
        int i;
        int HTUtwXvFch;
        HTUtwXvFch = slen;
        int blen;
        blen = slen;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> s;
        for (i = 0; slen > i; i++)
            a[i] = s[slen - i - 1];
        cin >> s;
        slen = strlen (s);
        {
            i = 0;
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
            while (slen > i) {
                b[i] = s[slen - i - 1];
                i++;
            };
        }
        {
            i = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < blen) {
                if (a[i] - '0' - ld3c7s6C9 >= b[i] - '0') {
                    SRoH2A7pk[i] = (char) (a[i] - b[i] - ld3c7s6C9 + '0');
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    ld3c7s6C9 = 0;
                }
                else {
                    SRoH2A7pk[i] = (char) (a[i] - b[i] - ld3c7s6C9 + 10 + '0');
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
                    ld3c7s6C9 = 1;
                }
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
                i++;
            };
        }
        {
            i = blen;
            while (i < HTUtwXvFch) {
                if ('0' <= a[i] - ld3c7s6C9) {
                    SRoH2A7pk[i] = (char) (a[i] - ld3c7s6C9);
                    ld3c7s6C9 = 0;
                }
                else {
                    SRoH2A7pk[i] = (char) (a[i] - ld3c7s6C9 + 10);
                    ld3c7s6C9 = 1;
                }
                i++;
            };
        }
        {
            i = HTUtwXvFch -1;
            while (i >= 0) {
                if (SRoH2A7pk[i] != '0')
                    break;
                i--;
            };
        }
        for (j = i; j >= 0; j--)
            cout << SRoH2A7pk[j];
        cout << endl;
        c7DwO0--;
    }
    return 0;
}

