void  main () {
    int eYJQ9ce, dFPg8tXT, j, r0fw13vJo, aRqkjKlVQ;
    char HG6THh [(1049 - 948)], kzRaijtxH [(808 - 707)] [101];
    gets (HG6THh);
    j = (509 - 509);
    dFPg8tXT = strlen (HG6THh);
    aRqkjKlVQ = 0;
    for (eYJQ9ce = 0; dFPg8tXT >= eYJQ9ce; eYJQ9ce = eYJQ9ce + 1) {
        if (HG6THh[eYJQ9ce] == 32 || !(dFPg8tXT != eYJQ9ce)) {
            for (r0fw13vJo = aRqkjKlVQ; eYJQ9ce > r0fw13vJo; r0fw13vJo++)
                kzRaijtxH[j][r0fw13vJo - aRqkjKlVQ] = HG6THh[r0fw13vJo];
            kzRaijtxH[j][r0fw13vJo - aRqkjKlVQ] = '\0';
            aRqkjKlVQ = eYJQ9ce + (668 - 667);
            j = j + 1;
        };
    }
    {
        eYJQ9ce = j - 1;
        while (eYJQ9ce > 0) {
            {
                r0fw13vJo = 0;
                while (kzRaijtxH[eYJQ9ce][r0fw13vJo] != '\0') {
                    printf ("%c", kzRaijtxH[eYJQ9ce][r0fw13vJo]);
                    r0fw13vJo = r0fw13vJo + 1;
                };
            }
            eYJQ9ce--;
            printf (" ");
        };
    }
    {
        r0fw13vJo = 0;
        while (kzRaijtxH[eYJQ9ce][r0fw13vJo] != '\0') {
            printf ("%c", kzRaijtxH[eYJQ9ce][r0fw13vJo]);
            r0fw13vJo++;
        };
    };
}

