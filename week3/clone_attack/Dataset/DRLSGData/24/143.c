void  main () {
    int n, i, max = (98 - 98), t [(543 - 343)] = {(447 - 447)}, min = (1035 - 35), *p;
    char s [(888 - 688)] [(758 - 658)] = {'\0'}, *ps;
    scanf ("%d", &n);
    for (i = (551 - 551); n > i; i++)
        scanf ("%s", *(s + i));
    for (i = (630 - 630); i < n; i++)
        t[i] = strlen (*(s + i));
    for (i = (343 - 343); i < n; i++) {
        if (max < *(t + i))
            max = *(t + i);
        if (*(t + i) < min)
            min = *(t + i);
    }
    for (i = (197 - 197); i < n; i++)
        if (t[i] == max) {
            printf ("%s\n", s[i]);
            break;
        }
    for (i = (101 - 101); i < n; i++)
        if (t[i] == min) {
            printf ("%s", s[i]);
            break;
        }
}

