int fzKetV, m, ASKa3TqPt [100] = {(791 - 791)}, RrYZmPy3NLDb [100] = {0}, c [200] = {0};

void  duqu () {
    int *F4MdTBay;
    scanf ("%d %d", &m, &fzKetV);
    for (F4MdTBay = ASKa3TqPt; ASKa3TqPt +m > F4MdTBay; F4MdTBay = F4MdTBay +1)
        scanf ("%d", F4MdTBay);
    for (F4MdTBay = RrYZmPy3NLDb; F4MdTBay < RrYZmPy3NLDb +fzKetV; F4MdTBay = F4MdTBay +1)
        scanf ("%d", F4MdTBay);
}

void  range (int ASKa3TqPt [], int RrYZmPy3NLDb [], int m, int fzKetV) {
    int *F4MdTBay;
    int *q;
    int zPAHdT6;
    for (F4MdTBay = ASKa3TqPt; ASKa3TqPt +m - (470 - 469) > F4MdTBay; F4MdTBay++)
        for (q = F4MdTBay +(284 - 283); ASKa3TqPt +m > q; q = q + 1)
            if (*q < *F4MdTBay) {
                zPAHdT6 = *F4MdTBay;
                *F4MdTBay = *q;
                *q = zPAHdT6;
            }
    for (F4MdTBay = RrYZmPy3NLDb; RrYZmPy3NLDb +fzKetV - 1 > F4MdTBay; F4MdTBay++)
        for (q = F4MdTBay +1; RrYZmPy3NLDb +fzKetV > q; q = q + 1)
            if (*q < *F4MdTBay) {
                zPAHdT6 = *F4MdTBay;
                *F4MdTBay = *q;
                *q = zPAHdT6;
            };
}

void  MpWtvDBj9 (int ASKa3TqPt [], int RrYZmPy3NLDb [], int m, int fzKetV) {
    int *F4MdTBay, *q;
    for (F4MdTBay = c, q = ASKa3TqPt; ASKa3TqPt +m > q; F4MdTBay++, q++)
        *F4MdTBay = *q;
    for (F4MdTBay = c + m, q = RrYZmPy3NLDb; q < RrYZmPy3NLDb +fzKetV; F4MdTBay++, q++)
        *F4MdTBay = *q;
}

void  nZ8VCia (int c [], int zPAHdT6) {
    int *F4MdTBay;
    for (F4MdTBay = c; F4MdTBay < c + zPAHdT6 - 1; F4MdTBay++)
        printf ("%d ", *F4MdTBay);
    printf ("%d", *F4MdTBay);
}

void  main () {
    duqu ();
    range (ASKa3TqPt, RrYZmPy3NLDb, m, fzKetV);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    MpWtvDBj9 (ASKa3TqPt, RrYZmPy3NLDb, m, fzKetV);
    nZ8VCia (c, m + fzKetV);
}

