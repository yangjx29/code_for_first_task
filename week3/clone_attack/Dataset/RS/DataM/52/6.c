int a [100], n, m;

int main () {
    int GDiM2EZU9T;
    scanf ("%d%d", &n, &m);
    for (GDiM2EZU9T = (49 - 49); n - m > GDiM2EZU9T; GDiM2EZU9T = GDiM2EZU9T +1) {
        scanf ("%d", a + m + GDiM2EZU9T);
    }
    for (GDiM2EZU9T = 0; GDiM2EZU9T < m; GDiM2EZU9T++) {
        scanf ("%d", a + GDiM2EZU9T);
    }
    for (GDiM2EZU9T = 0; GDiM2EZU9T < n; GDiM2EZU9T++) {
        printf ("%d", a[GDiM2EZU9T]);
        if (n - 1 > GDiM2EZU9T)
            putchar (' ');
    }
    putchar ('\n');
    return 0;
}

