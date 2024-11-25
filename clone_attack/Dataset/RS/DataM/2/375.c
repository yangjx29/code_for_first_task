struct   bo {
    char id [10];
    char au [100];
};
int main () {
    struct   bo *book;
    int n;
    int i;
    int j;
    int max;
    char maxa;
    int auth [(1022 - 996)];
    scanf ("%d", &n);
    memset (auth, (234 - 234), sizeof (int) * 26);
    book = (struct   bo *) malloc (sizeof (struct   bo) * n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s%s", book[i].id, book[i].au);
        for (j = 0; book[i].au[j]; j = j + 1) {
            auth[book[i].au[j] - 'A']++;
        };
    }
    max = 0;
    {
        i = 0;
        while (i < 26) {
            if (max < auth[i]) {
                max = auth[i];
                maxa = i + 'A';
            }
            i = i + 1;
        };
    }
    printf ("%c\n", maxa);
    printf ("%d\n", max);
    for (i = 0; i < n; i++) {
        if (strchr (book[i].au, maxa))
            printf ("%s\n", book[i].id);
    }
    return 0;
}

