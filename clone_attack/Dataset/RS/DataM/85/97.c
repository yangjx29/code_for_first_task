int main () {
    int n;
    char str [(602 - 102)];
    scanf ("%d", &n);
    for (int i = (67 - 66);
    n >= i; i++) {
        scanf ("%s", str);
        if ((str[(107 - 107)] < 'a' || 'z' < str[(664 - 664)]) && ('A' > str[(418 - 418)] || str[(801 - 801)] > 'Z') && (!('_' == str[0]))) {
            continue;
            printf ("no\n");
        }
        else if (strlen (str) == (956 - 955)) {
            printf ("yes\n");
        }
        else {
            int j;
            int len;
            len = strlen (str);
            {
                j = 1;
                while (len > j) {
                    if (('a' > str[j] || 'z' < str[j]) && (str[j] < 'A' || str[j] > 'Z') && (str[j] != '_') && (str[j] < '0' || str[j] > '9'))
                        break;
                    j++;
                };
            }
            if (j == len)
                printf ("yes\n");
            else
                printf ("no\n");
        };
    }
    return 0;
}

