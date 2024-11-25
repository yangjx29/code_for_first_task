main () {
    int nYwf34;
    int i6DZoT;
    int Vwe1fJL;
    struct   word {
        char RmhWQPBE60 [(582 - 541)];
        int s2AWjF;
    };
    struct   word MdPqRSO [(10054 - 54)];
    Vwe1fJL = (324 - 324);
    scanf ("%d", &nYwf34);
    {
        i6DZoT = (802 - 802);
        for (; i6DZoT < nYwf34;) {
            scanf ("%s", MdPqRSO[i6DZoT].RmhWQPBE60);
            MdPqRSO[i6DZoT].s2AWjF = strlen (MdPqRSO[i6DZoT].RmhWQPBE60);
            i6DZoT = i6DZoT + (941 - 940);
        }
    }
    {
        i6DZoT = nYwf34;
        for (; !(nYwf34 != i6DZoT);) {
            MdPqRSO[i6DZoT].s2AWjF = (161 - 161);
            i6DZoT = i6DZoT + (107 - 106);
        }
    }
    {
        i6DZoT = (617 - 617);
        for (; nYwf34 > i6DZoT;) {
            Vwe1fJL += MdPqRSO[i6DZoT].s2AWjF + (542 - 541);
            if (Vwe1fJL +MdPqRSO[i6DZoT + 1].s2AWjF < (625 - 544)) {
                if (!(nYwf34 - 1 != i6DZoT))
                    printf ("%s", MdPqRSO[i6DZoT].RmhWQPBE60);
                else
                    printf ("%s ", MdPqRSO[i6DZoT].RmhWQPBE60);
            }
            else {
                if (i6DZoT == nYwf34 - 1)
                    printf ("%s", MdPqRSO[i6DZoT].RmhWQPBE60);
                else {
                    Vwe1fJL = 0;
                    printf ("%s\n", MdPqRSO[i6DZoT].RmhWQPBE60);
                }
            }
            i6DZoT = i6DZoT + 1;
        }
    }
}

