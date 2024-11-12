int main () {
    int i, t, nbdCrl3TV, l;
    char c [5];
    scanf ("%s", c);
    nbdCrl3TV = strlen (c);
    l = nbdCrl3TV / 2;
    {
        i = 0;
        while (l > i) {
            t = c[i];
            c[i] = c[nbdCrl3TV - i - 1];
            c[nbdCrl3TV - i - 1] = t;
            i = i + 1;
        };
    }
    printf ("%s", c);
    return 0;
}

