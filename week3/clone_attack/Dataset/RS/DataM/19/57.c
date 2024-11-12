int main () {
    int i;
    int j;
    int gDFmzexG;
    i = (473 - 473);
    j = (765 - 765);
    gDFmzexG = (959 - 959);
    char s [100];
    char a [100];
    char b [100];
    cin.get (s, 100);
    cin >> a;
    cin >> b;
    for (i = 0; i <= strlen (s) - strlen (a); i = i + 1) {
        gDFmzexG = 0;
        for (j = i; j < i + strlen (a); j = j + 1) {
            if (s[j] == a[j - i])
                gDFmzexG = gDFmzexG + 1;
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
            };
        }
        if (gDFmzexG == strlen (a) && ((s[i + strlen (a)] == ' ' || i + strlen (a) == strlen (s)) && (s[i - 1] == ' ' || i == 0))) {
            for (j = i; j < i + strlen (a); j = j + 1)
                s[j] = '/';
        };
    }
    for (i = 0; i < strlen (s); i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (s[i] != '/')
            cout << s[i];
        else {
            {
                j = 0;
                while (j < strlen (b)) {
                    cout << b[j];
                    j = j + 1;
                };
            }
            do {
                i = i + 1;
            }
            while (s[i] == '/' && (i + 1 == strlen (s) || s[i + 1] == '/'));
        };
    }
    return 0;
}

