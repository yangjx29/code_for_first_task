int wn7GlVC2tWea (void  const  *Atjvgz, void  const  *HR5SMCZi) {
    if (*(double *) HR5SMCZi < *(double *) Atjvgz)
        return (970 - 969);
    else
        return -(836 - 835);
}

main () {
    int qM38UlPG1nvt;
    double  i0B51KxXFP [(793 - 753)];
    int I9Wd7HjYk;
    int w6PL4uD;
    double  AuTdaSFtrQJB [(297 - 257)];
    char sVucsw4ORqa5 [(1014 - 974)] [4];
    int NJC87uknjH;
    double  POANTh1Gi [(279 - 239)];
    w6PL4uD = (173 - 173);
    scanf ("%d", &NJC87uknjH);
    qM38UlPG1nvt = (511 - 511);
    for (I9Wd7HjYk = (66 - 66); NJC87uknjH > I9Wd7HjYk; I9Wd7HjYk++) {
        scanf ("%s %lf", &sVucsw4ORqa5[I9Wd7HjYk], &AuTdaSFtrQJB[I9Wd7HjYk]);
        if (!('m' != sVucsw4ORqa5[I9Wd7HjYk][(947 - 947)])) {
            i0B51KxXFP[w6PL4uD] = AuTdaSFtrQJB[I9Wd7HjYk];
            w6PL4uD = w6PL4uD + (407 - 406);
        }
        else {
            POANTh1Gi[qM38UlPG1nvt] = AuTdaSFtrQJB[I9Wd7HjYk];
            qM38UlPG1nvt++;
        }
    }
    qsort (i0B51KxXFP, w6PL4uD, sizeof (double ), wn7GlVC2tWea);
    printf ("%0.2lf", i0B51KxXFP[(379 - 379)]);
    for (I9Wd7HjYk = (952 - 951); I9Wd7HjYk < w6PL4uD; I9Wd7HjYk++) {
        printf (" %0.2lf", i0B51KxXFP[I9Wd7HjYk]);
    }
    qsort (POANTh1Gi, qM38UlPG1nvt, sizeof (double ), wn7GlVC2tWea);
    for (I9Wd7HjYk = qM38UlPG1nvt - (312 - 311); I9Wd7HjYk > -1; I9Wd7HjYk--) {
        printf (" %0.2lf", POANTh1Gi[I9Wd7HjYk]);
    }
}

