void  main () {
    char RwdhcDr4UXQ [(483 - 183)] = {(849 - 849)};
    char *p = RwdhcDr4UXQ;
    int b [(459 - 433)] = {(686 - 686)};
    int oUwGe6QbfP;
    int AUGnL7AQWx0;
    int *W6SgGHUKM;
    gets (p);
    for (p = RwdhcDr4UXQ, AUGnL7AQWx0 = 0, W6SgGHUKM = b; !('\0' == *p); p = p + 1) {
        if (islower (*p)) {
            (*(W6SgGHUKM +*p - 'a')) = (*(W6SgGHUKM +*p - 'a')) + 1;
            AUGnL7AQWx0 = AUGnL7AQWx0 +1;
        };
    }
    if (AUGnL7AQWx0 == 0)
        printf ("No");
    else {
        for (W6SgGHUKM = b; W6SgGHUKM < b + 26; W6SgGHUKM = W6SgGHUKM +1) {
            if (*W6SgGHUKM > 0)
                printf ("%c=%d\n", (W6SgGHUKM -b + 97), *W6SgGHUKM);
        };
    };
}

