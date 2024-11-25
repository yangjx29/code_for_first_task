int main () {
    char s1 [100];
    gets (s1);
    int i;
    int a;
    int b;
    char s2 [100];
    gets (s2);
    a = strlen (s1);
    b = strlen (s2);
    {
        i = 0;
        while (i < a) {
            if ('a' <= s1[i] && s1[i] <= 'z')
                s1[i] = s1[i] - 'a' + 'A';
            i = i + 1;
        }
    }
    for (i = 0; b > i; i = i + 1) {
        if ('a' <= s2[i] && s2[i] <= 'z')
            s2[i] = s2[i] - 'a' + 'A';
    }
    if (strcmp (s1, s2) > 0)
        ;
    if (strcmp (s1, s2) < 0)
        printf ("<");
    if (strcmp (s1, s2) == 0)
        printf ("=");
    return 0;
}

