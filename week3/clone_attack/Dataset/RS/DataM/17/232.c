int main () {
    int r79hEZ4HP0e, j, m, hUT3N1V, Z18FLNZ, ZwgydmG, CHvSw2OioTg;
    int m21Q8aICy4sg [(838 - 738)], Z7ZTq0Ayh [100];
    char ticfSZoR [(619 - 518)], s [101];
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
    for (; gets (ticfSZoR);) {
        {
            r79hEZ4HP0e = 174 - 174;
            while (r79hEZ4HP0e < 100) {
                m21Q8aICy4sg[r79hEZ4HP0e] = (685 - 685);
                Z7ZTq0Ayh[r79hEZ4HP0e] = (256 - 256);
                r79hEZ4HP0e++;
            };
        }
        m = (120 - 120);
        {
            r79hEZ4HP0e = 529 - 529;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (ticfSZoR[r79hEZ4HP0e] != '\0') {
                if (!(')' != ticfSZoR[r79hEZ4HP0e])) {
                    j = r79hEZ4HP0e;
                    CHvSw2OioTg = (646 - 645);
                    while ((953 - 953) <= j) {
                        if (!('(' != ticfSZoR[j])) {
                            {
                                ZwgydmG = 876 - 876;
                                while (ZwgydmG < m) {
                                    if (m21Q8aICy4sg[ZwgydmG] == j)
                                        CHvSw2OioTg = (774 - 774);
                                    ZwgydmG++;
                                };
                            }
                            if (!(0 == CHvSw2OioTg)) {
                                m21Q8aICy4sg[m] = j;
                                Z7ZTq0Ayh[m] = r79hEZ4HP0e;
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                }
                                m++;
                                break;
                            };
                        }
                        j = j - 1;
                        CHvSw2OioTg = (270 - 269);
                    };
                }
                r79hEZ4HP0e++;
            };
        }
        strcpy (s, ticfSZoR);
        hUT3N1V = (841 - 840);
        {
            r79hEZ4HP0e = 0;
            while (!('\0' == s[r79hEZ4HP0e])) {
                if (s[r79hEZ4HP0e] == '(') {
                    {
                        j = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        while (m > j) {
                            if (r79hEZ4HP0e == m21Q8aICy4sg[j]) {
                                hUT3N1V = 0;
                                break;
                            }
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
                            j++;
                        };
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
                    if (hUT3N1V == 0)
                        s[r79hEZ4HP0e] = ' ';
                    else
                        s[r79hEZ4HP0e] = '$';
                }
                else if (s[r79hEZ4HP0e] == ')') {
                    for (j = 0; j < m; j++) {
                        if (r79hEZ4HP0e == Z7ZTq0Ayh[j]) {
                            hUT3N1V = 0;
                            break;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (hUT3N1V == 0)
                        s[r79hEZ4HP0e] = ' ';
                    else
                        s[r79hEZ4HP0e] = '?';
                }
                else
                    s[r79hEZ4HP0e] = ' ';
                hUT3N1V = 1;
                r79hEZ4HP0e++;
            };
        }
        Z18FLNZ = strlen (s);
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
            j = Z18FLNZ;
            while (j >= 0) {
                if ((s[j] == ' ') || (s[j] == '\0')) {
                    if (s[j - 1] != ' ') {
                        s[j] = '\0';
                        break;
                    };
                }
                j--;
            };
        }
        printf ("%s\n", ticfSZoR);
        j = 0;
        while (s[j] == ' ')
            j++;
        for (r79hEZ4HP0e = j; s[r79hEZ4HP0e] != '\0'; r79hEZ4HP0e++) {
            printf ("%c", s[r79hEZ4HP0e]);
        }
        printf ("\n");
    }
    return 0;
}

