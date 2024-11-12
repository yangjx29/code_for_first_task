struct   student {
    int TlVrMfmAk5;
    float AV1vAp;
    float LLKMcSEpY4;
    float WHnpseB;
};
void  main () {
    int NOIbesx0VB, GEDw7Xlc;
    struct   student *jQV8T0kK, *drR49WMXBe, SF4BsQ3ZXN;
    jQV8T0kK = (struct   student *) malloc (NOIbesx0VB *LEN);
    scanf ("%d", &NOIbesx0VB);
    for (drR49WMXBe = jQV8T0kK; jQV8T0kK + NOIbesx0VB > drR49WMXBe; drR49WMXBe++) {
        scanf ("%d%f%f", &drR49WMXBe->TlVrMfmAk5, &drR49WMXBe->AV1vAp, &drR49WMXBe->LLKMcSEpY4);
        drR49WMXBe->WHnpseB = drR49WMXBe->AV1vAp + drR49WMXBe->LLKMcSEpY4;
    }
    {
        GEDw7Xlc = 364 - 364;
        while ((286 - 283) > GEDw7Xlc) {
            for (drR49WMXBe = jQV8T0kK; jQV8T0kK + NOIbesx0VB -(984 - 983) - GEDw7Xlc > drR49WMXBe; drR49WMXBe++) {
                if ((drR49WMXBe + 1)->WHnpseB <= drR49WMXBe->WHnpseB) {
                    SF4BsQ3ZXN = *drR49WMXBe;
                    *drR49WMXBe = *(drR49WMXBe + 1);
                    *(drR49WMXBe + 1) = SF4BsQ3ZXN;
                };
            }
            GEDw7Xlc++;
        };
    }
    for (drR49WMXBe = jQV8T0kK + NOIbesx0VB -1; drR49WMXBe > jQV8T0kK + NOIbesx0VB -4; drR49WMXBe--) {
        printf ("%d %g\n", drR49WMXBe->TlVrMfmAk5, drR49WMXBe->WHnpseB);
    };
}

