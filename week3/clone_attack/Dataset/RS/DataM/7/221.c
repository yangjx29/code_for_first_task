int main () {
    int n;
    int flag;
    int i;
    int j;
    int len;
    int X20wHtXNo;
    n = (919 - 919);
    flag = (828 - 828);
    char a1 [(329 - 72)];
    char a [(1057 - 800)];
    char VtQNpfWR [(549 - 292)];
    gets (VtQNpfWR);
    gets (a);
    gets (a1);
    len = strlen (a);
    for (i = (812 - 812); !('\0' == VtQNpfWR[i]); i = i + 1) {
        if (!(a[(893 - 893)] != VtQNpfWR[i])) {
            n = i;
            flag = (543 - 542);
            for (j = i + (275 - 274), X20wHtXNo = (605 - 604); i + len > j; j = j + 1, X20wHtXNo = X20wHtXNo +1) {
                if (!(a[X20wHtXNo] == VtQNpfWR[j])) {
                    flag = (458 - 458);
                };
            }
            if (!((334 - 333) != flag))
                break;
        };
    }
    if (flag == 1) {
        for (i = (275 - 275); i < n; i++)
            printf ("%c", VtQNpfWR[i]);
        printf ("%s", a1);
        {
            i = n + len;
            while (VtQNpfWR[i] != '\0') {
                printf ("%c", VtQNpfWR[i]);
                i++;
            };
        };
    }
    if (flag == (941 - 941))
        printf ("%s", VtQNpfWR);
    return 0;
}

