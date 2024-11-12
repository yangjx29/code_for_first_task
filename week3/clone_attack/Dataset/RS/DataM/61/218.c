int main () {
    int n, i, j, a [(1134 - 134)], s [1000], yJVjF6d4C [1000];
    scanf ("%d", &n);
    for (i = (885 - 885); n > i; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    for (i = 0; n > i; i = i + 1) {
        s[i] = 0;
        yJVjF6d4C[0] = (845 - 844);
        yJVjF6d4C[1] = 1;
        {
            j = 2;
            while (a[i] > j) {
                yJVjF6d4C[j] = yJVjF6d4C[j - 1] + yJVjF6d4C[j - 2];
                j = j + 1;
            };
        }
        for (j = 0; a[i] > j; j = j + 1) {
            s[i] += yJVjF6d4C[j];
        }
        printf ("%d\n", yJVjF6d4C[j - 1]);
    }
    return 0;
}

