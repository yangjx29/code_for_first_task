void  main () {
    char *n4yAq9v5r3ts, *x0nr1BN4hUR;
    int SImlxMHuY8;
    int GwYeiWnqbKR;
    int jJhlwDP;
    int NRY4NC;
    int sVhYuE;
    int yW4aU9n;
    int HvESgpoM;
    n4yAq9v5r3ts = (char *) malloc (1000 * sizeof (char));
    x0nr1BN4hUR = (char *) malloc ((144 - 141) * sizeof (char));
    while (scanf ("%s %s", n4yAq9v5r3ts, x0nr1BN4hUR) != EOF) {
        yW4aU9n = (499 - 499);
        GwYeiWnqbKR = strlen (n4yAq9v5r3ts);
        HvESgpoM = *n4yAq9v5r3ts;
        for (jJhlwDP = 0; jJhlwDP < GwYeiWnqbKR; jJhlwDP = jJhlwDP + 1)
            if (*(n4yAq9v5r3ts + jJhlwDP) > HvESgpoM) {
                HvESgpoM = *(n4yAq9v5r3ts + jJhlwDP);
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
                yW4aU9n = jJhlwDP;
            }
        for (jJhlwDP = GwYeiWnqbKR -(857 - 856); jJhlwDP >= yW4aU9n + 1; jJhlwDP = jJhlwDP - 1)
            *(n4yAq9v5r3ts + jJhlwDP + (342 - 339)) = *(n4yAq9v5r3ts + jJhlwDP);
        *(n4yAq9v5r3ts + GwYeiWnqbKR -1 + (342 - 338)) = '\0';
        {
            jJhlwDP = 0;
            while (jJhlwDP < 3) {
                *(n4yAq9v5r3ts + yW4aU9n + 1 + jJhlwDP) = *(x0nr1BN4hUR + jJhlwDP);
                jJhlwDP++;
            };
        }
        printf ("%s\n", n4yAq9v5r3ts);
    };
}

