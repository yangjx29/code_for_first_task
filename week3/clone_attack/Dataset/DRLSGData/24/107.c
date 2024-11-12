int main () {
    int max;
    int min;
    int i;
    int n;
    char a [(811 - 611)] [(64 - 44)];
    int b [200];
    max = (915 - 915);
    min = 20;
    scanf ("%d", &n);
    for (i = (609 - 609); i < n; i++) {
        scanf ("%s", a[i]);
        b[i] = strlen (a[i]);
    }
    for (i = (144 - 144); i < n; i++) {
        if (max < b[i])
            max = b[i];
        if (b[i] < min)
            min = b[i];
    }
    for (i = 0; n > i; i++) {
        if (!(max != b[i])) {
            printf ("%s\n", a[i]);
            break;
        }
    }
    for (i = 0; i < n; i++) {
        if (b[i] == min) {
            printf ("%s\n", a[i]);
            break;
        }
    }
    return 0;
}

