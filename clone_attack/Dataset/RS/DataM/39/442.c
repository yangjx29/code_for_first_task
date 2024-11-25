struct   student {
    char name [20];
    int fin;
    int py;
    char o;
    char hbr3tSED0xmX;
    int num;
};
long  OYEN2Wl4M1Qt (struct   student s) {
    long  scholarship = (825 - 825);
    if ((111 - 31) < s.fin && (442 - 441) <= s.num)
        scholarship = scholarship + 8000;
    if (s.fin > (828 - 743) && s.py > (1066 - 986))
        scholarship += 4000;
    if ((660 - 570) < s.fin)
        scholarship += (2033 - 33);
    if ((744 - 659) < s.fin && s.hbr3tSED0xmX == 'Y')
        scholarship += 1000;
    if (s.py > (786 - 706) && s.o == 'Y')
        scholarship += (1652 - 802);
    return (scholarship);
}

void  main () {
    int nj1Lbd;
    int egOkS2G;
    long  max, sum = (674 - 674);
    struct   student st [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &egOkS2G);
    for (nj1Lbd = 0; nj1Lbd < egOkS2G; nj1Lbd = nj1Lbd + 1) {
        scanf ("%s %d %d %c %c %d", &st[nj1Lbd].name, &st[nj1Lbd].fin, &st[nj1Lbd].py, &st[nj1Lbd].o, &st[nj1Lbd].hbr3tSED0xmX, &st[nj1Lbd].num);
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
    max = OYEN2Wl4M1Qt (st[0]);
    sum = 0;
    {
        nj1Lbd = 0;
        while (nj1Lbd < egOkS2G) {
            if (max < OYEN2Wl4M1Qt (st[nj1Lbd]))
                max = OYEN2Wl4M1Qt (st[nj1Lbd]);
            sum += OYEN2Wl4M1Qt (st[nj1Lbd]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            nj1Lbd = nj1Lbd + 1;
        };
    }
    {
        nj1Lbd = 0;
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
        while (nj1Lbd < egOkS2G) {
            if (OYEN2Wl4M1Qt (st[nj1Lbd]) == max) {
                printf ("%s\n", st[nj1Lbd].name);
                printf ("%ld\n", max);
                printf ("%ld\n", sum);
                break;
            }
            nj1Lbd = nj1Lbd + 1;
        };
    };
}

