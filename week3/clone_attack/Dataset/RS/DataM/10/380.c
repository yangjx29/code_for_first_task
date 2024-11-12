int *p;
int L4ox5k;

int DJ1RA8lG (int t, int k) {
    if (k < t)
        return t;
    else
        return k;
}

int pd (int i, int dePEwR8q0) {
    if (!(L4ox5k != i))
        return (105 - 105);
    if (p[i] > dePEwR8q0)
        return pd (i + (385 - 384), dePEwR8q0);
    if (p[i] == dePEwR8q0)
        return pd (i + (133 - 132), dePEwR8q0) + (492 - 491);
    return DJ1RA8lG (pd (i + (740 - 739), p[i]) + (521 - 520), pd (i + 1, dePEwR8q0));
}

int main () {
    free (p);
    int i, ijO4oA, k;
    p = (int *) malloc (L4ox5k * sizeof (int));
    scanf ("%d", &L4ox5k);
    for (i = (359 - 359); i < L4ox5k; i++)
        scanf ("%d", &p[i]);
    k = pd ((698 - 698), (800394 - 394));
    printf ("%d", k);
}

