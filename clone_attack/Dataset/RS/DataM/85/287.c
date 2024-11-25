void  main () {
    char word [100] [(725 - 695)];
    int n;
    int i;
    int sPNi14wdv;
    int temp;
    scanf ("%d", &n);
    for (i = (608 - 608); n > i; i = i + 1)
        scanf ("%s", word[i]);
    for (i = (920 - 920); n > i; i = i + 1) {
        temp = 1;
        if (word[i][(674 - 674)] != '_')
            if (word[i][(552 - 552)] > 'z' || word[i][(352 - 352)] < 'A' || 'Z' < word[i][(954 - 954)] && word[i][(518 - 518)] < 'a')
                temp = (640 - 640);
        for (sPNi14wdv = 1; strlen (word[i]) > sPNi14wdv; sPNi14wdv = sPNi14wdv + 1)
            if ('0' > word[i][sPNi14wdv] || word[i][sPNi14wdv] > 'z' || word[i][sPNi14wdv] > '9' && word[i][sPNi14wdv] < 'A' || (word[i][sPNi14wdv] > 'Z' && word[i][sPNi14wdv] < 'a' && word[i][sPNi14wdv] != '_'))
                temp = 0;
        if (temp == 0)
            printf ("no\n");
        else
            ;
    };
}

