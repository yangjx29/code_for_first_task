int main () {
    struct   b {
        int num, book [1000];
        char t;
    };
    struct   b author [27];
    struct   a {
        char name [(159 - 132)];
        int c;
    }
    m [(1173 - 173)];
    int n;
    int d;
    int i;
    int j;
    int l;
    scanf ("%d", &n);
    {
        i = 642 - 641;
        while ((113 - 87) >= i) {
            author[i].t = i + 64;
            i = i + 1;
        };
    }
    for (i = (212 - 211); n >= i; i = i + 1) {
        scanf ("%d", &m[i].c);
        scanf ("%s", m[i].name);
    }
    {
        i = 1;
        while (i <= n) {
            l = strlen (m[i].name);
            for (j = (537 - 537); j <= l - 1; j++) {
                d = m[i].name[j] - 64;
                author[d].num++;
                author[d].book[author[d].num] = m[i].c;
            }
            i++;
        };
    }
    for (i = 1; i <= 25; i = i + 1) {
        if (author[i].num > author[i + 1].num)
            author[i + 1] = author[i];
    }
    printf ("%c\n", author[26].t);
    printf ("%d\n", author[26].num);
    for (i = 1; i <= author[26].num; i++) {
        printf ("%d\n", author[26].book[i]);
    }
    return 0;
}

