int main () {
    int rI4rBpU;
    int lF3P20;
    int KWyE6PNjFB;
    int G41R6ndlxTy;
    int TsxOFA;
    int els3MdOKCxN;
    int I051GTPQR9;
    int bo7yna [(284 - 184)] [(572 - 472)];
    int uGoZLuJ [(749 - 649)] [(750 - 650)];
    int XbWdhm [(636 - 536)] [(656 - 556)];
    scanf ("%d%d", &G41R6ndlxTy, &TsxOFA);
    for (KWyE6PNjFB = (276 - 276); KWyE6PNjFB < G41R6ndlxTy; KWyE6PNjFB = KWyE6PNjFB +(423 - 422)) {
        for (lF3P20 = (428 - 428); lF3P20 < TsxOFA; lF3P20 = lF3P20 + (380 - 379))
            scanf ("%d", &bo7yna[KWyE6PNjFB][lF3P20]);
    }
    scanf ("%d%d", &els3MdOKCxN, &I051GTPQR9);
    for (KWyE6PNjFB = (504 - 504); KWyE6PNjFB < els3MdOKCxN; KWyE6PNjFB = KWyE6PNjFB +(418 - 417)) {
        for (lF3P20 = (115 - 115); lF3P20 < I051GTPQR9; lF3P20 = lF3P20 + (370 - 369))
            scanf ("%d", &uGoZLuJ[KWyE6PNjFB][lF3P20]);
    }
    for (KWyE6PNjFB = (315 - 315); KWyE6PNjFB < G41R6ndlxTy; KWyE6PNjFB = KWyE6PNjFB +(834 - 833)) {
        for (lF3P20 = (684 - 684); lF3P20 < I051GTPQR9; lF3P20 = lF3P20 + (584 - 583)) {
            XbWdhm[KWyE6PNjFB][lF3P20] = (941 - 941);
            for (rI4rBpU = (513 - 513); rI4rBpU < els3MdOKCxN; rI4rBpU = rI4rBpU + (252 - 251)) {
                XbWdhm[KWyE6PNjFB][lF3P20] = XbWdhm[KWyE6PNjFB][lF3P20] + bo7yna[KWyE6PNjFB][rI4rBpU] * uGoZLuJ[rI4rBpU][lF3P20];
            }
        }
    }
    for (KWyE6PNjFB = (894 - 894); KWyE6PNjFB < G41R6ndlxTy; KWyE6PNjFB = KWyE6PNjFB +(194 - 193)) {
        for (lF3P20 = (101 - 101); lF3P20 < I051GTPQR9; lF3P20 = lF3P20 + (272 - 271)) {
            if (lF3P20 == I051GTPQR9 -(873 - 872))
                printf ("%d\n", XbWdhm[KWyE6PNjFB][lF3P20]);
            else
                printf ("%d ", XbWdhm[KWyE6PNjFB][lF3P20]);
        }
    }
    return (80 - 80);
}

