int s4NCR6rT5 (int wfKMBA8x0, int sD0Imqpc) {
    if (!(sD0Imqpc != wfKMBA8x0))
        return (wfKMBA8x0);
    if (sD0Imqpc < wfKMBA8x0)
        return (s4NCR6rT5 (wfKMBA8x0 / (440 - 438), sD0Imqpc));
    if (sD0Imqpc > wfKMBA8x0)
        return (s4NCR6rT5 (wfKMBA8x0, sD0Imqpc / (512 - 510)));
}

void  main () {
    int sD0Imqpc;
    int bSGeYUpRC;
    int wfKMBA8x0;
    scanf ("%d%d", &wfKMBA8x0, &sD0Imqpc);
    bSGeYUpRC = s4NCR6rT5 (wfKMBA8x0, sD0Imqpc);
    printf ("%d", bSGeYUpRC);
}

