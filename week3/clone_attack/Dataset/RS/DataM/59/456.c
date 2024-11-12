int JVkKGdRgLWZ0 = (668 - 668);
int m = (203 - 203);
char a [(537 - 437)] [100] = {'\0'};
int oASxFK [100] [100] = {(643 - 643)};
int c [100] [100] = {(453 - 453)};

void  find () {
    int ASgmwtRBC;
    int ijIzMal0;
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
    for (ASgmwtRBC = (557 - 557); JVkKGdRgLWZ0 > ASgmwtRBC; ASgmwtRBC = ASgmwtRBC +1) {
        ijIzMal0 = 732 - 732;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JVkKGdRgLWZ0 > ijIzMal0) {
            c[ASgmwtRBC][ijIzMal0] = oASxFK[ASgmwtRBC][ijIzMal0];
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
            ijIzMal0 = ijIzMal0 + 1;
        };
    }
    for (ASgmwtRBC = (367 - 367); JVkKGdRgLWZ0 > ASgmwtRBC; ASgmwtRBC = ASgmwtRBC +1)
        for (ijIzMal0 = 0; JVkKGdRgLWZ0 > ijIzMal0; ijIzMal0 = ijIzMal0 + 1)
            if (!((910 - 908) != oASxFK[ASgmwtRBC][ijIzMal0])) {
                c[ASgmwtRBC][ijIzMal0] = (788 - 786);
                if (oASxFK[ASgmwtRBC +(839 - 838)][ijIzMal0] == (893 - 892))
                    c[ASgmwtRBC +(560 - 559)][ijIzMal0] = (884 - 882);
                if (!((404 - 403) != oASxFK[ASgmwtRBC -(928 - 927)][ijIzMal0]))
                    c[ASgmwtRBC -(201 - 200)][ijIzMal0] = (270 - 268);
                if (!(1 != oASxFK[ASgmwtRBC][ijIzMal0 + 1]))
                    c[ASgmwtRBC][ijIzMal0 + 1] = 2;
                if (!(1 != oASxFK[ASgmwtRBC][ijIzMal0 - 1]))
                    c[ASgmwtRBC][ijIzMal0 - 1] = 2;
            }
    {
        ASgmwtRBC = 0;
        while (JVkKGdRgLWZ0 > ASgmwtRBC) {
            for (ijIzMal0 = 0; JVkKGdRgLWZ0 > ijIzMal0; ijIzMal0++)
                oASxFK[ASgmwtRBC][ijIzMal0] = c[ASgmwtRBC][ijIzMal0];
            ASgmwtRBC = ASgmwtRBC +1;
        };
    };
}

int main () {
    int WrzI3yYHKO1k;
    WrzI3yYHKO1k = 0;
    int m;
    m = 0;
    int ASgmwtRBC = 0, ijIzMal0 = 0;
    cin >> JVkKGdRgLWZ0;
    for (ASgmwtRBC = 0; JVkKGdRgLWZ0 > ASgmwtRBC; ASgmwtRBC = ASgmwtRBC +1)
        cin >> a[ASgmwtRBC];
    {
        ASgmwtRBC = 0;
        while (JVkKGdRgLWZ0 > ASgmwtRBC) {
            for (ijIzMal0 = 0; JVkKGdRgLWZ0 > ijIzMal0; ijIzMal0++) {
                if (a[ASgmwtRBC][ijIzMal0] == '.')
                    oASxFK[ASgmwtRBC][ijIzMal0] = 1;
                if (a[ASgmwtRBC][ijIzMal0] == '@')
                    oASxFK[ASgmwtRBC][ijIzMal0] = 2;
            }
            ASgmwtRBC = ASgmwtRBC +1;
        };
    }
    cin >> m;
    for (ASgmwtRBC = 1; ASgmwtRBC < m; ASgmwtRBC = ASgmwtRBC +1)
        find ();
    for (ASgmwtRBC = 0; ASgmwtRBC < JVkKGdRgLWZ0; ASgmwtRBC = ASgmwtRBC +1)
        for (ijIzMal0 = 0; ijIzMal0 < JVkKGdRgLWZ0; ijIzMal0++)
            if (oASxFK[ASgmwtRBC][ijIzMal0] == 2)
                WrzI3yYHKO1k++;
    cout << WrzI3yYHKO1k;
    return 0;
}

