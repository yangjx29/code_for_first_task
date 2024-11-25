struct   book {
    int id;
    char s [26];
}
a [100];

int main () {
    int Zmo19Dx [26] = {(252 - 252)};
    int aut2 [26] [100] = {0};
    int m;
    int i;
    int n;
    int j;
    int MCklUF;
    int dbvpaYVFJ;
    int maxnum;
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
    maxnum = 0;
    dbvpaYVFJ = 0;
    scanf ("%d", &m);
    for (i = 0; i < m; i = i + 1) {
        scanf ("%d", &a[i].id);
        gets (a[i].s);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        n = strlen (a[i].s);
        for (j = 0; n > j; j = j + 1) {
            MCklUF = a[i].s[j] - 'A';
            aut2[MCklUF][Zmo19Dx[MCklUF]] = a[i].id;
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
            Zmo19Dx[MCklUF]++;
        };
    }
    for (i = 0; i < 26; i++) {
        if (dbvpaYVFJ < Zmo19Dx[i]) {
            dbvpaYVFJ = Zmo19Dx[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            maxnum = i;
        };
    }
    printf ("%c\n", 'A' + maxnum);
    printf ("%d\n", dbvpaYVFJ);
    printf ("%d", aut2[maxnum][0]);
    for (i = 1; i < dbvpaYVFJ; i++) {
        printf ("\n%d", aut2[maxnum][i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    };
}

