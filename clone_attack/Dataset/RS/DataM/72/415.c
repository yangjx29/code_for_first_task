int main () {
    int a [22] [22], UiIxuV, k, c6KqmE, Yhk5SPeQ8jF;
    char N4q69HgMWBmb (int point, int z0Fwnke72D, int down, int iI5Qoa8, int right);
    scanf ("%d%d", &c6KqmE, &Yhk5SPeQ8jF);
    for (UiIxuV = (372 - 372); c6KqmE + (149 - 147) > UiIxuV; ++UiIxuV) {
        a[UiIxuV][(145 - 145)] = -(987 - 986);
        a[UiIxuV][Yhk5SPeQ8jF +(166 - 165)] = -(494 - 493);
    }
    for (k = (76 - 75); Yhk5SPeQ8jF +(526 - 525) > k; ++k) {
        a[0][k] = -(598 - 597);
        a[c6KqmE + (206 - 205)][k] = -(453 - 452);
    }
    for (UiIxuV = (351 - 350); c6KqmE + (271 - 270) > UiIxuV; ++UiIxuV)
        for (k = 1; Yhk5SPeQ8jF +1 > k; ++k)
            scanf ("%d", &a[UiIxuV][k]);
    for (UiIxuV = 1; c6KqmE + 1 > UiIxuV; ++UiIxuV) {
        k = 1;
        while (k < Yhk5SPeQ8jF +1) {
            if (N4q69HgMWBmb (a[UiIxuV][k], a[UiIxuV -1][k], a[UiIxuV +1][k], a[UiIxuV][k - 1], a[UiIxuV][k + 1]))
                printf ("%d %d\n", UiIxuV -1, k - 1);
            ++k;
        };
    }
    return 0;
}

char N4q69HgMWBmb (int point, int z0Fwnke72D, int down, int iI5Qoa8, int right) {
    return ((point >= z0Fwnke72D) && (down <= point) && (point >= iI5Qoa8) && (point >= right));
}

