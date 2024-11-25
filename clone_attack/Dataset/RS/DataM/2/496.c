struct   {
    int no;
    char oI4EqFL5 [(946 - 920)];
}
book [999];
struct   {
    char name;
    int num;
    int book [999];
}
hMdSUl58p [26];

int main () {
    int n, m, t, k, d;
    int all;
    all = (412 - 412);
    for (t = (803 - 803); 26 > t; t = t + 1) {
        hMdSUl58p[t].name = 'A' + t;
        hMdSUl58p[t].num = 0;
    }
    scanf ("%d", &m);
    for (t = 0; m > t; t = t + 1) {
        scanf ("%d %s", &book[t].no, book[t].oI4EqFL5);
    }
    {
        t = 0;
        while (m > t) {
            k = strlen (book[t].oI4EqFL5);
            for (n = 0; n < k; n++) {
                d = 0;
                while (d < 26) {
                    if (!(book[t].oI4EqFL5[n] != hMdSUl58p[d].name)) {
                        hMdSUl58p[d].book[hMdSUl58p[d].num] = book[t].no;
                        hMdSUl58p[d].num++;
                        break;
                    }
                    d++;
                };
            }
            t = t + 1;
        };
    }
    k = 0;
    for (t = 0; t < 26; t++) {
        if (k < hMdSUl58p[t].num)
            k = hMdSUl58p[t].num;
    }
    {
        t = 0;
        while (1) {
            if (k == hMdSUl58p[t].num) {
                printf ("%c", hMdSUl58p[t].name);
                printf ("\n%d", hMdSUl58p[t].num);
                for (d = 0; d < hMdSUl58p[t].num; d++)
                    printf ("\n%d", hMdSUl58p[t].book[d]);
                break;
            }
            t++;
        };
    };
}

