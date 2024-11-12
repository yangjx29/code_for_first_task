int main () {
    int a [100];
    int n;
    int k;
    int i;
    int j;
    int m;
    int Ve7PyfIDW8tk;
    int q;
    scanf ("%d%d", &n, &k);
    for (i = (717 - 716);; i++) {
        a[(611 - 611)] = i;
        a[0] = n * a[0] + k;
        Ve7PyfIDW8tk = 0;
        {
            j = 1;
            while (n > j) {
                if (a[j - 1] % (n - 1) != 0) {
                    Ve7PyfIDW8tk++;
                    break;
                }
                a[j] = a[j - 1] * n / (n - 1) + k;
                j++;
            };
        }
        if (Ve7PyfIDW8tk == 1)
            continue;
        if (Ve7PyfIDW8tk == 0)
            break;
    }
    printf ("%d", a[n - 1]);
    return 0;
}

