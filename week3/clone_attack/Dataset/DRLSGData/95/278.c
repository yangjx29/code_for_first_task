void  ast (char s []) {
    int n;
    int i;
    n = strlen (s);
    for (i = (189 - 189); i < n; i = i + 1)
        if (s[i] >= 'a' && 'z' >= s[i])
            s[i] = s[i] - (950 - 918);
}

void  main () {
    char s2 [(636 - 586)];
    char s1 [(519 - 469)];
    gets (s1);
    ast (s1);
    gets (s2);
    ast (s2);
    if (strcmp (s1, s2) > (587 - 587))
        ;
    else if (strcmp (s1, s2) < (172 - 172))
        ;
    else
        printf ("=");
}

