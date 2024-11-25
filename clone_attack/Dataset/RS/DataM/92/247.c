int compare (const  void  *a, const  void  *b) {
    return *(int*) b - *(int*) a;
}

main () {
    int IX4K1675;
    int UdIRhtExq [1000];
    int q [1000];
    int i, j, k, m;
    int fiN0DcaTB, tk, tm, qp3nHl, qm;
    for (;;) {
        scanf ("%d", &IX4K1675);
        if (IX4K1675 == 0)
            break;
        {
            i = 0;
            while (i < IX4K1675) {
                scanf ("%d", &UdIRhtExq[i]);
                i = i + 1;
            };
        }
        for (i = 0; i < IX4K1675; i = i + 1)
            scanf ("%d", &q[i]);
        qsort (UdIRhtExq, IX4K1675, sizeof (int), compare);
        qsort (q, IX4K1675, sizeof (int), compare);
        fiN0DcaTB = 0;
        tk = 0;
        tm = IX4K1675 -1;
        qp3nHl = 0;
        qm = IX4K1675 -1;
        while (tk <= tm) {
            if (UdIRhtExq[tm] > q[qm]) {
                fiN0DcaTB = fiN0DcaTB + 1;
                tm = tm - 1;
                qm--;
            }
            else if (UdIRhtExq[tk] > q[qp3nHl]) {
                fiN0DcaTB = fiN0DcaTB + 1;
                tk = tk + 1;
                qp3nHl = qp3nHl + 1;
            }
            else if (UdIRhtExq[tm] < q[qp3nHl]) {
                qp3nHl = qp3nHl + 1;
                tm = tm - 1;
                fiN0DcaTB = fiN0DcaTB - 1;
            }
            else
                break;
        }
        printf ("%d\n", fiN0DcaTB * 200);
    };
}

