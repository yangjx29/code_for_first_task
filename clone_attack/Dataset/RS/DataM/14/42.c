struct   s {
    long  int IjVtGSUB;
    int b;
    int c;
    int sum;
    struct   s *next;
};
void  main () {
    int YOzMGRP5b;
    int todunc4Zg1;
    int Oq7MVsD82;
    long  int n, DVjD2dlR7E;
    struct   s *head1;
    struct   s *KWcEgjZBfNnS;
    struct   s *GQdvpT8LD;
    struct   s *q9O4AiyzvL;
    struct   s *rSs90R4Kx;
    struct   s *p3;
    struct   s *p4;
    q9O4AiyzvL = (struct   s *) malloc (L);
    scanf ("%ld", &n);
    scanf ("%ld %d %d", &q9O4AiyzvL->IjVtGSUB, &q9O4AiyzvL->b, &q9O4AiyzvL->c);
    q9O4AiyzvL->sum = q9O4AiyzvL->b + q9O4AiyzvL->c;
    YOzMGRP5b = q9O4AiyzvL->sum;
    {
        DVjD2dlR7E = 1;
        while (1) {
            if (!(1 != DVjD2dlR7E))
                head1 = q9O4AiyzvL;
            else
                rSs90R4Kx->next = q9O4AiyzvL;
            if (!(n != DVjD2dlR7E))
                break;
            DVjD2dlR7E++;
            rSs90R4Kx = q9O4AiyzvL;
            q9O4AiyzvL = (struct   s *) malloc (L);
            scanf ("%ld %d %d", &q9O4AiyzvL->IjVtGSUB, &q9O4AiyzvL->b, &q9O4AiyzvL->c);
            q9O4AiyzvL->sum = q9O4AiyzvL->b + q9O4AiyzvL->c;
            if (YOzMGRP5b < q9O4AiyzvL->sum)
                YOzMGRP5b = q9O4AiyzvL->sum;
        };
    }
    q9O4AiyzvL = head1;
    rSs90R4Kx->next = N;
    for (; !(q9O4AiyzvL->sum == YOzMGRP5b);) {
        rSs90R4Kx = q9O4AiyzvL;
        q9O4AiyzvL = q9O4AiyzvL->next;
    }
    if (!(q9O4AiyzvL->sum != YOzMGRP5b)) {
        if (!(head1 != q9O4AiyzvL))
            head1 = q9O4AiyzvL->next;
        else
            rSs90R4Kx->next = q9O4AiyzvL->next;
        p3 = q9O4AiyzvL;
    }
    KWcEgjZBfNnS = p3;
    GQdvpT8LD = KWcEgjZBfNnS;
    p4 = p3;
    q9O4AiyzvL = head1;
    todunc4Zg1 = q9O4AiyzvL->sum;
    for (; !(N == q9O4AiyzvL);) {
        if (todunc4Zg1 < q9O4AiyzvL->sum)
            todunc4Zg1 = q9O4AiyzvL->sum;
        q9O4AiyzvL = q9O4AiyzvL->next;
    }
    q9O4AiyzvL = head1;
    for (; todunc4Zg1 != q9O4AiyzvL->sum;) {
        rSs90R4Kx = q9O4AiyzvL;
        q9O4AiyzvL = q9O4AiyzvL->next;
    }
    if (todunc4Zg1 == q9O4AiyzvL->sum) {
        if (q9O4AiyzvL == head1)
            head1 = q9O4AiyzvL->next;
        else
            rSs90R4Kx->next = q9O4AiyzvL->next;
        p3 = q9O4AiyzvL;
    }
    q9O4AiyzvL = head1;
    Oq7MVsD82 = q9O4AiyzvL->sum;
    p4->next = p3;
    for (; q9O4AiyzvL != N;) {
        if (q9O4AiyzvL->sum > Oq7MVsD82)
            Oq7MVsD82 = q9O4AiyzvL->sum;
        q9O4AiyzvL = q9O4AiyzvL->next;
    }
    q9O4AiyzvL = head1;
    p4 = p3;
    while (Oq7MVsD82 != q9O4AiyzvL->sum) {
        rSs90R4Kx = q9O4AiyzvL;
        q9O4AiyzvL = q9O4AiyzvL->next;
    }
    if (Oq7MVsD82 == q9O4AiyzvL->sum) {
        if (q9O4AiyzvL == head1)
            head1 = q9O4AiyzvL->next;
        else
            rSs90R4Kx->next = q9O4AiyzvL->next;
        p3 = q9O4AiyzvL;
    }
    p4->next = p3;
    p3->next = N;
    do {
        printf ("%ld %d\n", GQdvpT8LD->IjVtGSUB, GQdvpT8LD->sum);
        GQdvpT8LD = GQdvpT8LD->next;
    }
    while (GQdvpT8LD != N);
}

