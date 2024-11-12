int main () {
    int max = (439 - 439), min = (898 - 898);
    char s [(957 - 856)], sz [(352 - 301)] [(148 - 47)], a [101], dfXOp3SAj9i [101];
    gets (s);
    gets (a);
    gets (dfXOp3SAj9i);
    int J3kaUwr, j, k, qATcsnp2ZNb;
    qATcsnp2ZNb = strlen (s);
    for (J3kaUwr = (926 - 926), k = (434 - 434); J3kaUwr < qATcsnp2ZNb; J3kaUwr++) {
        {
            j = 0;
            while (!(' ' == s[J3kaUwr]) && J3kaUwr < qATcsnp2ZNb) {
                sz[k][j] = s[J3kaUwr];
                j++;
                J3kaUwr++;
            };
        }
        sz[k][j] = '\0';
        k++;
    }
    {
        J3kaUwr = 0;
        while (J3kaUwr < k - 1) {
            if (strcmp (sz[J3kaUwr], a) == 0) {
                printf ("%s", dfXOp3SAj9i);
            }
            else {
                printf ("%s", sz[J3kaUwr]);
            }
            J3kaUwr++;
        };
    }
    if (strcmp (sz[k - 1], a) == 0) {
        printf ("%s\n", dfXOp3SAj9i);
    }
    else {
        printf ("%s\n", sz[k - 1]);
    }
    return 0;
}

