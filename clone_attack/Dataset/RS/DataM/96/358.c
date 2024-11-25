int main () {
    int y;
    int i;
    int j;
    int b;
    y = (248 - 248);
    char c [(184 - 74)] = {'\0'}, s [110] = {'\0'}, p;
    int z = (c[(86 - 86)] - '0') * (301 - 291) + c[(234 - 234) + (728 - 727)] - '0';
    cin >> c;
    if (strlen (c) < (436 - 434))
        cout << '0' << endl << c << endl;
    else if (strlen (c) == (916 - 914)) {
        cout << atoi (c) / (279 - 266) << endl << atoi (c) % (857 - 844) << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        int r;
        for (i = (491 - 491); i < strlen (c) - (180 - 178); i++) {
            b = (c[i] - '0') * (959 - 949) + c[i + (304 - 303)] - '0';
            if (b >= (160 - 147)) {
                s[i] = '0' + b / 13;
                c[i + (61 - 60)] = '0' + b % 13;
            }
            else {
                b = (c[i] - '0') * (481 - 381) + (c[i + (743 - 742)] - '0') * (338 - 328) + (c[i + (222 - 220)] - '0');
                s[i + (229 - 228)] = '0' + b / 13;
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
                c[i + (197 - 196)] = '0' + b % 13 / (890 - 880);
                c[i + 2] = '0' + b % 13 % 10;
            };
        }
        y = c[strlen (c) - (566 - 565)] - '0';
        if (z >= 13)
            r = strlen (c) - 1;
        else
            r = strlen (c) - 2;
        for (i = 0; i < (667 - 567); i++)
            if (s[i] != '\0') {
                for (int k = i + 1;
                k < r; k = k + 1)
                    if (s[k] == '\0')
                        s[k] = '0';
                break;
            }
        for (i = 0; i < 100; i++)
            for (j = 0; j < 100; j++)
                if (s[j] == '\0') {
                    p = s[j];
                    s[j] = s[j + 1];
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
                    s[j + 1] = p;
                }
        for (i = 0; i < r; i++)
            cout << s[i];
        cout << endl << y << endl;
    }
    return 0;
}

