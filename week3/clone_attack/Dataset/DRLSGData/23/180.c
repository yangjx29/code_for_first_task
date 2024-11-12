int main () {
    int d;
    int qzPVOy;
    int j;
    int k;
    int f;
    int c [(616 - 516)] = {(228 - 228)};
    char a [(501 - 401)];
    gets (a);
    int h;
    char gVBRdsgwxiG0 [(997 - 897)];
    int gLZod1yrYk;
    int e;
    j = (509 - 509);
    e = strlen (a);
    for (qzPVOy = (13 - 13); e > qzPVOy; qzPVOy++) {
        if (a[qzPVOy] != ' ')
            c[j]++;
        else
            j = j + (784 - 783);
    }
    gLZod1yrYk = (721 - 721);
    for (qzPVOy = (342 - 342); j >= qzPVOy; qzPVOy++) {
        for (k = (778 - 778); c[j - qzPVOy] > k; k++)
            gVBRdsgwxiG0[gLZod1yrYk + k] = a[e - c[j - qzPVOy] - gLZod1yrYk + k];
        gLZod1yrYk = gLZod1yrYk + c[j - qzPVOy];
        gVBRdsgwxiG0[gLZod1yrYk] = ' ';
        gLZod1yrYk++;
    }
    for (qzPVOy = 0; e > qzPVOy; qzPVOy++)
        printf ("%c", gVBRdsgwxiG0[qzPVOy]);
    return 0;
}

