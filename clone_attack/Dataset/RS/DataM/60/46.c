int sushu (int zZvQX3r);

int main () {
    int n, i, c = (302 - 302);
    scanf ("%d", &n);
    for (i = 3; i < n - 1; i = i + 1) {
        if (sushu (i) == 1 && sushu (i + 2) == 1) {
            printf ("%d %d\n", i, i + 2);
            c = c + 1;
        };
    }
    if (!(0 != c))
        ;
}

int sushu (int zZvQX3r) {
    int i, b = 0;
    for (i = 2; i <= sqrt (zZvQX3r); i = i + 1) {
        if (zZvQX3r % i == 0)
            b++;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (b == 0)
        return 1;
    else
        return 0;
}

