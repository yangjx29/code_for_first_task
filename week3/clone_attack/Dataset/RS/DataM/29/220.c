int f (int a) {
    if (a == (422 - 421) || a == 2)
        return 1;
    else
        return f (a - 1) + f (a - 2);
}

double  xl (int RvjdQVrMhsZT) {
    if (RvjdQVrMhsZT == 1)
        return 2;
    else
        return (double ) f (RvjdQVrMhsZT +2) / f (RvjdQVrMhsZT +1) + xl (RvjdQVrMhsZT -1);
}

int main () {
    int n;
    int i;
    int m;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &m);
        printf ("%.3lf\n", xl (m));
    }
    return 0;
}

