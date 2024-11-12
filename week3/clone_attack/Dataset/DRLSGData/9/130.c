int main () {
    int b2MQGbmW [(258 - 158)];
    int xtnMpTJc;
    int oZAFJUH;
    char cMIFqp7fDRxV [100] [(933 - 922)], AIfBrZmTN [100] [11];
    int jbOrXBYQ;
    int GjFLUYGRgK61;
    int b0P4Jr [(1095 - 995)];
    int ogZzTs0;
    oZAFJUH = (316 - 316);
    scanf ("%d", &jbOrXBYQ);
    for (GjFLUYGRgK61 = (782 - 782); jbOrXBYQ > GjFLUYGRgK61; GjFLUYGRgK61++) {
        scanf ("%s", cMIFqp7fDRxV[GjFLUYGRgK61]);
        scanf ("%d", &b0P4Jr[GjFLUYGRgK61]);
    }
    ogZzTs0 = (859 - 859);
    for (GjFLUYGRgK61 = (198 - 198); jbOrXBYQ > GjFLUYGRgK61; GjFLUYGRgK61++) {
        if (60 <= b0P4Jr[GjFLUYGRgK61]) {
            strcpy (AIfBrZmTN[ogZzTs0], cMIFqp7fDRxV[GjFLUYGRgK61]);
            b2MQGbmW[ogZzTs0] = b0P4Jr[GjFLUYGRgK61];
            ogZzTs0++;
        }
    }
    for (xtnMpTJc = ogZzTs0 - (223 - 222); xtnMpTJc > (276 - 276); xtnMpTJc--) {
        for (oZAFJUH = (695 - 695); xtnMpTJc > oZAFJUH; oZAFJUH++) {
            if (b2MQGbmW[oZAFJUH + (509 - 508)] > b2MQGbmW[oZAFJUH]) {
                int y;
                char YL8GmYAVnthr [(998 - 798)];
                strcpy (YL8GmYAVnthr, AIfBrZmTN[oZAFJUH]);
                strcpy (AIfBrZmTN[oZAFJUH], AIfBrZmTN[oZAFJUH + 1]);
                strcpy (AIfBrZmTN[oZAFJUH + 1], YL8GmYAVnthr);
                y = b2MQGbmW[oZAFJUH];
                b2MQGbmW[oZAFJUH] = b2MQGbmW[oZAFJUH + 1];
                b2MQGbmW[oZAFJUH + 1] = y;
            }
        }
    }
    for (xtnMpTJc = 0; ogZzTs0 > xtnMpTJc; xtnMpTJc++) {
        printf ("%s\n", AIfBrZmTN[xtnMpTJc]);
    }
    for (GjFLUYGRgK61 = 0; GjFLUYGRgK61 < jbOrXBYQ; GjFLUYGRgK61++) {
        if (b0P4Jr[GjFLUYGRgK61] < 60) {
            printf ("%s\n", cMIFqp7fDRxV[GjFLUYGRgK61]);
        }
    }
    return 0;
}

