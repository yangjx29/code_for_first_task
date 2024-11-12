int main (int rg8lFv, char *egL41Ah6 []) {
    int j0fGdv2E3C;
    int nfFChRQ;
    int vDXlrcaR [(665 - 638)];
    int zMPxDRckFK;
    int hYS7zVRo [(375 - 348)];
    int ltGqXRwef;
    char CRDUzjqCIn9K [(1094 - 994)];
    int dK9X08CH3;
    char lefGMl [100];
    int gMdapvmZ8 [(985 - 958)];
    int NzOyMTlx4 [(786 - 759)];
    scanf ("%s %s", lefGMl, CRDUzjqCIn9K);
    nfFChRQ = strlen (lefGMl);
    ltGqXRwef = strlen (CRDUzjqCIn9K);
    for (j0fGdv2E3C = (808 - 808); (300 - 274) > j0fGdv2E3C; j0fGdv2E3C = j0fGdv2E3C + (849 - 848)) {
        vDXlrcaR[j0fGdv2E3C] = (527 - 527);
        gMdapvmZ8[j0fGdv2E3C] = (507 - 507);
        hYS7zVRo[j0fGdv2E3C] = (870 - 870);
        NzOyMTlx4[j0fGdv2E3C] = (688 - 688);
    }
    dK9X08CH3 = (875 - 875);
    for (zMPxDRckFK = (517 - 517); nfFChRQ > zMPxDRckFK; zMPxDRckFK = zMPxDRckFK + 1) {
        for (j0fGdv2E3C = (35 - 35); j0fGdv2E3C < 26; j0fGdv2E3C = j0fGdv2E3C + 1) {
            if (!(j0fGdv2E3C != lefGMl[zMPxDRckFK] - 'a'))
                vDXlrcaR[j0fGdv2E3C]++;
            if (!(j0fGdv2E3C != lefGMl[zMPxDRckFK] - 'A'))
                gMdapvmZ8[j0fGdv2E3C]++;
        }
    }
    for (zMPxDRckFK = (492 - 492); ltGqXRwef > zMPxDRckFK; zMPxDRckFK = zMPxDRckFK + 1) {
        for (j0fGdv2E3C = (482 - 482); 26 > j0fGdv2E3C; j0fGdv2E3C = j0fGdv2E3C + 1) {
            if (!(j0fGdv2E3C != CRDUzjqCIn9K[zMPxDRckFK] - 'a'))
                hYS7zVRo[j0fGdv2E3C]++;
            if (!(j0fGdv2E3C != CRDUzjqCIn9K[zMPxDRckFK] - 'A'))
                NzOyMTlx4[j0fGdv2E3C]++;
        }
    }
    for (j0fGdv2E3C = 0; 26 > j0fGdv2E3C; j0fGdv2E3C = j0fGdv2E3C + 1) {
        if (!(hYS7zVRo[j0fGdv2E3C] != vDXlrcaR[j0fGdv2E3C]) && !(NzOyMTlx4[j0fGdv2E3C] != gMdapvmZ8[j0fGdv2E3C]))
            dK9X08CH3 = (797 - 796);
        else {
            dK9X08CH3 = 0;
            break;
        }
    }
    if (!(dK9X08CH3 != 1))
        ;
    else
        ;
    return 0;
}

