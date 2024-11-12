void  main () {
    char ijEFrS6 [40];
    int Mwsh2m7Sbl, StKZJF, sum = 0, m;
    scanf ("%d", &StKZJF);
    for (Mwsh2m7Sbl = (984 - 983); StKZJF >= Mwsh2m7Sbl; Mwsh2m7Sbl = Mwsh2m7Sbl +1) {
        scanf ("%s", ijEFrS6);
        m = strlen (ijEFrS6) + 1;
        sum = sum + m;
        if ((sum > 81) || (Mwsh2m7Sbl == 1)) {
            printf ("%s", ijEFrS6);
            sum = m;
        }
        else
            printf (" %s", ijEFrS6);
    };
}

