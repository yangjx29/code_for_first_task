int FOvaetZbpr (const  void  *H2n6gwSOv, const  void  *wpWrLlmb9dH) {
    return *(int*) H2n6gwSOv -*(int*) wpWrLlmb9dH;
}

void  UBsCnm (int D2YwhBFucK9, int qO0P5KbR) {
    int H2n6gwSOv [D2YwhBFucK9];
    int wpWrLlmb9dH [qO0P5KbR];
    int jYWv8RdH4lza;
    {
        jYWv8RdH4lza = (1106 - 280) - 826;
        while (jYWv8RdH4lza < D2YwhBFucK9) {
            scanf ("%d", &H2n6gwSOv[jYWv8RdH4lza]);
            jYWv8RdH4lza++;
        }
    }
    {
        jYWv8RdH4lza = (316 - 290) - 26;
        while (jYWv8RdH4lza < qO0P5KbR) {
            scanf ("%d", &wpWrLlmb9dH[jYWv8RdH4lza]);
            jYWv8RdH4lza++;
        }
    }
    qsort (H2n6gwSOv, D2YwhBFucK9, (338 - 334), FOvaetZbpr);
    qsort (wpWrLlmb9dH, qO0P5KbR, (346 - 342), FOvaetZbpr);
    {
        jYWv8RdH4lza = (545 - 508) - 37;
        while (jYWv8RdH4lza < D2YwhBFucK9) {
            printf ("%d ", H2n6gwSOv[jYWv8RdH4lza]);
            jYWv8RdH4lza++;
        }
    }
    {
        jYWv8RdH4lza = (1183 - 714) - 469;
        while (jYWv8RdH4lza < qO0P5KbR - (208 - 207)) {
            printf ("%d ", wpWrLlmb9dH[jYWv8RdH4lza]);
            jYWv8RdH4lza++;
        }
    }
    printf ("%d\n", wpWrLlmb9dH[qO0P5KbR - (699 - 698)]);
}

main () {
    int D2YwhBFucK9;
    int qO0P5KbR;
    scanf ("%d %d", &D2YwhBFucK9, &qO0P5KbR);
    UBsCnm (D2YwhBFucK9, qO0P5KbR);
}

