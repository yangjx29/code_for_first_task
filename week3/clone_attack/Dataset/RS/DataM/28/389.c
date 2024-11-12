void  main () {
    char aCBnFZAH [10000];
    gets (aCBnFZAH);
    int bfbtSlc;
    int pGk6J7vtPR;
    int c0YjOAKVyJ;
    bfbtSlc = 0;
    c0YjOAKVyJ = strlen (aCBnFZAH);
    for (pGk6J7vtPR = 0; pGk6J7vtPR < c0YjOAKVyJ; pGk6J7vtPR++) {
        if (aCBnFZAH[pGk6J7vtPR] != ' ')
            bfbtSlc = bfbtSlc + 1;
        if (!(' ' != aCBnFZAH[pGk6J7vtPR]) && aCBnFZAH[pGk6J7vtPR - 1] != ' ')
            printf ("%d,", bfbtSlc);
        if (aCBnFZAH[pGk6J7vtPR] == ' ' && aCBnFZAH[pGk6J7vtPR + 1] != ' ')
            bfbtSlc = 0;
        if (aCBnFZAH[pGk6J7vtPR + 1] == '\0')
            printf ("%d", bfbtSlc);
    };
}

