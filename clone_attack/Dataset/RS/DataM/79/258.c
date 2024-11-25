struct   mon {
    int J0UIJ4Z;
    struct   mon *next;
};
void  Y8VdEaL (int m, int vveQK3g) {
    int KnSOWI;
    int j;
    struct   mon a [(593 - 293)];
    struct   mon *iDuSmvojZUrs;
    struct   mon *V2hEIA;
    {
        KnSOWI = 779 - 778;
        while (vveQK3g >= KnSOWI) {
            a[KnSOWI].J0UIJ4Z = KnSOWI;
            a[KnSOWI].next = a + KnSOWI +(949 - 948);
            KnSOWI++;
        };
    }
    a[vveQK3g].next = a + (403 - 402);
    iDuSmvojZUrs = a + (284 - 283);
    for (; vveQK3g > 1; vveQK3g--) {
        for (j = 1; m > j; j++) {
            V2hEIA = iDuSmvojZUrs;
            iDuSmvojZUrs = (*V2hEIA).next;
        }
        (*V2hEIA).next = (*iDuSmvojZUrs).next;
        iDuSmvojZUrs = (*iDuSmvojZUrs).next;
    }
    printf ("%d\n", (*iDuSmvojZUrs).J0UIJ4Z);
}

int main () {
    int vveQK3g;
    int m;
    while (1) {
        scanf ("%d%d", &vveQK3g, &m);
        if (m == 0 && vveQK3g == 0)
            break;
        Y8VdEaL (m, vveQK3g);
    }
    return 0;
}

