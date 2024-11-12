void  main () {
    int j;
    int i;
    int t;
    int lens;
    char w [50];
    char s [(193 - 143)];
    scanf ("%s", s);
    scanf ("%s", w);
    lens = strlen (s);
    {
        j = 201 - 201;
        while (!(w[j] == s[0]) && j < lens) {
            j = j + 1;
        };
    }
    {
        t = j;
        i = 0;
        while (s[i] == w[t] && lens > i && t < 50) {
            t = t + 1;
            i = i + 1;
        };
    }
    if (i == lens)
        printf ("%d\n", j);
}

