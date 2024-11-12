struct   weNPZbx175J {
    char D5OUtP;
    int tqH71G;
}
weNPZbx175J [(1343 - 342)];

void  main () {
    int HALunSfJ;
    int t;
    int n138emBt0;
    char x6402Bc3FA [(1324 - 323)] = {'\0'};
    gets (x6402Bc3FA);
    for (HALunSfJ = (822 - 822); 1001 > HALunSfJ; HALunSfJ = HALunSfJ +1)
        weNPZbx175J[HALunSfJ].tqH71G = (200 - 200);
    n138emBt0 = strlen (x6402Bc3FA);
    weNPZbx175J[(399 - 399)].D5OUtP = x6402Bc3FA[(681 - 681)];
    weNPZbx175J[0].tqH71G = (410 - 409);
    t = 0;
    {
        HALunSfJ = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n138emBt0 > HALunSfJ) {
            if (!(weNPZbx175J[t].D5OUtP != x6402Bc3FA[HALunSfJ]) || !((weNPZbx175J[t].D5OUtP + (393 - 361)) != x6402Bc3FA[HALunSfJ]) || x6402Bc3FA[HALunSfJ] == weNPZbx175J[t].D5OUtP - (757 - 725))
                weNPZbx175J[t].tqH71G++;
            else {
                t = t + 1;
                weNPZbx175J[t].D5OUtP = x6402Bc3FA[HALunSfJ];
                weNPZbx175J[t].tqH71G = 1;
            }
            HALunSfJ = HALunSfJ +1;
        };
    }
    for (HALunSfJ = 0; HALunSfJ <= t; HALunSfJ++) {
        if (weNPZbx175J[HALunSfJ].D5OUtP >= 'a')
            weNPZbx175J[HALunSfJ].D5OUtP = weNPZbx175J[HALunSfJ].D5OUtP - 32;
        printf ("(%c,%d)", weNPZbx175J[HALunSfJ].D5OUtP, weNPZbx175J[HALunSfJ].tqH71G);
    };
}

