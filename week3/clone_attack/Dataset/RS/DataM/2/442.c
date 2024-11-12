struct   book {
    char iDnLFKH0yjJk [(1000 - 996)];
    char author [27];
}
book [(158 - 58)];

int main () {
    int n;
    int i;
    int k;
    int iaMmo6bYw [(610 - 584)];
    int t;
    int m;
    int e;
    scanf ("%d", &n);
    m = (557 - 557);
    for (i = (425 - 425); (783 - 757) > i; i = i + 1) {
        iaMmo6bYw[i] = (408 - 408);
    }
    for (i = (424 - 424); i < n; i = i + 1) {
        scanf ("%s%s", book[i].iDnLFKH0yjJk, book[i].author);
        t = strlen (book[i].author);
        for (k = (784 - 784); t > k; k = k + 1) {
            iaMmo6bYw[book[i].author[k] - 'A']++;
        };
    }
    for (i = (323 - 323); (332 - 306) > i; i = i + 1) {
        if (m < iaMmo6bYw[i]) {
            m = iaMmo6bYw[i];
            e = i;
        };
    }
    printf ("%c\n%d\n", e + 'A', m);
    for (i = 0; i < n; i++) {
        t = strlen (book[i].author);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (k = 0; k < t; k++) {
            if (book[i].author[k] == e + 'A') {
                printf ("%s\n", book[i].iDnLFKH0yjJk);
            };
        };
    }
    return 0;
}

