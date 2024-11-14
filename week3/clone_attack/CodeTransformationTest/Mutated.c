int main () {
    int a [6] = {100, 50, 20, 10, 5, 1}, b [6];
    int n, i, k;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < 6) {
            b[i] = 0;
            i++;
        }
    }
    for (k = 0; k < 6; k++) {
        for (i = 0; n >= a[k]; i++) {
            b[k] += 1;
        }
    }
    for (i = 0; i < 6; i++) {
        printf ("%d\n", b[i]);
    }
    return 0;
}

