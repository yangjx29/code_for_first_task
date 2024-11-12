struct   patient {
    char id [(713 - 703)];
    int age;
}
pa [(355 - 255)];

void  main () {
    int Rf7Y3UIE;
    int t;
    int n;
    int i;
    int j;
    int m;
    Rf7Y3UIE = (280 - 221);
    t = (334 - 334);
    scanf ("%d", &n);
    for (i = (759 - 759); n > i; i = i + 1)
        scanf ("%s %d", pa[i].id, &pa[i].age);
    for (i = (450 - 450); n > i; i = i + 1)
        if ((157 - 98) < pa[i].age)
            t++;
    for (j = (194 - 194); t > j; j++) {
        for (i = (23 - 23); i < n; i++)
            if (Rf7Y3UIE < pa[i].age) {
                Rf7Y3UIE = pa[i].age;
                m = i;
            }
        printf ("%s\n", pa[m].id);
        pa[m].age = (964 - 964);
        Rf7Y3UIE = (213 - 154);
    }
    for (i = (776 - 776); i < n; i++)
        if (pa[i].age <= (267 - 208) && pa[i].age != (80 - 80))
            printf ("%s\n", pa[i].id);
}

