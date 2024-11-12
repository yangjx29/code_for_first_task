void  main () {
    double  J1B8aAj [20] [2], tg2Gj93VAQwM [20], o8UjxRI;
    int sIWBekw8P, DPH9oxFESvw, kB4a79, Nnv6IFKAGQg;
    scanf ("%d", &kB4a79);
    {
        sIWBekw8P = 0;
        while (kB4a79 > sIWBekw8P) {
            for (DPH9oxFESvw = 0; 2 > DPH9oxFESvw; DPH9oxFESvw = DPH9oxFESvw +1)
                scanf ("%lf", &J1B8aAj[sIWBekw8P][DPH9oxFESvw]);
            sIWBekw8P = sIWBekw8P + 1;
        }
    }
    for (sIWBekw8P = 0; kB4a79 - 1 > sIWBekw8P; sIWBekw8P = sIWBekw8P + 1) {
        double  nixR7AEY [20];
        {
            DPH9oxFESvw = sIWBekw8P + 1;
            while (DPH9oxFESvw < kB4a79) {
                double  CYrJMs = pow (J1B8aAj[sIWBekw8P][0] - J1B8aAj[DPH9oxFESvw][0], 2);
                double  t2 = pow (J1B8aAj[sIWBekw8P][1] - J1B8aAj[DPH9oxFESvw][1], 2);
                nixR7AEY[DPH9oxFESvw -sIWBekw8P - 1] = pow (CYrJMs +t2, 0.5);
                DPH9oxFESvw++;
            }
        }
        tg2Gj93VAQwM[sIWBekw8P] = nixR7AEY[0];
        {
            Nnv6IFKAGQg = 0;
            while (kB4a79 - sIWBekw8P - 1 > Nnv6IFKAGQg) {
                if (nixR7AEY[Nnv6IFKAGQg] > tg2Gj93VAQwM[sIWBekw8P])
                    tg2Gj93VAQwM[sIWBekw8P] = nixR7AEY[Nnv6IFKAGQg];
                Nnv6IFKAGQg = Nnv6IFKAGQg +1;
            }
        }
    }
    o8UjxRI = tg2Gj93VAQwM[0];
    {
        sIWBekw8P = 0;
        while (kB4a79 - 1 > sIWBekw8P) {
            if (tg2Gj93VAQwM[sIWBekw8P] > o8UjxRI)
                o8UjxRI = tg2Gj93VAQwM[sIWBekw8P];
            sIWBekw8P++;
        }
    }
    printf ("%.4lf\n", o8UjxRI);
}

