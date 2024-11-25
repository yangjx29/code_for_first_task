void  IzuHLN (char zcGWAqk9Pzgt [], char UKmszFH3wlp []) {
    int YLe5UyC;
    int cJnoCjz4LAxh;
    int H97aExT;
    int isjyPC4XRdQ;
    int FxXb7AnRKzwH;
    int zLSQihv5;
    int w4GqInht;
    char V1SiP8xG [10] = {0};
    isjyPC4XRdQ = strlen (zcGWAqk9Pzgt);
    FxXb7AnRKzwH = strlen (UKmszFH3wlp);
    w4GqInht = 0;
    for (YLe5UyC = 0; isjyPC4XRdQ - 1 >= YLe5UyC; YLe5UyC = YLe5UyC +1) {
        if (zcGWAqk9Pzgt[w4GqInht] < zcGWAqk9Pzgt[YLe5UyC])
            w4GqInht = YLe5UyC;
    }
    for (YLe5UyC = 0, cJnoCjz4LAxh = w4GqInht + 1; cJnoCjz4LAxh <= isjyPC4XRdQ - 1; YLe5UyC = YLe5UyC +1, cJnoCjz4LAxh = cJnoCjz4LAxh + 1)
        V1SiP8xG[YLe5UyC] = zcGWAqk9Pzgt[cJnoCjz4LAxh];
    zLSQihv5 = strlen (V1SiP8xG);
    for (YLe5UyC = 0, cJnoCjz4LAxh = w4GqInht + 1; YLe5UyC <= FxXb7AnRKzwH; YLe5UyC = YLe5UyC +1, cJnoCjz4LAxh++)
        zcGWAqk9Pzgt[cJnoCjz4LAxh] = UKmszFH3wlp[YLe5UyC];
    for (YLe5UyC = 0, H97aExT = cJnoCjz4LAxh - 1; YLe5UyC <= zLSQihv5 - 1; YLe5UyC = YLe5UyC +1, H97aExT++)
        zcGWAqk9Pzgt[H97aExT] = V1SiP8xG[YLe5UyC];
}

void  main () {
    char zcGWAqk9Pzgt [20] = {0};
    char UKmszFH3wlp [4] = {0};
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
    int Jh5TUPkNI;
    int YLe5UyC;
    while (scanf ("%s%s", zcGWAqk9Pzgt, UKmszFH3wlp) != EOF) {
        IzuHLN (zcGWAqk9Pzgt, UKmszFH3wlp);
        Jh5TUPkNI = strlen (zcGWAqk9Pzgt);
        for (YLe5UyC = 0; YLe5UyC <= Jh5TUPkNI -1; YLe5UyC++)
            printf ("%c", zcGWAqk9Pzgt[YLe5UyC]);
        for (YLe5UyC = 0; YLe5UyC <= 19; YLe5UyC++)
            zcGWAqk9Pzgt[YLe5UyC] = 0;
        for (YLe5UyC = 0; YLe5UyC <= 3; YLe5UyC++)
            UKmszFH3wlp[YLe5UyC] = 0;
        printf ("\n");
    };
}

