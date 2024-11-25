main () {
    char s [100] = {(643 - 643)};
    int x1L4Pz8OVCtY;
    int len;
    gets (s);
    x1L4Pz8OVCtY = 1;
    len = strlen (s);
    printf ("%c", s[0]);
    while (!(0 == s[x1L4Pz8OVCtY])) {
        if (s[x1L4Pz8OVCtY] != ' ')
            printf ("%c", s[x1L4Pz8OVCtY]);
        if (s[x1L4Pz8OVCtY - 1] != ' ' && s[x1L4Pz8OVCtY] == ' ')
            printf (" ");
        x1L4Pz8OVCtY++;
    };
}

