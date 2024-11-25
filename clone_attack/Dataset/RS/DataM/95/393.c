void  main () {
    int giXARr, csqU7fvr2ga;
    char BYxAcOG [40];
    char D3HSme7qbao [40];
    gets (BYxAcOG);
    gets (D3HSme7qbao);
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
    for (giXARr = (780 - 780); BYxAcOG[giXARr] != '\0'; giXARr = giXARr + 1) {
        if (BYxAcOG[giXARr] >= 'A' && BYxAcOG[giXARr] <= 'Z')
            BYxAcOG[giXARr] = BYxAcOG[giXARr] - 'A' + 'a';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        giXARr = 0;
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
        while (D3HSme7qbao[giXARr] != '\0') {
            if (D3HSme7qbao[giXARr] >= 'A' && D3HSme7qbao[giXARr] <= 'Z')
                D3HSme7qbao[giXARr] = D3HSme7qbao[giXARr] - 'A' + 'a';
            giXARr = giXARr + 1;
        };
    }
    csqU7fvr2ga = 0;
    if (BYxAcOG[csqU7fvr2ga] > D3HSme7qbao[csqU7fvr2ga])
        ;
    if (BYxAcOG[csqU7fvr2ga] < D3HSme7qbao[csqU7fvr2ga])
        ;
    while ((BYxAcOG[csqU7fvr2ga] == D3HSme7qbao[csqU7fvr2ga]) && (BYxAcOG[csqU7fvr2ga] != '\0') && (D3HSme7qbao[csqU7fvr2ga] != '\0')) {
        csqU7fvr2ga = csqU7fvr2ga + 1;
        if (BYxAcOG[csqU7fvr2ga] == '\0' && D3HSme7qbao[csqU7fvr2ga] == '\0')
            ;
        if (BYxAcOG[csqU7fvr2ga] > D3HSme7qbao[csqU7fvr2ga])
            printf (">");
        if (BYxAcOG[csqU7fvr2ga] < D3HSme7qbao[csqU7fvr2ga])
            printf ("<");
    };
}

