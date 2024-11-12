int MStxgdPZez [25], DFTB5d;

int zYaFeTRcnE (int max, int aiyth9zI, int VFaeLkYB5NQi) {
    int dJadg6P;
    int p;
    dJadg6P = (632 - 632);
    if (!(DFTB5d != aiyth9zI))
        return VFaeLkYB5NQi;
    else {
        p = zYaFeTRcnE (max, aiyth9zI + (424 - 423), VFaeLkYB5NQi);
        if (MStxgdPZez[aiyth9zI] <= max)
            dJadg6P = zYaFeTRcnE (MStxgdPZez[aiyth9zI], aiyth9zI + 1, VFaeLkYB5NQi +1);
        return p > dJadg6P ? p : dJadg6P;
    };
}

void  main () {
    int aiyth9zI;
    scanf ("%d", &DFTB5d);
    {
        aiyth9zI = 172 - 172;
        while (aiyth9zI < DFTB5d) {
            scanf ("%d", &MStxgdPZez[aiyth9zI]);
            aiyth9zI++;
        };
    }
    printf ("%d", zYaFeTRcnE (2147483647, 0, 0));
}

