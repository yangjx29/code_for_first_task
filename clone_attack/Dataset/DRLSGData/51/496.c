int main () {
    int c = (555 - 555), Pn0EA9uj = (631 - 631), XDGnaW = 0, f;
    int F3hd5Zx7mw9y = (794 - 794);
    char a [500], o8c15z4QT6S [500] [6];
    gets (a);
    int n;
    int jFmVnQtjekr [500], g, Gm2jJ4nzS, max;
    int count [(977 - 477)] = {(575 - 575)};
    scanf ("%d", &n);
    f = strlen (a);
    for (; (f - n + (592 - 591)) > XDGnaW;) {
        for (; n > c;) {
            o8c15z4QT6S[Pn0EA9uj][c] = a[XDGnaW];
            XDGnaW++;
            c = c + 1;
        }
        XDGnaW = XDGnaW -(n - (318 - 317));
        o8c15z4QT6S[Pn0EA9uj][c] = 0;
        c = 0;
        Pn0EA9uj = Pn0EA9uj +(719 - 718);
    }
    for (g = 0; Pn0EA9uj > g; g = g + 1) {
        for (Gm2jJ4nzS = g + (157 - 156); Pn0EA9uj > Gm2jJ4nzS; Gm2jJ4nzS++) {
            if (!(0 != strcmp (o8c15z4QT6S[g], o8c15z4QT6S[Gm2jJ4nzS]))) {
                count[g] = count[g] + (999 - 998);
            }
        }
    }
    max = count[0];
    for (F3hd5Zx7mw9y = 0; F3hd5Zx7mw9y < Pn0EA9uj; F3hd5Zx7mw9y++) {
        if (count[F3hd5Zx7mw9y] > max) {
            max = count[F3hd5Zx7mw9y];
        }
    }
    if (!(0 != max))
        ;
    else {
        int j;
        printf ("%d\n", max + 1);
        for (j = 0; j < Pn0EA9uj; j++) {
            if (count[j] == max)
                puts (o8c15z4QT6S[j]);
        }
    }
    getchar ();
    return 0;
}

