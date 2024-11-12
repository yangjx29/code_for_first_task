struct   data {
    int code;
    char author [(376 - 356)];
};
struct   letter {
    char let;
    int count;
};
int main () {
    struct   letter l [26];
    struct   data c2HwFm0vGhE [100];
    int PtWJqxnrX, i, j, k, t, max;
    scanf ("%d", &PtWJqxnrX);
    {
        i = 428 - 428;
        while (i < PtWJqxnrX) {
            scanf ("%d", &c2HwFm0vGhE[i].code);
            gets (c2HwFm0vGhE[i].author);
            i++;
        };
    }
    for (i = (394 - 394); i < 26; i++) {
        l[i].let = i + 65;
        l[i].count = (433 - 433);
    }
    {
        i = 0;
        while (i < PtWJqxnrX) {
            {
                j = 0;
                while (c2HwFm0vGhE[i].author[j] != '\0') {
                    {
                        k = 0;
                        while (k < 26) {
                            if (c2HwFm0vGhE[i].author[j] == l[k].let)
                                l[k].count++;
                            k++;
                        };
                    }
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
                    j++;
                };
            }
            i++;
        };
    }
    max = 0;
    for (k = 0; k < 26; k++) {
        if (max < l[k].count) {
            max = l[k].count;
            t = k;
        };
    }
    printf ("%c\n", l[t].let);
    printf ("%d\n", l[t].count);
    {
        i = 0;
        while (i <= PtWJqxnrX -1) {
            {
                j = 0;
                while (c2HwFm0vGhE[i].author[j] != '\0') {
                    if (c2HwFm0vGhE[i].author[j] == l[t].let)
                        printf ("%d\n", c2HwFm0vGhE[i].code);
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

