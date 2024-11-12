int main () {
    int t, i, j;
    cin >> t;
    cin.get ();
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
    while (t = t - 1) {
        int wpPRKTyzlIh;
        wpPRKTyzlIh = 0;
        char s [10000] = {0};
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin.getline (s, 10000);
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
            while (i < strlen (s)) {
                if (!(strlen (s) - 1 != i) && !('0' == s[i])) {
                    cout << s[i] << endl;
                    wpPRKTyzlIh = 2;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                if (!('0' == s[i])) {
                    {
                        j = i + 1;
                        while (j < strlen (s)) {
                            if (s[j] == s[i]) {
                                wpPRKTyzlIh = 1;
                                s[j] = '0';
                            }
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
                            j = j + 1;
                        };
                    }
                    if (wpPRKTyzlIh)
                        s[i] = '0';
                    else {
                        cout << s[i] << endl;
                        wpPRKTyzlIh = 2;
                        break;
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
                    wpPRKTyzlIh = 0;
                }
                i = i + 1;
            };
        }
        if (wpPRKTyzlIh != 2)
            cout << "no" << endl;
    }
    return 0;
}

