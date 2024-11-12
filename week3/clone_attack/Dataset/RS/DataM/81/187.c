void  ox (int dqmPGzFbsg2L [5] [5], int m, int nrKbytsqS2) {
    int BP0DKN7cSVl2, adVBNSi7pXnJ, t [5];
    if (m <= (905 - 901) && m >= 0 && nrKbytsqS2 <= 4 && nrKbytsqS2 >= 0) {
        for (BP0DKN7cSVl2 = 0; BP0DKN7cSVl2 <= 4; BP0DKN7cSVl2 = BP0DKN7cSVl2 +1) {
            t[BP0DKN7cSVl2] = dqmPGzFbsg2L[m][BP0DKN7cSVl2];
            dqmPGzFbsg2L[m][BP0DKN7cSVl2] = dqmPGzFbsg2L[nrKbytsqS2][BP0DKN7cSVl2];
            dqmPGzFbsg2L[nrKbytsqS2][BP0DKN7cSVl2] = t[BP0DKN7cSVl2];
        }
        for (BP0DKN7cSVl2 = 0; BP0DKN7cSVl2 <= 4; BP0DKN7cSVl2++) {
            for (adVBNSi7pXnJ = 0; adVBNSi7pXnJ <= 3; adVBNSi7pXnJ++)
                printf ("%d ", dqmPGzFbsg2L[BP0DKN7cSVl2][adVBNSi7pXnJ]);
            printf ("%d", dqmPGzFbsg2L[BP0DKN7cSVl2][4]);
            printf ("\n");
        };
    }
    else
        ;
}

void  main () {
    int m, nrKbytsqS2, BP0DKN7cSVl2, adVBNSi7pXnJ, dqmPGzFbsg2L [5] [5];
    {
        BP0DKN7cSVl2 = 0;
        while (BP0DKN7cSVl2 <= 4) {
            {
                adVBNSi7pXnJ = 0;
                while (adVBNSi7pXnJ <= 4) {
                    scanf ("%d", &dqmPGzFbsg2L[BP0DKN7cSVl2][adVBNSi7pXnJ]);
                    adVBNSi7pXnJ++;
                };
            }
            BP0DKN7cSVl2++;
        };
    }
    scanf ("%d%d", &m, &nrKbytsqS2);
    ox (dqmPGzFbsg2L, m, nrKbytsqS2);
}

