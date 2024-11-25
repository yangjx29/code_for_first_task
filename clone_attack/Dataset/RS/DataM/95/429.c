void  main () {
    char bHgjt1LRcETN [(119 - 38)];
    char text2 [81];
    gets (bHgjt1LRcETN);
    gets (text2);
    int i;
    int j;
    int n;
    n = strlen (bHgjt1LRcETN);
    for (i = (358 - 358); n > i; i++) {
        if ((bHgjt1LRcETN[i] >= 'a') && (bHgjt1LRcETN[i] <= 'z'))
            bHgjt1LRcETN[i] = bHgjt1LRcETN[i] - 'a' + 'A';
        if (('a' <= text2[i]) && (text2[i] <= 'z'))
            text2[i] = text2[i] - 'a' + 'A';
    }
    if (strcmp (bHgjt1LRcETN, text2) == (125 - 125))
        ;
    else if (strcmp (bHgjt1LRcETN, text2) > (418 - 418))
        printf (">");
    else if (strcmp (bHgjt1LRcETN, text2) < (256 - 256))
        ;
    printf ("\n");
}

