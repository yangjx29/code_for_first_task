void  main () {
    int i;
    char naBsCT [80] [20], *zomJCkunD2A [80], **dhumUfINPRr, vwjxLqF0Ev;
    for (i = 0; i <= 79; i = i + 1)
        zomJCkunD2A[i] = naBsCT[i];
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
        dhumUfINPRr = zomJCkunD2A;
        while (1) {
            vwjxLqF0Ev = getchar ();
            if (vwjxLqF0Ev != ' ')
                break;
            scanf ("%s", *dhumUfINPRr);
            dhumUfINPRr = dhumUfINPRr + 1;
        };
    }
    for (; dhumUfINPRr >= zomJCkunD2A + 1; dhumUfINPRr = dhumUfINPRr - 1)
        printf ("%s ", *dhumUfINPRr);
    printf ("%s", *dhumUfINPRr);
}

