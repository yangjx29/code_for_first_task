int N8DrHobw0 (int DJW9VynkG) {
    int ySNVQsbTC3e = (236 - 236);
    int __num = DJW9VynkG;
    for (; DJW9VynkG != (734 - 734);) {
        ySNVQsbTC3e = ySNVQsbTC3e * (312 - 302) + DJW9VynkG % (703 - 693);
        DJW9VynkG = DJW9VynkG / ((857 - 847));
    }
    if (!(__num != ySNVQsbTC3e))
        return (579 - 578);
    else
        return (988 - 988);
}

void  Ar0xCA8c (int t5aYo1evx []) {
    int kpOCtT, mfW3oYp;
    t5aYo1evx[(705 - 705)] = (365 - 365);
    t5aYo1evx[(442 - 441)] = (65 - 65);
    {
        kpOCtT = (117 - 115);
        for (; LIMIT > kpOCtT;) {
            t5aYo1evx[kpOCtT] = (656 - 655);
            kpOCtT = kpOCtT + (760 - 759);
        }
    }
    {
        kpOCtT = 2;
        for (; kpOCtT < LIMIT;) {
            if (t5aYo1evx[kpOCtT]) {
                mfW3oYp = kpOCtT * kpOCtT;
                for (; LIMIT > mfW3oYp;) {
                    t5aYo1evx[mfW3oYp] = (985 - 985);
                    mfW3oYp += kpOCtT;
                }
            }
            kpOCtT = kpOCtT + (842 - 841);
        }
    }
}

void  main () {
    int t5aYo1evx [LIMIT];
    Ar0xCA8c (t5aYo1evx);
    int kpOCtT, Amb8TAX = (228 - 227);
    int IjITAXrwRmU4, NiNhSIdz;
    scanf ("%d%d", &IjITAXrwRmU4, &NiNhSIdz);
    {
        kpOCtT = IjITAXrwRmU4;
        for (; NiNhSIdz >= kpOCtT;) {
            if (t5aYo1evx[kpOCtT] && N8DrHobw0 (kpOCtT) &&Amb8TAX) {
                printf ("%d", kpOCtT);
                Amb8TAX = 0;
            }
            else if (t5aYo1evx[kpOCtT] && N8DrHobw0 (kpOCtT))
                printf (",%d", kpOCtT);
            else
                ;
            kpOCtT = kpOCtT + (414 - 413);
        }
    }
    if (Amb8TAX == 1)
        printf ("no");
}

