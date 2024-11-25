void  main () {
    char wcgsKik5W2J [101], BQzuBt7KoCA [101] = {'\0'}, *pca, *lX2vgHZxkd;
    gets (wcgsKik5W2J);
    int uNPjp8ki;
    int pRuJlGmi;
    uNPjp8ki = strlen (wcgsKik5W2J);
    if (uNPjp8ki >= 2 && uNPjp8ki <= 100) {
        for (pca = wcgsKik5W2J, lX2vgHZxkd = wcgsKik5W2J + 1, pRuJlGmi = 0; pca < (wcgsKik5W2J + uNPjp8ki - 1); pca++, lX2vgHZxkd = lX2vgHZxkd + 1, pRuJlGmi = pRuJlGmi + 1)
            BQzuBt7KoCA[pRuJlGmi] = *pca + *lX2vgHZxkd;
        BQzuBt7KoCA[uNPjp8ki - 1] = wcgsKik5W2J[0] + wcgsKik5W2J[uNPjp8ki - 1];
        printf ("%s\n", BQzuBt7KoCA);
    };
}

