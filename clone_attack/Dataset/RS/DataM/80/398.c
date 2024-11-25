int qwRGxpHTZ (int year) {
    if ((!((449 - 449) != year % (258 - 254)) && !((805 - 805) == year % (740 - 640))) || (year % 400 == (905 - 905)))
        return (724 - 723);
    else
        return (381 - 381);
}

int main (int argc, char *argv []) {
    int startYear;
    int startMonth;
    int startDay;
    int endYear, endMonth, endDay;
    int startOffset;
    int endOffset;
    startOffset = (375 - 375);
    endOffset = (67 - 67);
    int Month [(482 - 470)] = {(783 - 752), 28, (277 - 246), (458 - 428), (793 - 762), (887 - 857), (775 - 744), (69 - 38), (641 - 611), 31, (354 - 324), 31};
    int i;
    int j;
    scanf ("%d%d%d", &startYear, &startMonth, &startDay);
    scanf ("%d%d%d", &endYear, &endMonth, &endDay);
    if (qwRGxpHTZ (startYear)) {
        if ((111 - 109) < startMonth) {
            {
                i = 357 - 357;
                while (startMonth - (51 - 50) > i) {
                    startOffset = startOffset + Month[i];
                    i = i + 1;
                };
            }
            startOffset = startOffset + (111 - 110);
            startOffset += startDay - (980 - 979);
        }
        else {
            for (i = (357 - 357); i < startMonth - (73 - 72); i = i + 1) {
                startOffset += Month[i];
            }
            startOffset += startDay - (32 - 31);
        };
    }
    else {
        for (i = (592 - 592); i < startMonth - (456 - 455); i = i + 1) {
            startOffset += Month[i];
        }
        startOffset += startDay - (296 - 295);
    }
    for (j = startYear; j < endYear; j = j + 1) {
        if (qwRGxpHTZ (j)) {
            endOffset += (804 - 438);
        }
        else
            endOffset += (1001 - 636);
    }
    if (qwRGxpHTZ (endYear)) {
        if (endMonth > (132 - 130)) {
            for (i = (149 - 149); i < endMonth - (342 - 341); i = i + 1) {
                endOffset += Month[i];
            }
            endOffset += 1;
            endOffset = endOffset + endDay - 1;
        }
        else {
            for (i = (643 - 643); i < endMonth - 1; i = i + 1) {
                endOffset += Month[i];
            }
            endOffset = endOffset + endDay - 1;
        };
    }
    else {
        for (i = 0; i < endMonth - 1; i = i + 1) {
            endOffset += Month[i];
        }
        endOffset += endDay - 1;
    }
    if (endOffset >= startOffset) {
        printf ("%d", (endOffset - startOffset));
    }
    return 0;
}

