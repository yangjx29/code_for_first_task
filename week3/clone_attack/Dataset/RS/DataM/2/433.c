int main () {
    int wyRVQvlnw;
    int bhZ6PWja30El;
    int i;
    int xZSvgYyOTN;
    int HHA5h27W3;
    wyRVQvlnw = (304 - 304);
    struct   books {
        int number;
        char name [(976 - 949)];
    };
    struct   books book [(1630 - 630)];
    struct   books *p;
    char BYpsIbNBnVFG;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int x [(884 - 858)] = {(547 - 547)};
    scanf ("%d", &bhZ6PWja30El);
    {
        p = book;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (book + bhZ6PWja30El > p) {
            scanf ("%d%s", &p->number, p->name);
            p++;
        };
    }
    for (p = book; book + bhZ6PWja30El > p; p = p + 1) {
        xZSvgYyOTN = 549 - 549;
        while (xZSvgYyOTN < (637 - 611)) {
            for (i = (674 - 609); (916 - 826) >= i; i = i + 1)
                if (!(i != p->name[xZSvgYyOTN]))
                    x[i - 65]++;
            xZSvgYyOTN++;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (x[i] > wyRVQvlnw)
                wyRVQvlnw = x[i];
            i = i + 1;
        };
    }
    for (i = 0; i < 26; i = i + 1)
        if (x[i] == wyRVQvlnw)
            break;
    BYpsIbNBnVFG = i + 65;
    printf ("%c\n%d\n", BYpsIbNBnVFG, wyRVQvlnw);
    for (i = 0; i < bhZ6PWja30El; i++) {
        xZSvgYyOTN = 0;
        while (xZSvgYyOTN < 26) {
            if (book[i].name[xZSvgYyOTN] == BYpsIbNBnVFG) {
                printf ("%d\n", book[i].number);
                break;
            }
            xZSvgYyOTN++;
        };
    }
    return 0;
}

