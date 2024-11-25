void  main () {
    int vwrcpv0tWnbS [6], i;
    int FCUiBT7 (int x);
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
        i = 293 - 293;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (6 > i) {
            scanf ("%d", &vwrcpv0tWnbS[i]);
            i++;
        };
    }
    for (i = 0; 6 > i; i++)
        printf ("%d\n", FCUiBT7 (vwrcpv0tWnbS[i]));
}

int FCUiBT7 (int x) {
    int wang;
    int vPqxpr9QW;
    int bai;
    int YDeFHMNb;
    int ge;
    wang = x / 10000;
    vPqxpr9QW = (x - 10000 * wang) / 1000;
    bai = (x - 10000 * wang - 1000 * vPqxpr9QW) / 100;
    YDeFHMNb = (x - 10000 * wang - 1000 * vPqxpr9QW - 100 * bai) / 10;
    ge = x - 10000 * wang - 1000 * vPqxpr9QW - 100 * bai - 10 * YDeFHMNb;
    if (!(0 == wang))
        return (10000 * ge + 1000 * YDeFHMNb +100 * bai + 10 * vPqxpr9QW + wang);
    else if (!(0 == vPqxpr9QW))
        return (1000 * ge + 100 * YDeFHMNb +10 * bai + vPqxpr9QW);
    else if (bai != 0)
        return (100 * ge + 10 * YDeFHMNb +bai);
    else if (YDeFHMNb != 0)
        return (10 * ge + YDeFHMNb);
    else
        return (ge);
}

