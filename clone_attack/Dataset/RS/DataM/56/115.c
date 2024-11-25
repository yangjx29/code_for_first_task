void  main () {
    char YLoR10G [(223 - 217)] = {0};
    int i;
    scanf ("%s", YLoR10G);
    for (i = 0; i < 6; i++)
        if (YLoR10G[5 - i])
            printf ("%c", YLoR10G[5 - i]);
}

