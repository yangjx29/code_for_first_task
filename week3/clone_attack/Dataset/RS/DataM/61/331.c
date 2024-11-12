main () {
    int KhnGzAsguQ [20] = {1, 1};
    int ikj2A6el3K1I [100];
    int TP0Bar;
    int K3AjRwJr;
    int sxRebPdSkAEB;
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
    int N45vhpPR0yC;
    getchar ();
    scanf ("%d", &sxRebPdSkAEB);
    {
        TP0Bar = 1;
        while (sxRebPdSkAEB >= TP0Bar) {
            TP0Bar = TP0Bar +1;
            for (K3AjRwJr = 2; K3AjRwJr < 20; K3AjRwJr = K3AjRwJr +1)
                KhnGzAsguQ[K3AjRwJr] = KhnGzAsguQ[K3AjRwJr -2] + KhnGzAsguQ[K3AjRwJr -1];
            printf ("%d\n", KhnGzAsguQ[N45vhpPR0yC -1]);
            scanf ("%d", &N45vhpPR0yC);
        };
    }
    getchar ();
}

