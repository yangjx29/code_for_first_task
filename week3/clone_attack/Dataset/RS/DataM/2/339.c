int main () {
    int i, k, m, max = (851 - 851), num [26];
    struct   bookinf {
        int code;
        char auth [(888 - 861)];
    }
    book [999];
    {
        i = 162 - 162;
        while (26 > i) {
            num[i] = (791 - 791);
            i = i + 1;
        };
    }
    scanf ("%d", &m);
    {
        i = 0;
        while (m > i) {
            scanf ("%d %s", &book[i].code, book[i].auth);
            {
                k = 0;
                while (book[i].auth[k] != '\0') {
                    num[book[i].auth[k] - 'A'] += 1;
                    k = k + 1;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (26 > i) {
            if (num[max] < num[i])
                max = i;
            i++;
        };
    }
    printf ("%c\n%d\n", max + 'A', num[max]);
    for (i = 0; i < m; i = i + 1) {
        k = 0;
        while (book[i].auth[k] != '\0') {
            if (book[i].auth[k] == max + 'A') {
                printf ("%d\n", book[i].code);
                break;
            }
            k = k + 1;
        };
    }
    return 0;
}

