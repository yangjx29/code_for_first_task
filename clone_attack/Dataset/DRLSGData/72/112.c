int main () {
    int rAh2VyZWvH, hCjUAH, SQw4p80cEsB, IK5C2MG9, cRrZB1KY = (496 - 496), jLihZNtImJKz = 0;
    int UMeAQR3CF [(578 - 557)] [21];
    scanf ("%d%d", &rAh2VyZWvH, &hCjUAH);
    for (SQw4p80cEsB = (717 - 716); rAh2VyZWvH >= SQw4p80cEsB; SQw4p80cEsB++) {
        for (IK5C2MG9 = (87 - 86); hCjUAH >= IK5C2MG9; IK5C2MG9++) {
            scanf ("%d", &(UMeAQR3CF[SQw4p80cEsB][IK5C2MG9]));
        }
    }
    for (IK5C2MG9 = 0; hCjUAH + 1 >= IK5C2MG9; IK5C2MG9++) {
        UMeAQR3CF[0][IK5C2MG9] = (164 - 160);
        UMeAQR3CF[rAh2VyZWvH + 1][IK5C2MG9] = 4;
    }
    for (IK5C2MG9 = 0; rAh2VyZWvH + 1 >= IK5C2MG9; IK5C2MG9++) {
        UMeAQR3CF[IK5C2MG9][0] = 4;
        UMeAQR3CF[IK5C2MG9][hCjUAH + 1] = 4;
    }
    for (SQw4p80cEsB = 1; rAh2VyZWvH >= SQw4p80cEsB; SQw4p80cEsB++) {
        for (IK5C2MG9 = 1; IK5C2MG9 <= hCjUAH; IK5C2MG9++) {
            if ((UMeAQR3CF[SQw4p80cEsB][IK5C2MG9] >= UMeAQR3CF[SQw4p80cEsB -1][IK5C2MG9]) && (UMeAQR3CF[SQw4p80cEsB][IK5C2MG9] >= UMeAQR3CF[SQw4p80cEsB +1][IK5C2MG9]) && (UMeAQR3CF[SQw4p80cEsB][IK5C2MG9] >= UMeAQR3CF[SQw4p80cEsB][IK5C2MG9 -1]) && (UMeAQR3CF[SQw4p80cEsB][IK5C2MG9] >= UMeAQR3CF[SQw4p80cEsB][IK5C2MG9 +1])) {
                printf ("%d %d\n", SQw4p80cEsB -1, IK5C2MG9 -1);
            }
        }
    }
    return 0;
}

