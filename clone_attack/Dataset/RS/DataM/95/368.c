int main () {
    char s1 [max + 1];
    char s2 [max + 1];
    int i;
    int cmp;
    gets (s1);
    gets (s2);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = 0; s1[i]; i++) {
        if (s1[i] >= 'a' && 'z' >= s1[i])
            s1[i] -= 'a' - 'A';
    }
    for (i = 0; s2[i]; i++) {
        if (s2[i] >= 'a' && s2[i] <= 'z')
            s2[i] -= 'a' - 'A';
    }
    cmp = strcmp (s1, s2);
    if (cmp > 0)
        printf (">");
    if (cmp == 0)
        ;
    if (cmp < 0)
        printf ("<");
    return 0;
}

