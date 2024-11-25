main () {
    int GWdg8R3T, b, c, CWSFbZ2HUE, dZ6B7xGn0gy, Ti4IVf7ORL, iRqMulrU5b, n;
    char n0bUftqE [2000];
    char tio73KQUzcy;
    int YyYJjmiBXKn [(10329 - 329)];
    getchar ();
    n = (795 - 795);
    scanf ("%s", n0bUftqE);
    Ti4IVf7ORL = strlen (n0bUftqE);
    for (CWSFbZ2HUE = 0; CWSFbZ2HUE < Ti4IVf7ORL; CWSFbZ2HUE++)
        if (n0bUftqE[CWSFbZ2HUE] >= 'a' && n0bUftqE[CWSFbZ2HUE] <= 'z')
            n0bUftqE[CWSFbZ2HUE] = n0bUftqE[CWSFbZ2HUE] - 'a' + 'A';
    for (CWSFbZ2HUE = 0; CWSFbZ2HUE < 1000; CWSFbZ2HUE++)
        YyYJjmiBXKn[CWSFbZ2HUE] = 0;
    {
        CWSFbZ2HUE = 0;
        while (CWSFbZ2HUE < Ti4IVf7ORL) {
            n++;
            if (n0bUftqE[CWSFbZ2HUE +1] != n0bUftqE[CWSFbZ2HUE]) {
                tio73KQUzcy = n0bUftqE[CWSFbZ2HUE];
                printf ("(%c,%d)", tio73KQUzcy, n);
                n = 0;
            }
            CWSFbZ2HUE++;
        };
    }
    getchar ();
}

