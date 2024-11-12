int main () {
    int i;
    int j;
    int uxiB1wj4O7FM;
    int KwQHP6cYIi4;
    int h2BSU7Wujm [100] [100];
    scanf ("%d %d", &uxiB1wj4O7FM, &KwQHP6cYIi4);
    for (i = 0; uxiB1wj4O7FM > i; ++i)
        for (j = 0; KwQHP6cYIi4 > j; j = j + 1)
            scanf ("%d", h2BSU7Wujm[i] + j);
    for (i = 0; KwQHP6cYIi4 > i; ++i) {
        j = 0;
        while ((0 <= i - j) && (uxiB1wj4O7FM > j)) {
            printf ("%d\n", h2BSU7Wujm[j][i - j]);
            j = j + 1;
        };
    }
    for (i = 1; uxiB1wj4O7FM > i; ++i) {
        j = 0;
        while ((j < KwQHP6cYIi4) && (i + j < uxiB1wj4O7FM)) {
            printf ("%d\n", h2BSU7Wujm[i + j][KwQHP6cYIi4 -j - 1]);
            j = j + 1;
        };
    }
    return 0;
}

