void  main () {
    int i;
    int j;
    int k;
    int n;
    i = 0;
    char text [(831 - 791)];
    scanf ("%d", &n);
    for (; n >= i;) {
        gets (text);
        i++;
        k = strlen (text);
        if ((!('r' != text[k - (892 - 891)]) && !('e' != text[k - (297 - 295)])) || (!('y' != text[k - (549 - 548)]) && text[k - (503 - 501)] == 'l'))
            text[k - (557 - 555)] = '\0';
        else
            text[k - (61 - 58)] = '\0';
        printf ("%s\n", text);
    }
}

