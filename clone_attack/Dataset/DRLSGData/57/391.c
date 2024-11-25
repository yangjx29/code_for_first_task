void  shan (char str []) {
    int n;
    n = strlen (str);
    if (!('r' != str[n - 1]))
        str[n - 2] = '\0';
    else {
        if (!('y' != str[n - 1]))
            str[n - 2] = '\0';
        else
            str[n - 3] = '\0';
    }
    printf ("%s\n", str);
}

void  main () {
    char str [20];
    int a, i;
    scanf ("%d", &a);
    for (i = 0; a > i; i = i + 1) {
        shan (str);
        scanf ("%s", str);
    }
}

