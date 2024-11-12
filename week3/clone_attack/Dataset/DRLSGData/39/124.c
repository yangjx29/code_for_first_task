struct   student {
    int C6PlGwqa, Fg26lQE, rlCHrUWz, AqNe1ZP;
    char tHFrDEksAzgn [21], xiACvg [2], uhOiIglEDz [2];
}
HrAEwRUheoby [100];

main () {
    int LONWs7;
    int AqNe1ZP;
    int CCoayHi0;
    char Gvntd9U [21];
    int LGhmsCN8g;
    LONWs7 = 0;
    scanf ("%d", &LGhmsCN8g);
    AqNe1ZP = 0;
    for (CCoayHi0 = 0; LGhmsCN8g > CCoayHi0; CCoayHi0 = CCoayHi0 +1) {
        HrAEwRUheoby[CCoayHi0].AqNe1ZP = 0;
        scanf ("%s%d%d%s%s%d", &HrAEwRUheoby[CCoayHi0].tHFrDEksAzgn, &HrAEwRUheoby[CCoayHi0].C6PlGwqa, &HrAEwRUheoby[CCoayHi0].Fg26lQE, &HrAEwRUheoby[CCoayHi0].xiACvg, &HrAEwRUheoby[CCoayHi0].uhOiIglEDz, &HrAEwRUheoby[CCoayHi0].rlCHrUWz);
        if (HrAEwRUheoby[CCoayHi0].C6PlGwqa > 80 && 1 <= HrAEwRUheoby[CCoayHi0].rlCHrUWz) {
            HrAEwRUheoby[CCoayHi0].AqNe1ZP += 8000;
        }
        if (HrAEwRUheoby[CCoayHi0].C6PlGwqa > 85 && 80 < HrAEwRUheoby[CCoayHi0].Fg26lQE) {
            HrAEwRUheoby[CCoayHi0].AqNe1ZP += 4000;
        }
        if (90 < HrAEwRUheoby[CCoayHi0].C6PlGwqa) {
            HrAEwRUheoby[CCoayHi0].AqNe1ZP += 2000;
        }
        if (HrAEwRUheoby[CCoayHi0].C6PlGwqa > 85 && HrAEwRUheoby[CCoayHi0].uhOiIglEDz[0] == 'Y') {
            HrAEwRUheoby[CCoayHi0].AqNe1ZP += 1000;
        }
        if (HrAEwRUheoby[CCoayHi0].Fg26lQE > 80 && HrAEwRUheoby[CCoayHi0].xiACvg[0] == 'Y') {
            HrAEwRUheoby[CCoayHi0].AqNe1ZP += 850;
        }
        AqNe1ZP += HrAEwRUheoby[CCoayHi0].AqNe1ZP;
        if (LONWs7 < HrAEwRUheoby[CCoayHi0].AqNe1ZP) {
            LONWs7 = HrAEwRUheoby[CCoayHi0].AqNe1ZP;
            strcpy (Gvntd9U, HrAEwRUheoby[CCoayHi0].tHFrDEksAzgn);
        }
    }
    printf ("%s\n%d\n%d\n", Gvntd9U, LONWs7, AqNe1ZP);
    return 0;
}

