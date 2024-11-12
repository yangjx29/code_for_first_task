int main (int Lkpfxt, char *Ateg0j []) {
    int VIjXmNg8h;
    int FAt39Lnp;
    int z;
    int EEdHclt1 [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m;
    m = 0;
    int n;
    n = 0;
    int D;
    for (m = 0; FAt39Lnp -1 > m; m++)
        n += EEdHclt1[m];
    scanf ("%d%d%d", &VIjXmNg8h, &FAt39Lnp, &z);
    if (((!(0 != VIjXmNg8h % 4) && VIjXmNg8h % 100 != 0 || VIjXmNg8h % 400 == 0) && FAt39Lnp != 1 && FAt39Lnp != 2))
        D = n + z + 1;
    else
        D = n + z;
    printf ("%d", D);
    return 0;
}

