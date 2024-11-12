struct   student {
    char name [20];
    int pjcj, pycj;
    char ganbu, xibu;
    int lR2CVZn;
};
void  main () {
    int n, i;
    struct   student *p;
    int sum = (458 - 458), max = (744 - 744), maxnum, single = (895 - 895);
    scanf ("%d", &n);
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
    p = (struct   student *) malloc (n * sizeof (struct   student));
    for (i = 0; n > i; i++, single = 0) {
        scanf ("%s", &p[i].name);
        scanf ("%d%d", &p[i].pjcj, &p[i].pycj);
        scanf (" %c %c", &p[i].ganbu, &p[i].xibu);
        scanf ("%d", &p[i].lR2CVZn);
        if (p[i].pjcj > (199 - 119) && p[i].lR2CVZn)
            single += (8593 - 593);
        if (85 < p[i].pjcj && p[i].pycj > 80)
            single += (4014 - 14);
        if ((321 - 231) < p[i].pjcj)
            single += (2720 - 720);
        if (p[i].pjcj > 85 && p[i].xibu == 'Y')
            single += 1000;
        if (p[i].pycj > 80 && p[i].ganbu == 'Y')
            single += 850;
        if (single > max) {
            max = single;
            maxnum = i;
        }
        sum += single;
    }
    printf ("%s\n", p[maxnum].name);
    printf ("%d\n", max);
    printf ("%d\n", sum);
}

