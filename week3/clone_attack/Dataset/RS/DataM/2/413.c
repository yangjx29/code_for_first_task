struct   Book {
    int number;
    char author [(604 - 574)];
};
void  main () {
    struct   Book book [999];
    int m;
    int i;
    int OR0pBnGmNokI;
    int WO9A0p6L4o [(202 - 172)] = {(878 - 878)};
    int fG2WY6l;
    int WqP7YM;
    fG2WY6l = (683 - 683);
    scanf ("%d", &m);
    {
        i = 991 - 991;
        while (m > i) {
            scanf ("%d %s", &book[i].number, book[i].author);
            WqP7YM = strlen (book[i].author);
            for (OR0pBnGmNokI = (841 - 841); WqP7YM > OR0pBnGmNokI; OR0pBnGmNokI = OR0pBnGmNokI +1)
                WO9A0p6L4o[book[i].author[OR0pBnGmNokI] - 65]++;
            i = i + 1;
        };
    }
    for (i = (654 - 654); i < (96 - 70); i = i + 1) {
        if (WO9A0p6L4o[fG2WY6l] < WO9A0p6L4o[i])
            fG2WY6l = i;
    }
    printf ("%c\n%d\n", fG2WY6l + 65, WO9A0p6L4o[fG2WY6l]);
    for (i = 0; i < m; i = i + 1) {
        WqP7YM = strlen (book[i].author);
        for (OR0pBnGmNokI = 0; OR0pBnGmNokI < WqP7YM; OR0pBnGmNokI = OR0pBnGmNokI +1) {
            if (book[i].author[OR0pBnGmNokI] == fG2WY6l + 65) {
                printf ("%d\n", book[i].number);
                break;
            };
        };
    };
}

