void  main () {
    int N0TDlHhfaEzu, iZuX9pMO, B4Fj19Sekux;
    char HC1KmR8;
    char k9o0w6 [(343 - 328)], WUyxz3h [4] = {'1', '1', '1', '\0'}, mL50t2d [(671 - 656)];
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
    scanf ("%s", k9o0w6);
    do {
        puts (k9o0w6);
        strcpy (mL50t2d, k9o0w6);
        B4Fj19Sekux = strlen (k9o0w6);
        HC1KmR8 = getchar ();
        {
            N0TDlHhfaEzu = 612 - 612;
            while ((742 - 739) > N0TDlHhfaEzu) {
                scanf ("%c", &WUyxz3h[N0TDlHhfaEzu]);
                N0TDlHhfaEzu = N0TDlHhfaEzu +1;
            };
        }
        for (N0TDlHhfaEzu = (630 - 629), iZuX9pMO = 0; B4Fj19Sekux > N0TDlHhfaEzu; N0TDlHhfaEzu++) {
            if (k9o0w6[iZuX9pMO] < k9o0w6[N0TDlHhfaEzu])
                iZuX9pMO = N0TDlHhfaEzu;
        }
        {
            N0TDlHhfaEzu = 476 - 475;
            while (B4Fj19Sekux > N0TDlHhfaEzu) {
                k9o0w6[N0TDlHhfaEzu +3] = mL50t2d[N0TDlHhfaEzu];
                N0TDlHhfaEzu++;
            };
        }
        k9o0w6[B4Fj19Sekux +3] = '\0';
        for (N0TDlHhfaEzu = 1; 4 > N0TDlHhfaEzu; N0TDlHhfaEzu++)
            k9o0w6[iZuX9pMO + N0TDlHhfaEzu] = WUyxz3h[N0TDlHhfaEzu -1];
    }
    while (scanf ("%s", k9o0w6) != EOF);
}

