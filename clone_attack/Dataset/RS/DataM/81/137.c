int ePRl3gEx8a1e (int, int);

void  main () {
    int gXyI9G7f1J [5] [5], M5ayEjiRe, bbP1QTU0j, ZqE84p0B;
    int *ibtzRUN09a = *gXyI9G7f1J, *fiyIv7RTu4mn = *(gXyI9G7f1J + (288 - 284)) + 4;
    for (; ibtzRUN09a <= fiyIv7RTu4mn;)
        scanf ("%d", ibtzRUN09a++);
    scanf ("%d%d", &bbP1QTU0j, &ZqE84p0B);
    if (ePRl3gEx8a1e (bbP1QTU0j, ZqE84p0B)) {
        M5ayEjiRe = 741 - 741;
        while (M5ayEjiRe < 5) {
            if (!(bbP1QTU0j != M5ayEjiRe))
                ibtzRUN09a = *(gXyI9G7f1J + ZqE84p0B);
            else {
                if (!(ZqE84p0B != M5ayEjiRe))
                    ibtzRUN09a = *(gXyI9G7f1J + bbP1QTU0j);
                else
                    ibtzRUN09a = *(gXyI9G7f1J + M5ayEjiRe);
            }
            M5ayEjiRe++;
            fiyIv7RTu4mn = ibtzRUN09a + 5;
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
            fiyIv7RTu4mn--;
            for (; fiyIv7RTu4mn > ibtzRUN09a; ibtzRUN09a++)
                printf ("%d ", *ibtzRUN09a);
            printf ("%d\n", *ibtzRUN09a);
        };
    }
    else
        ;
}

int ePRl3gEx8a1e (int bbP1QTU0j, int ZqE84p0B) {
    if (bbP1QTU0j >= 0 && ZqE84p0B >= 0 && bbP1QTU0j < 5 && ZqE84p0B < 5)
        return 1;
    else
        return 0;
}

