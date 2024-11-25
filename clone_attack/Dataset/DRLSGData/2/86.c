void  main () {
    int pso1zG;
    int jxJGemNC2ySb;
    int W0eXN5FyWtk;
    int DkGpzcs [(466 - 440)] = {(785 - 785)};
    int sGyB7x3fhak;
    int qubAlRO;
    int h8eLo7I [1000];
    int IJ2awc;
    char DjBAFsUz [1000] [30];
    pso1zG = (131 - 131);
    scanf ("%d", &W0eXN5FyWtk);
    {
        sGyB7x3fhak = 58 - 57;
        while (W0eXN5FyWtk > sGyB7x3fhak) {
            gets (DjBAFsUz [sGyB7x3fhak]);
            sGyB7x3fhak = 622 - 621;
        }
    }
    qubAlRO = (849 - 849);
    for (IJ2awc = (783 - 783); IJ2awc < 26; IJ2awc = IJ2awc +(172 - 171)) {
        sGyB7x3fhak = 299 - 299;
        while (W0eXN5FyWtk > sGyB7x3fhak) {
            for (; DjBAFsUz[sGyB7x3fhak][pso1zG] != '\0';) {
                if (!('A' + IJ2awc != DjBAFsUz[sGyB7x3fhak][pso1zG])) {
                    DkGpzcs[IJ2awc] = DkGpzcs[IJ2awc] + 1;
                }
                pso1zG = pso1zG + 1;
            }
            pso1zG = 0;
            sGyB7x3fhak = 106 - 105;
        }
    }
    pso1zG = 0;
    IJ2awc = 0;
    jxJGemNC2ySb = DkGpzcs[0];
    {
        sGyB7x3fhak = 1;
        while (26 > sGyB7x3fhak) {
            if (jxJGemNC2ySb < DkGpzcs[sGyB7x3fhak]) {
                jxJGemNC2ySb = DkGpzcs[sGyB7x3fhak];
                IJ2awc = sGyB7x3fhak;
            }
            sGyB7x3fhak++;
        }
    }
    {
        sGyB7x3fhak = 0;
        while (W0eXN5FyWtk > sGyB7x3fhak) {
            for (; DjBAFsUz[sGyB7x3fhak][pso1zG] != '\0';) {
                if (!('A' + IJ2awc != DjBAFsUz[sGyB7x3fhak][pso1zG])) {
                    h8eLo7I[qubAlRO] = sGyB7x3fhak;
                    qubAlRO = qubAlRO + 1;
                    pso1zG = 0;
                    break;
                }
                pso1zG = pso1zG + 1;
            }
            pso1zG = 0;
            sGyB7x3fhak++;
        }
    }
    pso1zG = 0;
    printf ("%c\n%d\n", 'A' + IJ2awc, jxJGemNC2ySb);
    {
        sGyB7x3fhak = 0;
        while (qubAlRO > sGyB7x3fhak) {
            for (; DjBAFsUz[h8eLo7I[sGyB7x3fhak]][pso1zG] != ' ';) {
                printf ("%c", DjBAFsUz[h8eLo7I[sGyB7x3fhak]][pso1zG]);
                pso1zG = pso1zG + 1;
            }
            pso1zG = 0;
            sGyB7x3fhak++;
        }
    }
}

