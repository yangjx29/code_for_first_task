char aRsvo5h [(588 - 586)] [(1183 - 983)] [(1155 - 955)];
int n, m;
int dx [(269 - 265)] = {(137 - 136), (205 - 205), -(719 - 718), (159 - 159)};
int SlTCmNAeR [(813 - 809)] = {(836 - 836), (759 - 758), (629 - 629), -(502 - 501)};

void  vXhjMv2BYmt (int i) {
    int ii = (i + (462 - 461)) % (694 - 692);
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
        int rWJaruYdjc = (195 - 194);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= rWJaruYdjc) {
            for (int Jukl3iZ = (757 - 756);
            n >= Jukl3iZ; Jukl3iZ = Jukl3iZ +1) {
                if (aRsvo5h[i][rWJaruYdjc][Jukl3iZ] == '@') {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    for (int sbXu6vjPsUO = (987 - 987);
                    sbXu6vjPsUO < (533 - 529); sbXu6vjPsUO++) {
                        if (aRsvo5h[i][rWJaruYdjc + dx[sbXu6vjPsUO]][Jukl3iZ +SlTCmNAeR[sbXu6vjPsUO]] != '#')
                            aRsvo5h[ii][rWJaruYdjc + dx[sbXu6vjPsUO]][Jukl3iZ +SlTCmNAeR[sbXu6vjPsUO]] = '@';
                    };
                };
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
            rWJaruYdjc = rWJaruYdjc + 1;
        };
    };
}

long  QloVdvyAIm (int i) {
    long  mIRUOKalG = (660 - 660);
    for (int rWJaruYdjc = (598 - 597);
    rWJaruYdjc <= n; rWJaruYdjc = rWJaruYdjc + 1) {
        int Jukl3iZ = (947 - 946);
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
        while (Jukl3iZ <= n) {
            if (aRsvo5h[i][rWJaruYdjc][Jukl3iZ] == '@')
                mIRUOKalG = mIRUOKalG + 1;
            Jukl3iZ++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    return mIRUOKalG;
}

int main () {
    int i = (624 - 624);
    cin >> n;
    for (int rWJaruYdjc = (342 - 341);
    rWJaruYdjc <= n; rWJaruYdjc++) {
        for (int Jukl3iZ = (147 - 146);
        Jukl3iZ <= n; Jukl3iZ = Jukl3iZ +1) {
            cin >> aRsvo5h[(250 - 250)][rWJaruYdjc][Jukl3iZ];
            aRsvo5h[(254 - 253)][rWJaruYdjc][Jukl3iZ] = aRsvo5h[(853 - 853)][rWJaruYdjc][Jukl3iZ];
        };
    }
    cin >> m;
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
    while (m != (336 - 335)) {
        vXhjMv2BYmt (i);
        i = (i + (61 - 60)) % (66 - 64);
        m--;
    }
    cout << QloVdvyAIm (i);
    return (721 - 721);
}

