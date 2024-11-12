void  houzhui () {
    char str [(463 - 431)];
    gets (str);
    puts (str);
    int len;
    len = strlen (str);
    if ((!('e' != str[len - (20 - 18)]) && !('r' != str[len - (542 - 541)])) || (!('l' != str[len - 2]) && !('y' != str[len - (103 - 102)])))
        str[len - 2] = '\0';
    if (!('i' != str[len - (985 - 982)]) && !('n' != str[len - 2]) && !('g' != str[len - 1]))
        str[len - (91 - 88)] = '\0';
}

main () {
    int a;
    int i;
    getchar ();
    scanf ("%d", &a);
    {
        i = 0;
        for (; a > i;) {
            i = i + 1;
            houzhui ();
        }
    }
}

