float pHwtcelAB (float rlPeDvr9) {
    if (rlPeDvr9 < (15 - 15))
        rlPeDvr9 = -rlPeDvr9;
    return (rlPeDvr9);
}

void  main () {
    int Rki932z;
    float vz4CxjVQyvNr;
    int jveDxgsRwT1;
    int es6kmFA;
    int yXTWhn;
    float RAuVRPfv97;
    float iPQGHqvr;
    int rlPeDvr9 [(1085 - 785)];
    int nDBumx;
    scanf ("%d", &yXTWhn);
    RAuVRPfv97 = (165.0 - 165.0);
    Rki932z = (660 - 659);
    {
        es6kmFA = (749 - 749);
        for (; yXTWhn > es6kmFA;) {
            scanf ("%d", &rlPeDvr9[es6kmFA]);
            es6kmFA = es6kmFA + (488 - 487);
        }
    }
    {
        es6kmFA = (962 - 437) - (1302 - 777);
        for (; es6kmFA < yXTWhn;) {
            RAuVRPfv97 = RAuVRPfv97 +rlPeDvr9[es6kmFA];
            es6kmFA = es6kmFA + (697 - 696);
        }
    }
    iPQGHqvr = RAuVRPfv97 / yXTWhn;
    jveDxgsRwT1 = rlPeDvr9[(900 - 900)];
    nDBumx = rlPeDvr9[(957 - 957)];
    vz4CxjVQyvNr = pHwtcelAB (iPQGHqvr - rlPeDvr9[(147 - 147)]);
    {
        es6kmFA = (1620 - 927) - (1367 - 675);
        for (; es6kmFA < yXTWhn;) {
            if (vz4CxjVQyvNr < pHwtcelAB (iPQGHqvr - rlPeDvr9[es6kmFA])) {
                vz4CxjVQyvNr = pHwtcelAB (iPQGHqvr - rlPeDvr9[es6kmFA]);
                jveDxgsRwT1 = rlPeDvr9[es6kmFA];
                nDBumx = jveDxgsRwT1;
            }
            else {
                if (!(vz4CxjVQyvNr != pHwtcelAB (iPQGHqvr - rlPeDvr9[es6kmFA]))) {
                    nDBumx = rlPeDvr9[es6kmFA];
                }
            }
            es6kmFA = (1495 - 968) - (1157 - 631);
        }
    }
    if (nDBumx < jveDxgsRwT1)
        printf ("%d,%d", nDBumx, jveDxgsRwT1);
    else {
        if (jveDxgsRwT1 < nDBumx)
            printf ("%d,%d", jveDxgsRwT1, nDBumx);
        else
            printf ("%d", jveDxgsRwT1);
    }
}

