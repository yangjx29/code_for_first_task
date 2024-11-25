void  main () {
    char s [(727 - 627)];
    char c [(866 - 766)] [100] = {(365 - 365)};
    char a [100];
    char b [100] = {(36 - 36)};
    char ruTYBWIgi9h7 [100] [100];
    char f [100];
    gets (s);
    gets (a);
    gets (b);
    int V4qnzw;
    int l;
    int k;
    int m;
    int i;
    int d [100] = {0};
    int hm1rudje6Y;
    V4qnzw = 0;
    l = 0;
    k = 0;
    m = strlen (s);
    {
        i = 0;
        while (m > i) {
            if (!(32 != s[i]))
                V4qnzw = V4qnzw +1;
            i++;
        };
    }
    {
        i = 0;
        while (i <= V4qnzw) {
            for (hm1rudje6Y = 0; !(32 == s[k]); hm1rudje6Y = hm1rudje6Y + 1) {
                c[i][hm1rudje6Y] = s[k];
                k = k + 1;
            }
            i++;
            if (s[k] == 32)
                k++;
        };
    }
    for (i = 0; i <= V4qnzw; i++)
        if (strcmp (c[i], a) == 0)
            strcpy (ruTYBWIgi9h7[i], b);
        else
            strcpy (ruTYBWIgi9h7[i], c[i]);
    strcpy (f, ruTYBWIgi9h7[0]);
    {
        i = 1;
        while (i <= V4qnzw) {
            strcat (f, " ");
            strcat (f, ruTYBWIgi9h7[i]);
            i++;
        };
    }
    printf ("%s", f);
}

