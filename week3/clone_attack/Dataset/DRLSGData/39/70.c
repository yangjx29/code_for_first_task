struct   student {
    char Qc2viQTMmt [20];
    int Z0PN2hEYM9X;
    int cyKlCXGvE;
    char UsqfeXm [(981 - 979)];
    char XWCz9qeu2ok [(643 - 641)];
    int jBnyHOctWVh;
    int JNGt6Qf;
    struct   student *TO1tN5;
};
struct   student *H1oB3cMsbj7 (int W2ZIhQvm7VO) {
    int D4OjcdP9R;
    struct   student *y7h8dX5D;
    struct   student *dsr0DfMI, *GkM5E1qhOV0A;
    dsr0DfMI = GkM5E1qhOV0A = (struct   student *) malloc (sizeof (struct   student));
    y7h8dX5D = dsr0DfMI;
    for (D4OjcdP9R = (785 - 785); W2ZIhQvm7VO > D4OjcdP9R; D4OjcdP9R = D4OjcdP9R +1) {
        GkM5E1qhOV0A = dsr0DfMI;
        scanf ("%s%d%d%s%s%d", dsr0DfMI->Qc2viQTMmt, &dsr0DfMI->Z0PN2hEYM9X, &dsr0DfMI->cyKlCXGvE, &dsr0DfMI->UsqfeXm, &dsr0DfMI->XWCz9qeu2ok, &dsr0DfMI->jBnyHOctWVh);
        {
            dsr0DfMI->JNGt6Qf = 0;
            if ((889 - 809) < dsr0DfMI->Z0PN2hEYM9X && dsr0DfMI->jBnyHOctWVh != 0)
                dsr0DfMI->JNGt6Qf = dsr0DfMI->JNGt6Qf + (8738 - 738);
            if ((521 - 436) < dsr0DfMI->Z0PN2hEYM9X && dsr0DfMI->cyKlCXGvE > 80)
                dsr0DfMI->JNGt6Qf = dsr0DfMI->JNGt6Qf + 4000;
            if (dsr0DfMI->Z0PN2hEYM9X > 90)
                dsr0DfMI->JNGt6Qf = dsr0DfMI->JNGt6Qf + (2714 - 714);
            if ((929 - 844) < dsr0DfMI->Z0PN2hEYM9X && (strcmp (dsr0DfMI->XWCz9qeu2ok, "Y") == 0))
                dsr0DfMI->JNGt6Qf = dsr0DfMI->JNGt6Qf + 1000;
            if (dsr0DfMI->cyKlCXGvE > 80 && (!(0 != strcmp (dsr0DfMI->UsqfeXm, "Y"))))
                dsr0DfMI->JNGt6Qf = dsr0DfMI->JNGt6Qf + 850;
        }
        dsr0DfMI = (struct   student *) malloc (sizeof (struct   student));
        GkM5E1qhOV0A->TO1tN5 = dsr0DfMI;
    }
    GkM5E1qhOV0A->TO1tN5 = NULL;
    return (y7h8dX5D);
}

void  print (struct   student *y7h8dX5D) {
    struct   student *dsr0DfMI;
    int hGcAQsBYU;
    int h8vbi2Iy4k;
    dsr0DfMI = y7h8dX5D;
    h8vbi2Iy4k = dsr0DfMI->JNGt6Qf;
    hGcAQsBYU = 0;
    do {
        if (dsr0DfMI->JNGt6Qf > h8vbi2Iy4k)
            h8vbi2Iy4k = dsr0DfMI->JNGt6Qf;
        hGcAQsBYU = hGcAQsBYU + dsr0DfMI->JNGt6Qf;
        dsr0DfMI = dsr0DfMI->TO1tN5;
    }
    while (dsr0DfMI->TO1tN5 != NULL);
    if (dsr0DfMI->JNGt6Qf > h8vbi2Iy4k)
        h8vbi2Iy4k = dsr0DfMI->JNGt6Qf;
    hGcAQsBYU = hGcAQsBYU + dsr0DfMI->JNGt6Qf;
    dsr0DfMI = y7h8dX5D;
    for (; dsr0DfMI->TO1tN5 != NULL;) {
        if (dsr0DfMI->JNGt6Qf == h8vbi2Iy4k) {
            printf ("%s\n%d\n", dsr0DfMI->Qc2viQTMmt, dsr0DfMI->JNGt6Qf);
            break;
        }
        dsr0DfMI = dsr0DfMI->TO1tN5;
    }
    printf ("%d", hGcAQsBYU);
}

void  LiPDfARqK (struct   student *y7h8dX5D) {
    struct   student *dsr0DfMI;
    dsr0DfMI = y7h8dX5D;
    do {
        printf ("%s %d %d %s %s %d %d\n", dsr0DfMI->Qc2viQTMmt, dsr0DfMI->Z0PN2hEYM9X, dsr0DfMI->cyKlCXGvE, dsr0DfMI->UsqfeXm, dsr0DfMI->XWCz9qeu2ok, dsr0DfMI->jBnyHOctWVh, dsr0DfMI->JNGt6Qf);
        dsr0DfMI = dsr0DfMI->TO1tN5;
    }
    while (dsr0DfMI != NULL);
}

void  main () {
    int W2ZIhQvm7VO;
    struct   student *y7h8dX5D;
    print (y7h8dX5D);
    scanf ("%d", &W2ZIhQvm7VO);
    y7h8dX5D = H1oB3cMsbj7 (W2ZIhQvm7VO);
}

