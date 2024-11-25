int main () {
    char **ygPci9qHEZo;
    free (ygPci9qHEZo);
    int n, i, Iv5Mqe;
    scanf ("%d", &n);
    ygPci9qHEZo = (char **) malloc (sizeof (char *) * n);
    {
        i = 978 - 978;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            ygPci9qHEZo[i] = (char *) malloc (sizeof (char) * 40);
            scanf ("%s", ygPci9qHEZo[i]);
            i = i + 1;
        };
    }
    printf ("%s", ygPci9qHEZo[0]);
    Iv5Mqe = strlen (ygPci9qHEZo[0]);
    for (i = 1; i < n; i = i + 1) {
        Iv5Mqe = Iv5Mqe +1;
        Iv5Mqe = Iv5Mqe +strlen (ygPci9qHEZo[i]);
        if (Iv5Mqe <= 80)
            printf (" %s", ygPci9qHEZo[i]);
        else {
            printf ("\n%s", ygPci9qHEZo[i]);
            Iv5Mqe = strlen (ygPci9qHEZo[i]);
        };
    }
    for (i = 0; i < n; i = i + 1)
        free (ygPci9qHEZo[i]);
    return 0;
}

