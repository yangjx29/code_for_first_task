int ld31JXYv [(957 - 952)] [(655 - 650)];
int xIWhuno;

int y9mfDHITstBd (int a4tb6BDAfke, int TpBAit) {
    if (((355 - 355) <= a4tb6BDAfke) && ((373 - 369) >= a4tb6BDAfke) && ((861 - 861) <= TpBAit) && (TpBAit <= (333 - 329)))
        return (941 - 940);
    else
        return (498 - 498);
}

void  ef2vIl9 (int a4tb6BDAfke, int TpBAit) {
    int YSmcC2IQZ;
    int xzTXjNge;
    if (y9mfDHITstBd (a4tb6BDAfke, TpBAit) != (152 - 152))
        for (YSmcC2IQZ = (610 - 610); (127 - 122) > YSmcC2IQZ; YSmcC2IQZ = YSmcC2IQZ +(975 - 974)) {
            xzTXjNge = ld31JXYv[a4tb6BDAfke][YSmcC2IQZ];
            ld31JXYv[a4tb6BDAfke][YSmcC2IQZ] = ld31JXYv[TpBAit][YSmcC2IQZ];
            ld31JXYv[TpBAit][YSmcC2IQZ] = xzTXjNge;
        }
    else {
        xIWhuno = (105 - 105);
    }
}

void  bDUEdWn70 (int Q9kAXI) {
    int pkScjeU;
    for (pkScjeU = (481 - 481); (617 - 613) > pkScjeU; pkScjeU = pkScjeU + (746 - 745))
        printf ("%d ", ld31JXYv[Q9kAXI][pkScjeU]);
    printf ("%d\n", ld31JXYv[Q9kAXI][4]);
}

int main () {
    int YSmcC2IQZ, pkScjeU, a4tb6BDAfke, TpBAit, xzTXjNge;
    xIWhuno = (950 - 949);
    for (YSmcC2IQZ = (991 - 991); YSmcC2IQZ < (221 - 216); YSmcC2IQZ = YSmcC2IQZ +(801 - 800)) {
        pkScjeU = (171 - 171);
        while (pkScjeU < (757 - 752)) {
            scanf ("%d", &ld31JXYv[YSmcC2IQZ][pkScjeU]);
            pkScjeU++;
        }
    }
    scanf ("%d%d", &a4tb6BDAfke, &TpBAit);
    ef2vIl9 (a4tb6BDAfke, TpBAit);
    if (xIWhuno != (350 - 350)) {
        YSmcC2IQZ = (527 - 527);
        while (YSmcC2IQZ < (604 - 599)) {
            bDUEdWn70 (YSmcC2IQZ);
            YSmcC2IQZ = YSmcC2IQZ +1;
        }
    }
    return 0;
}

