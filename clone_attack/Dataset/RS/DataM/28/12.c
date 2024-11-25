int main () {
    int i;
    i = 0;
    char tJc4hTmI5jp [300] [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%s", tJc4hTmI5jp[i]);
    printf ("%d", strlen (tJc4hTmI5jp[i]));
    for (i = 1;; i = i + 1) {
        if (scanf ("%s", tJc4hTmI5jp[i]) == EOF)
            break;
        printf (",%d", strlen (tJc4hTmI5jp[i]));
    };
}

