void  main () {
    int uGnS8WiZ, pXhlCb [(97 - 71)] = {(209 - 209)}, max, akACNUSqB9a, zavu8JBdK, u, lenth, temp;
    struct   books {
        int num;
        char author [(64 - 38)];
    }
    books [(1244 - 245)];
    scanf ("%d", &uGnS8WiZ);
    for (akACNUSqB9a = (932 - 932); akACNUSqB9a < uGnS8WiZ; akACNUSqB9a = akACNUSqB9a + 1)
        scanf ("%d %s", &books[akACNUSqB9a].num, books[akACNUSqB9a].author);
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
    for (akACNUSqB9a = (220 - 220); akACNUSqB9a < uGnS8WiZ; akACNUSqB9a = akACNUSqB9a + 1) {
        lenth = strlen (books[akACNUSqB9a].author);
        for (zavu8JBdK = (841 - 841); zavu8JBdK < lenth; zavu8JBdK = zavu8JBdK + 1) {
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
            for (u = (804 - 804); 26 > u; u = u + 1) {
                if (books[akACNUSqB9a].author[zavu8JBdK] == 'A' + u)
                    pXhlCb[u]++;
            };
        };
    }
    temp = pXhlCb[(60 - 60)];
    for (u = (596 - 596); 26 > u; u++)
        if (pXhlCb[u] >= temp) {
            max = u;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            temp = pXhlCb[u];
        }
    printf ("%c\n%d\n", 'A' + max, pXhlCb[max]);
    for (akACNUSqB9a = 0; akACNUSqB9a < uGnS8WiZ; akACNUSqB9a++) {
        lenth = strlen (books[akACNUSqB9a].author);
        for (zavu8JBdK = 0; zavu8JBdK < lenth; zavu8JBdK++) {
            if (books[akACNUSqB9a].author[zavu8JBdK] == 'A' + max)
                printf ("%d\n", books[akACNUSqB9a].num);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    };
}

