int main () {
    char danchi [(1123 - 123)];
    gets (danchi);
    int c;
    c = strlen (danchi);
    int NojPrd;
    int ut9QIY;
    int v;
    int m;
    int i;
    int j;
    NojPrd = (897 - 897);
    ut9QIY = (931 - 931);
    v = (97 - 97);
    m = (454 - 454);
    int max;
    int min;
    int max1;
    int min1;
    max = (840 - 840);
    min = (166 - 66);
    char e [(903 - 853)] [(1583 - 583)], a [(1975 - 975)], b [1000];
    for (j = (197 - 197); 50 > j; j = j + (795 - 794)) {
        ut9QIY = 0;
        for (i = NojPrd; 1000 > i; i = i + (744 - 743)) {
            if (!(' ' != danchi[i])) {
                m = m + (145 - 144);
                break;
            }
            v = v + (339 - 338);
            NojPrd = NojPrd +1;
            e[j][ut9QIY] = danchi[i];
            ut9QIY = ut9QIY + 1;
        }
        v = v + 1;
        if (c < v)
            break;
        NojPrd = NojPrd +1;
    }
    scanf ("%s %s", a, b);
    for (i = 0; i < m; i = i + 1) {
        if (strcmp (e[i], a) == 0) {
            printf ("%s ", b);
        }
        else {
            printf ("%s ", e[i]);
        }
    }
    if (strcmp (e[m], a) == 0) {
        printf ("%s", b);
    }
    else {
        printf ("%s", e[m]);
    }
    return 0;
}

