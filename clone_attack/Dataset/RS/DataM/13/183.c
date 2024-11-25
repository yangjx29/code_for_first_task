void  main () {
    unsigned  int xWf5IeVGKumg;
    int i, vAS2bR7w, yax0bg [20000], TXo9Qk2JN;
    scanf ("%u", &xWf5IeVGKumg);
    {
        i = 0;
        while (i <= xWf5IeVGKumg - 1) {
            scanf ("%d", &yax0bg[i]);
            i++;
        };
    }
    printf ("%d", yax0bg[0]);
    {
        i = 1;
        while (i < xWf5IeVGKumg) {
            TXo9Qk2JN = 0;
            {
                vAS2bR7w = 0;
                while (vAS2bR7w < i) {
                    if (yax0bg[i] == yax0bg[vAS2bR7w]) {
                        TXo9Qk2JN = 1;
                        break;
                    }
                    vAS2bR7w++;
                };
            }
            if (TXo9Qk2JN == 0)
                printf (" %d", yax0bg[i]);
            i++;
        };
    }
    printf ("\n");
}

