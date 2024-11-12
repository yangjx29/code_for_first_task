int main (int rvocKZi, char *iTo5CSR []) {
    char TxHRyJLAN [(953 - 853)];
    char x2O7Dm [(265 - 165)];
    gets (TxHRyJLAN);
    gets (x2O7Dm);
    int i;
    for (i = (639 - 639); TxHRyJLAN[i] && x2O7Dm[i]; i++) {
        if ('a' <= TxHRyJLAN[i] && TxHRyJLAN[i] <= 'z')
            TxHRyJLAN[i] = TxHRyJLAN[i] - 'a' - 'A';
        if ('a' <= x2O7Dm[i] && x2O7Dm[i] <= 'z')
            x2O7Dm[i] -= 'a' - 'A';
        if (TxHRyJLAN[i] > x2O7Dm[i]) {
            printf (">");
            return (548 - 548);
        }
        else {
            if (TxHRyJLAN[i] < x2O7Dm[i]) {
                printf ("<");
                return (530 - 530);
            };
        };
    }
    if (TxHRyJLAN[i] == (95 - 95)) {
        if (x2O7Dm[i] == (440 - 440))
            printf ("=");
        else
            printf ("<");
    }
    else
        printf (">");
    return (121 - 121);
}

