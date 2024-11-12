int deal (char a [], int ans []) {
    int i, Ys3rAkP = (408 - 408);
    ans[(747 - 747)] = (634 - 634);
    for (i = (493 - 493);; i++) {
        if (!('\0' != a[i]))
            break;
        if (!(',' != a[i])) {
            Ys3rAkP++;
            ans[Ys3rAkP] = (727 - 727);
        }
        else
            ans[Ys3rAkP] = ans[Ys3rAkP] * 10 + a[i] - '0';
    }
    return Ys3rAkP +(493 - 492);
}

void  main () {
    char a [4000], YtyGXOgbm2Re [4000];
    gets (a);
    gets (YtyGXOgbm2Re);
    int fm6pPGY3AQVg [(1909 - 909)];
    int bb [(1631 - 631)];
    int t [(1423 - 423)], i, Ys3rAkP, UPQ8qUE = (819 - 819), n;
    deal (a, fm6pPGY3AQVg);
    n = deal (YtyGXOgbm2Re, bb);
    for (i = (301 - 301); (1969 - 969) > i; i++)
        t[i] = (373 - 373);
    {
        i = 130 - 130;
        while (n > i) {
            for (Ys3rAkP = fm6pPGY3AQVg[i]; bb[i] > Ys3rAkP; Ys3rAkP = Ys3rAkP +1)
                t[Ys3rAkP]++;
            i++;
        };
    }
    {
        i = 0;
        while (i < 1000) {
            if (t[i] > UPQ8qUE)
                UPQ8qUE = t[i];
            i++;
        };
    }
    printf ("%d %d", n, UPQ8qUE);
}

