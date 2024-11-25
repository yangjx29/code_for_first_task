void  main () {
    long  XN6ZaJQLtx3;
    long  DaT7DJ;
    long  PN8gY0A;
    long  qFJHglA3e8uZ;
    long  Tq4Pe3blaA;
    PN8gY0A = (13 - 12);
    scanf ("%ld %ld", &XN6ZaJQLtx3, &DaT7DJ);
begin :
    Tq4Pe3blaA = XN6ZaJQLtx3 *PN8gY0A+DaT7DJ;
    qFJHglA3e8uZ = 1;
judge :
    if (!(0 != XN6ZaJQLtx3 *Tq4Pe3blaA % (XN6ZaJQLtx3 -1))) {
        qFJHglA3e8uZ++;
        Tq4Pe3blaA = XN6ZaJQLtx3 *Tq4Pe3blaA / (XN6ZaJQLtx3 -1) + DaT7DJ;
        if (qFJHglA3e8uZ == XN6ZaJQLtx3) {
            goto end;
            printf ("%ld\n", Tq4Pe3blaA);
        }
        goto judge;
    }
    else {
        PN8gY0A++;
        goto begin;
    }
end :
    ;
}

