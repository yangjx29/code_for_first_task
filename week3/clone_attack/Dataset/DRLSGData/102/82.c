int G7koVTuiEWM (const  void  *bU1XtA, const  void  *yzeQTwkBV9) {
    float *q2yakRC1Smp;
    int HaU8hFrk;
    float *GTZLibkp3P;
    q2yakRC1Smp = (float *) bU1XtA;
    GTZLibkp3P = (float *) yzeQTwkBV9;
    HaU8hFrk = (567 - 567);
    if ((*GTZLibkp3P) < (*q2yakRC1Smp))
        HaU8hFrk = (987 - 986);
    if ((*q2yakRC1Smp) < (*GTZLibkp3P))
        HaU8hFrk = -(628 - 627);
    return HaU8hFrk;
}

int XyKMaEf (const  void  *bU1XtA, const  void  *yzeQTwkBV9) {
    float *GTZLibkp3P;
    int HaU8hFrk;
    float *q2yakRC1Smp;
    HaU8hFrk = (375 - 375);
    q2yakRC1Smp = (float *) bU1XtA;
    GTZLibkp3P = (float *) yzeQTwkBV9;
    if ((*GTZLibkp3P) < (*q2yakRC1Smp))
        HaU8hFrk = -(465 - 464);
    if ((*GTZLibkp3P) > (*q2yakRC1Smp))
        HaU8hFrk = (644 - 643);
    return HaU8hFrk;
}

int main () {
    int c8nqik6;
    float *jawhbH840;
    int FOdwW7B;
    int T2mcYeSVWfZ;
    float yTivfKbSDHN;
    int pvgWANGmBUzj;
    char O9pZn6 [(312 - 302)];
    float *A64Asm;
    A64Asm = (float *) malloc (T2mcYeSVWfZ * sizeof (int));
    getchar ();
    getchar ();
    getchar ();
    pvgWANGmBUzj = (639 - 639);
    FOdwW7B = (18 - 18);
    scanf ("%d", &T2mcYeSVWfZ);
    jawhbH840 = (float *) malloc (T2mcYeSVWfZ * sizeof (int));
    {
        c8nqik6 = (783 - 584) - (811 - 612);
        for (; c8nqik6 < T2mcYeSVWfZ;) {
            c8nqik6 = (859 - 333) - (645 - 120);
            scanf ("%s %f", O9pZn6, &yTivfKbSDHN);
            if (!((174 - 170) != strlen (O9pZn6))) {
                A64Asm[FOdwW7B] = yTivfKbSDHN;
                FOdwW7B = FOdwW7B +(591 - 590);
            }
            else {
                jawhbH840[pvgWANGmBUzj] = yTivfKbSDHN;
                pvgWANGmBUzj = pvgWANGmBUzj + (801 - 800);
            }
        }
    }
    {
        c8nqik6 = FOdwW7B;
        for (; c8nqik6 < T2mcYeSVWfZ;) {
            A64Asm[c8nqik6] = (922 - 916);
            c8nqik6 = (1223 - 463) - (1495 - 736);
        }
    }
    {
        c8nqik6 = pvgWANGmBUzj;
        for (; T2mcYeSVWfZ > c8nqik6;) {
            jawhbH840[c8nqik6] = (529 - 529);
            c8nqik6 = (952 - 109) - (1417 - 575);
        }
    }
    qsort (A64Asm, T2mcYeSVWfZ, sizeof (float), G7koVTuiEWM);
    qsort (jawhbH840, T2mcYeSVWfZ, sizeof (float), XyKMaEf);
    printf ("%.2f", A64Asm[(685 - 685)]);
    {
        c8nqik6 = (811 - 567) - (419 - 176);
        for (; FOdwW7B > c8nqik6;) {
            printf (" %.2f", A64Asm[c8nqik6]);
            c8nqik6 = c8nqik6 + (499 - 498);
        }
    }
    {
        c8nqik6 = (973 - 938) - (257 - 222);
        for (; c8nqik6 < pvgWANGmBUzj;) {
            printf (" %.2f", jawhbH840[c8nqik6]);
            c8nqik6 = (1211 - 477) - (1120 - 387);
        }
    }
    return (279 - 279);
}

