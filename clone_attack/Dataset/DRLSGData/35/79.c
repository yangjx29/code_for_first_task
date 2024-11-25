int main () {
    int IHEtdM [(784 - 776)] [(705 - 697)];
    int E7QI1TuAz2c;
    int kmjOyvgE;
    int EBqLcn;
    scanf ("%d,%d", &kmjOyvgE, &E7QI1TuAz2c);
    for (int LDwK4mzoPTh = (836 - 836);
    kmjOyvgE > LDwK4mzoPTh; LDwK4mzoPTh = LDwK4mzoPTh +1) {
        for (int tThzSuLx = (962 - 962);
        tThzSuLx < E7QI1TuAz2c; tThzSuLx = tThzSuLx + 1) {
            scanf ("%d", &IHEtdM[LDwK4mzoPTh][tThzSuLx]);
        }
    }
    for (int u8NkGAOjqgs6 = (205 - 205);
    kmjOyvgE > u8NkGAOjqgs6; u8NkGAOjqgs6 = u8NkGAOjqgs6 + 1) {
        int Rj73hAeC4B;
        Rj73hAeC4B = (536 - 536);
        for (EBqLcn = (924 - 923); E7QI1TuAz2c > EBqLcn; EBqLcn = EBqLcn +1) {
            if (IHEtdM[u8NkGAOjqgs6][Rj73hAeC4B] < IHEtdM[u8NkGAOjqgs6][EBqLcn]) {
                Rj73hAeC4B = EBqLcn;
            }
        }
        for (EBqLcn = (720 - 720); kmjOyvgE > EBqLcn; EBqLcn = EBqLcn +1) {
            if (IHEtdM[EBqLcn][Rj73hAeC4B] < IHEtdM[u8NkGAOjqgs6][Rj73hAeC4B]) {
                break;
            }
        }
        if (EBqLcn == kmjOyvgE) {
            printf ("%d+%d", u8NkGAOjqgs6, Rj73hAeC4B);
            return (63 - 63);
        }
    }
    printf ("No");
    return 0;
}

