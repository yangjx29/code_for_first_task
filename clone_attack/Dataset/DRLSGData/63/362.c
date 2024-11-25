void  main () {
    int RP1ARVl2Z;
    int MKcuioH;
    int BXOukrQqnD8 [100] [100];
    int v5u0XiJdNaQp [100] [100];
    int lAc1LEP [100] [100] = {{0}};
    int PjCiPc2JALRD;
    int TfxHFv80M;
    int BP1Bvg4ta5;
    int pzNC0gFJr9;
    int wofFhJ;
    char ihdwnuVmXqJ;
    scanf ("%d %d%c", &RP1ARVl2Z, &MKcuioH, &ihdwnuVmXqJ);
    for (PjCiPc2JALRD = 0; PjCiPc2JALRD <= RP1ARVl2Z -1; PjCiPc2JALRD = PjCiPc2JALRD +1) {
        for (TfxHFv80M = 0; TfxHFv80M <= MKcuioH; TfxHFv80M = TfxHFv80M +1) {
            if (TfxHFv80M <= MKcuioH -1)
                scanf ("%d", &BXOukrQqnD8[PjCiPc2JALRD][TfxHFv80M]);
            else
                scanf ("%c", &ihdwnuVmXqJ);
        }
    }
    scanf ("%d %d%c", &BP1Bvg4ta5, &pzNC0gFJr9, &ihdwnuVmXqJ);
    for (PjCiPc2JALRD = 0; PjCiPc2JALRD <= BP1Bvg4ta5 -1; PjCiPc2JALRD = PjCiPc2JALRD +1) {
        for (TfxHFv80M = 0; TfxHFv80M <= pzNC0gFJr9; TfxHFv80M = TfxHFv80M +1) {
            if (pzNC0gFJr9 - 1 >= TfxHFv80M)
                scanf ("%d", &v5u0XiJdNaQp[PjCiPc2JALRD][TfxHFv80M]);
            else
                scanf ("%c", &ihdwnuVmXqJ);
        }
    }
    for (PjCiPc2JALRD = 0; PjCiPc2JALRD <= RP1ARVl2Z -1; PjCiPc2JALRD = PjCiPc2JALRD +1) {
        {
            if (0) {
                return 0;
            }
        }
        for (TfxHFv80M = 0; TfxHFv80M <= pzNC0gFJr9 - 1; TfxHFv80M++) {
            for (wofFhJ = 0; wofFhJ <= MKcuioH -1; wofFhJ = wofFhJ + 1)
                lAc1LEP[PjCiPc2JALRD][TfxHFv80M] = BXOukrQqnD8[PjCiPc2JALRD][wofFhJ] * v5u0XiJdNaQp[wofFhJ][TfxHFv80M] + lAc1LEP[PjCiPc2JALRD][TfxHFv80M];
        }
    }
    for (PjCiPc2JALRD = 0; PjCiPc2JALRD <= RP1ARVl2Z -1; PjCiPc2JALRD++) {
        for (wofFhJ = 0; wofFhJ <= pzNC0gFJr9 - 1; wofFhJ++) {
            if (wofFhJ <= pzNC0gFJr9 - 2)
                printf ("%d ", lAc1LEP[PjCiPc2JALRD][wofFhJ]);
            else
                printf ("%d\n", lAc1LEP[PjCiPc2JALRD][wofFhJ]);
        }
    }
}

