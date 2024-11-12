int main () {
    int CPDu0QeH9p;
    int x;
    char vB2T0UF3Z [(597 - 92)] = {(270 - 270)};
    char c [(1051 - 546)] [(22 - 17)] = {(453 - 453)};
    int a [(650 - 145)] = {(267 - 267)};
    int xp17wq9H65, fMet7ycOKRn, odnxhqZmz = (888 - 888);
    int k;
    int kK8MBPYI04JW;
    gets (vB2T0UF3Z);
    x = strlen (vB2T0UF3Z);
    scanf ("%d\n", &xp17wq9H65);
    {
        CPDu0QeH9p = 516 - 516;
        while (CPDu0QeH9p <= x - xp17wq9H65) {
            for (kK8MBPYI04JW = (539 - 539); kK8MBPYI04JW < xp17wq9H65; kK8MBPYI04JW++) {
                c[CPDu0QeH9p][kK8MBPYI04JW] = vB2T0UF3Z[CPDu0QeH9p +kK8MBPYI04JW];
                a[CPDu0QeH9p] = (229 - 228);
            }
            CPDu0QeH9p++;
        }
    }
    for (CPDu0QeH9p = 0; CPDu0QeH9p <= x - xp17wq9H65 + 1; CPDu0QeH9p++) {
        for (kK8MBPYI04JW = CPDu0QeH9p +1; kK8MBPYI04JW < x - xp17wq9H65 + 1; kK8MBPYI04JW++) {
            if ((a[CPDu0QeH9p] != 0) && (a[kK8MBPYI04JW] != 0)) {
                fMet7ycOKRn = strcmp (c[CPDu0QeH9p], c[kK8MBPYI04JW]);
                if (fMet7ycOKRn == 0) {
                    a[CPDu0QeH9p]++;
                    a[kK8MBPYI04JW] = 0;
                    if (a[CPDu0QeH9p] > odnxhqZmz) {
                        odnxhqZmz = a[CPDu0QeH9p];
                    }
                }
            }
        }
    }
    if (odnxhqZmz <= 1) {
    }
    else {
        printf ("%d\n", odnxhqZmz);
        for (k = 0; k <= x - xp17wq9H65; k++) {
            if (a[k] == odnxhqZmz) {
                puts (c [k]);
            }
        }
    }
    return 0;
}

