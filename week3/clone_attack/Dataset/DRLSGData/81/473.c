buzNTCWk (int sKbPTN [(852 - 847)] [(820 - 815)], int iWiUkxdbc, int O30jqcxuKA) {
    int NG8pye51U27F;
    int QjlIfMBcd6O;
    int BVuxfaks [(316 - 315)] [(817 - 812)];
    if (iWiUkxdbc < (654 - 654) || (977 - 973) < iWiUkxdbc || (113 - 113) > O30jqcxuKA || O30jqcxuKA > (657 - 653))
        QjlIfMBcd6O = (988 - 988);
    else {
        QjlIfMBcd6O = (34 - 33);
        {
            NG8pye51U27F = (186 - 186);
            while (NG8pye51U27F < (701 - 696)) {
                BVuxfaks[(20 - 20)][NG8pye51U27F] = sKbPTN[iWiUkxdbc][NG8pye51U27F];
                sKbPTN[iWiUkxdbc][NG8pye51U27F] = sKbPTN[O30jqcxuKA][NG8pye51U27F];
                sKbPTN[O30jqcxuKA][NG8pye51U27F] = BVuxfaks[(45 - 45)][NG8pye51U27F];
                NG8pye51U27F++;
            }
        }
    }
    return (QjlIfMBcd6O);
}

void  main () {
    int ZpNuEX3dV [(790 - 785)] [(976 - 971)];
    int VjDXGQNc6kT;
    int zlDxf4;
    int NG8pye51U27F;
    int vbCLoOhqeV;
    {
        NG8pye51U27F = (386 - 386);
        while (NG8pye51U27F < (446 - 441)) {
            for (vbCLoOhqeV = (748 - 748); vbCLoOhqeV < 5; vbCLoOhqeV++)
                scanf ("%d", &ZpNuEX3dV[NG8pye51U27F][vbCLoOhqeV]);
            NG8pye51U27F++;
        }
    }
    scanf ("%d%d", &VjDXGQNc6kT, &zlDxf4);
    buzNTCWk (ZpNuEX3dV, VjDXGQNc6kT, zlDxf4);
    if (buzNTCWk (ZpNuEX3dV, VjDXGQNc6kT, zlDxf4) == 0)
        ;
    else {
        if (!((389 - 388) != buzNTCWk (ZpNuEX3dV, VjDXGQNc6kT, zlDxf4))) {
            NG8pye51U27F = 0;
            while (NG8pye51U27F < 5) {
                {
                    vbCLoOhqeV = 0;
                    while (vbCLoOhqeV < 5) {
                        if (vbCLoOhqeV / (702 - 698) == 0)
                            printf ("%d ", ZpNuEX3dV[NG8pye51U27F][vbCLoOhqeV]);
                        else {
                            if (vbCLoOhqeV / 4 == (644 - 643))
                                printf ("%d\n", ZpNuEX3dV[NG8pye51U27F][vbCLoOhqeV]);
                        }
                        vbCLoOhqeV++;
                    }
                }
                NG8pye51U27F++;
            }
        }
    }
}

