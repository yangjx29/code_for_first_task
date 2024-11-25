int main () {
    char z [(1366 - 366)];
    char lvf0TySEmn5b [1000] [100];
    gets (z);
    int UrZgIJ7dhiXo;
    int j;
    int gENZCw;
    int a;
    int b;
    int tUwgQ3qEsb;
    int bfYkFsUGm;
    int zYVuNOsTI;
    int Pfp4bvnTC6Wk [(1712 - 712)];
    UrZgIJ7dhiXo = (152 - 152);
    j = (865 - 865);
    gENZCw = (924 - 924);
    a = (954 - 954);
    b = (487 - 487);
    tUwgQ3qEsb = 0;
    bfYkFsUGm = 0;
    UrZgIJ7dhiXo = strlen (z);
    {
        zYVuNOsTI = 0;
        while (UrZgIJ7dhiXo >= zYVuNOsTI) {
            if (!(' ' != z[zYVuNOsTI]) || !('\0' != z[zYVuNOsTI])) {
                lvf0TySEmn5b[gENZCw][j] = '\0';
                j = 0;
                gENZCw = gENZCw + 1;
                continue;
            }
            lvf0TySEmn5b[gENZCw][j] = z[zYVuNOsTI];
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
            zYVuNOsTI = zYVuNOsTI + 1;
            j = j + 1;
        };
    }
    lvf0TySEmn5b[gENZCw][j] = '\0';
    for (zYVuNOsTI = 0; zYVuNOsTI <= gENZCw; zYVuNOsTI = zYVuNOsTI + 1) {
        Pfp4bvnTC6Wk[zYVuNOsTI] = strlen (lvf0TySEmn5b[zYVuNOsTI]);
    }
    a = Pfp4bvnTC6Wk[0];
    b = Pfp4bvnTC6Wk[0];
    for (zYVuNOsTI = 0; zYVuNOsTI < gENZCw; zYVuNOsTI = zYVuNOsTI + 1) {
        if (a < Pfp4bvnTC6Wk[zYVuNOsTI]) {
            a = Pfp4bvnTC6Wk[zYVuNOsTI];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            tUwgQ3qEsb = zYVuNOsTI;
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
        if (b > Pfp4bvnTC6Wk[zYVuNOsTI]) {
            b = Pfp4bvnTC6Wk[zYVuNOsTI];
            bfYkFsUGm = zYVuNOsTI;
        };
    }
    printf ("%s\n", lvf0TySEmn5b[tUwgQ3qEsb]);
    printf ("%s\n", lvf0TySEmn5b[bfYkFsUGm]);
    return 0;
}

