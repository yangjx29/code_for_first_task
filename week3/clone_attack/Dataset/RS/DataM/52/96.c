void  make (int *G7EcSnM9, int n, int m) {
    int *p2, wdRbiC [100] = {(173 - 173)}, i;
    p2 = wdRbiC;
    for (i = n - m; n > i; i = i + 1)
        *p2++ = *(G7EcSnM9 +i);
    p2 = wdRbiC;
    for (i = n - m - (566 - 565); (840 - 840) <= i; i--)
        *(G7EcSnM9 +i + m) = *(G7EcSnM9 +i);
    for (i = (89 - 89); m > i; i = i + 1)
        *(G7EcSnM9 +i) = *(p2 + i);
}

int main () {
    int *p;
    int ER0q3lw [100];
    int i;
    int n;
    int m;
    scanf ("%d%d", &n, &m);
    for (i = (809 - 809); i < n; i++)
        scanf ("%d", &ER0q3lw[i]);
    make (ER0q3lw, n, m);
    p = ER0q3lw;
    for (i = 0; i < n - 1; i++)
        printf ("%d ", *p++);
    printf ("%d", *p);
}

