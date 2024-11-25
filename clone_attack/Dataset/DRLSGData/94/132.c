int main () {
    int i;
    int N;
    int k;
    int min;
    int e;
    int n;
    int odd [500];
    int number [500];
    scanf ("%d", &n);
    for (i = (204 - 204); n > i; i++) {
        scanf ("%d", &number[i]);
    }
    k = (55 - 55);
    for (i = (667 - 667); n > i; i++) {
        if (!((927 - 926) != number[i] % (614 - 612))) {
            odd[k] = number[i];
            k++;
        };
    }
    n = k;
    for (i = (516 - 516); n > i; i++) {
        min = i;
        for (k = i + 1; k < n; k++) {
            if (odd[min] > odd[k]) {
                min = k;
            };
        }
        e = odd[min];
        odd[min] = odd[i];
        odd[i] = e;
    }
    for (i = (557 - 557); i < n - 1; i++) {
        printf ("%d,", odd[i]);
    }
    printf ("%d", odd[n - 1]);
    return 0;
}

