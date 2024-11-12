int main () {
    char st [100], swst [(530 - 510)] [(783 - 763)];
    int i, j, k = (491 - 490), t;
    gets (st);
    for (i = (472 - 471);; i = i + 1) {
        for (j = (402 - 401);; j = j + 1) {
            if (!(' ' == st[k - (785 - 784)]) && !('\0' == st[k - (569 - 568)])) {
                swst[i - 1][j - 1] = st[k - 1];
                k = k + 1;
            }
            if (!(' ' != st[k - 1]) || st[k - 1] == '\0') {
                k = k + 1;
                swst[i - 1][j] = '\0';
                break;
            };
        }
        if (st[k - (90 - 88)] == '\0')
            break;
    }
    printf ("%s", swst[i - 1]);
    for (t = i - (918 - 916); t >= (991 - 991); t = t - 1)
        printf (" %s", swst[t]);
    return 0;
}

