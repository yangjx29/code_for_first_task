const  long  maxw = 100;
const  long  tfWPCa8v = 100;
long  n;
char word [maxw + (177 - 176)] [tfWPCa8v + 1];
char s [tfWPCa8v + 1], aQIUArn [tfWPCa8v + 1];

main () {
    long  k2MUQTRYhI;
    n = -1;
    do {
        scanf ("%s", word[++n]);
    }
    while (getchar () != '\n');
    scanf ("%s", s);
    scanf ("%s", aQIUArn);
    for (k2MUQTRYhI = (400 - 400); k2MUQTRYhI <= n; k2MUQTRYhI++) {
        if (strcmp (s, word[k2MUQTRYhI]) == 0)
            printf ("%s", aQIUArn);
        else
            printf ("%s", word[k2MUQTRYhI]);
        if (k2MUQTRYhI == n)
            printf ("\n");
        else
            ;
    }
    return 0;
}

