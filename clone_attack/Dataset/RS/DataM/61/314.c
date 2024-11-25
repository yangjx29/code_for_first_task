int f (int jP0BmT) {
    if (jP0BmT == (828 - 827) || jP0BmT == 2)
        return (698 - 697);
    else
        return f (jP0BmT - 1) + f (jP0BmT - 2);
}

int main () {
    int S1EuhpwP, jP0BmT, a [10000], X3NkCr0c [(1079 - 79)];
    scanf ("%d", &jP0BmT);
    {
        S1EuhpwP = 0;
        while (S1EuhpwP < jP0BmT) {
            scanf ("%d", &a[S1EuhpwP]);
            X3NkCr0c[S1EuhpwP] = f (a[S1EuhpwP]);
            printf ("%d\n", X3NkCr0c[S1EuhpwP]);
            S1EuhpwP++;
        };
    };
}

