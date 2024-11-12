int main () {
    int MJVbUX;
    int i1ltshcuz;
    int sz [(188 - 88)] [100];
    int m [100];
    int FIoWgw4f [100];
    int lJqOWACrbZQ6;
    i1ltshcuz = 35500;
    MJVbUX = 0;
    lJqOWACrbZQ6 = 0;
    for (int SkrKUfeSMT = 0;
    SkrKUfeSMT < 5; SkrKUfeSMT = SkrKUfeSMT +1) {
        {
            int vDHeYhFUQwf2 = 0;
            while (vDHeYhFUQwf2 < 5) {
                scanf ("%d", &sz[SkrKUfeSMT][vDHeYhFUQwf2]);
                if (MJVbUX < sz[SkrKUfeSMT][vDHeYhFUQwf2]) {
                    MJVbUX = sz[SkrKUfeSMT][vDHeYhFUQwf2];
                }
                vDHeYhFUQwf2++;
            };
        }
        m[SkrKUfeSMT] = MJVbUX;
        MJVbUX = 0;
    }
    for (int Vh5qjEGKg = 0;
    5 > Vh5qjEGKg; Vh5qjEGKg = Vh5qjEGKg +1) {
        for (int yyI1eNxi0BYP = 0;
        5 > yyI1eNxi0BYP; yyI1eNxi0BYP = yyI1eNxi0BYP + 1) {
            if (i1ltshcuz > sz[yyI1eNxi0BYP][Vh5qjEGKg]) {
                i1ltshcuz = sz[yyI1eNxi0BYP][Vh5qjEGKg];
            };
        }
        FIoWgw4f[Vh5qjEGKg] = i1ltshcuz;
        i1ltshcuz = 100000;
    }
    for (int M8TWx7O3sk = 0;
    5 > M8TWx7O3sk; M8TWx7O3sk++) {
        for (int gpzd9Wrm = 0;
        5 > gpzd9Wrm; gpzd9Wrm = gpzd9Wrm + 1) {
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
            if (!(m[M8TWx7O3sk] != sz[M8TWx7O3sk][gpzd9Wrm]) && sz[M8TWx7O3sk][gpzd9Wrm] == FIoWgw4f[gpzd9Wrm]) {
                printf ("%d %d %d", M8TWx7O3sk +1, gpzd9Wrm + 1, sz[M8TWx7O3sk][gpzd9Wrm]);
                lJqOWACrbZQ6 = lJqOWACrbZQ6 + 1;
            };
        };
    }
    if (lJqOWACrbZQ6 == 0)
        printf ("not found");
    return 0;
}

