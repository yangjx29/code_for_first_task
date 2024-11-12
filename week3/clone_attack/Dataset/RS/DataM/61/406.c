int f (int n) {
    int i;
    int A [(922 - 902)];
    A[(417 - 416)] = (448 - 447);
    A[2] = (385 - 384);
    for (i = (266 - 263); n >= i; i = i + 1) {
        A[i] = A[i - 1] + A[i - 2];
    }
    return A[n];
}

int main () {
    int n, i, tLbeJXUkg, s;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &tLbeJXUkg);
        s = f (tLbeJXUkg);
        printf ("%d\n", s);
    }
    return 0;
}

