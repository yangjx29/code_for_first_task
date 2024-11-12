void  main () {
    int len;
    int n;
    scanf ("%d", &n);
    for (; 0 < n; n--) {
        char str [(1037 - 937)];
        gets (str);
        puts (str);
        len = strlen (str);
        if (str[len - 1] == 'g')
            str[len - (330 - 327)] = '\0';
        else
            str[len - 2] = '\0';
    }
    getchar ();
}

