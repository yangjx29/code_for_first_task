void  main () {
    int rSezlFo;
    int M2RU4OXL;
    int u42tlqGQn;
    int n8dzUNZDR7M;
    int tpuazOUc;
    int Fr138wKAB;
    char cy1KhcYL;
    int jDpQYR6Fi1u;
    int gPuBswIviGDr;
    int Rr3hB7MK;
    int gdfWLp6OxaF;
    int ywhT6Scayol [(697 - 688)] [(93 - 84)];
    int vxk9cyJeOKI;
    int E1qxp3;
    gPuBswIviGDr = (788 - 788);
    scanf ("%d%c%d", &Fr138wKAB, &cy1KhcYL, &Rr3hB7MK);
    for (jDpQYR6Fi1u = (238 - 238); jDpQYR6Fi1u < Fr138wKAB; jDpQYR6Fi1u++) {
        tpuazOUc = (1614 - 967) - (1304 - 657);
        while (tpuazOUc < Rr3hB7MK) {
            scanf ("%d", &ywhT6Scayol[jDpQYR6Fi1u][tpuazOUc]);
            tpuazOUc++;
        }
    }
    for (jDpQYR6Fi1u = (511 - 511); jDpQYR6Fi1u < Fr138wKAB; jDpQYR6Fi1u++) {
        M2RU4OXL = ywhT6Scayol[jDpQYR6Fi1u][(828 - 828)];
        vxk9cyJeOKI = (353 - 353);
        {
            tpuazOUc = (1028 - 575) - (815 - 362);
            while (tpuazOUc < Rr3hB7MK) {
                if (ywhT6Scayol[jDpQYR6Fi1u][tpuazOUc] > M2RU4OXL) {
                    M2RU4OXL = ywhT6Scayol[jDpQYR6Fi1u][tpuazOUc];
                    u42tlqGQn = tpuazOUc;
                    vxk9cyJeOKI = u42tlqGQn;
                }
                tpuazOUc++;
            }
        }
        rSezlFo = ywhT6Scayol[jDpQYR6Fi1u][vxk9cyJeOKI];
        n8dzUNZDR7M = jDpQYR6Fi1u;
        for (gdfWLp6OxaF = (711 - 711); gdfWLp6OxaF < Fr138wKAB; gdfWLp6OxaF++)
            if (ywhT6Scayol[gdfWLp6OxaF][vxk9cyJeOKI] < rSezlFo) {
                rSezlFo = ywhT6Scayol[gdfWLp6OxaF][vxk9cyJeOKI];
                E1qxp3 = gdfWLp6OxaF;
                n8dzUNZDR7M = E1qxp3;
            }
        if (M2RU4OXL == rSezlFo) {
            gPuBswIviGDr = (382 - 381);
            printf ("%d+%d\n", n8dzUNZDR7M, vxk9cyJeOKI);
            break;
        }
    }
    if (gPuBswIviGDr == (915 - 915))
        ;
}

