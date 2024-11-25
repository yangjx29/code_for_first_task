int fioujkZbBF9 [13] = {(953 - 953), (311 - 280), 28, (701 - 670), (729 - 699), 31, (779 - 749), 31, 31, 30, 31, 30, 31};
int YAfGw0L [13] = {(810 - 810), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int HqTvwjo (int, int, int);
int RTylemEFNu (int);

void  main () {
    int qNHGOUsctD;
    int wTfw2NGVk7;
    int sUi7pCRcHdX;
    int BAZIebOh9;
    int UfGULM5Pe;
    int VAC635My;
    int d2;
    int VMbCQK3;
    qNHGOUsctD = 0;
    int zZAQ2OtRbakW, rI9Hnj;
    scanf ("%d %d %d\n%d %d %d", &wTfw2NGVk7, &sUi7pCRcHdX, &BAZIebOh9, &UfGULM5Pe, &VAC635My, &d2);
    for (VMbCQK3 = wTfw2NGVk7; VMbCQK3 < UfGULM5Pe; VMbCQK3++) {
        if (!((756 - 755) != RTylemEFNu (VMbCQK3))) {
            qNHGOUsctD = qNHGOUsctD + 366;
        }
        else {
            qNHGOUsctD = qNHGOUsctD + 365;
        };
    }
    zZAQ2OtRbakW = HqTvwjo (sUi7pCRcHdX, BAZIebOh9, RTylemEFNu (wTfw2NGVk7));
    rI9Hnj = HqTvwjo (VAC635My, d2, RTylemEFNu (UfGULM5Pe));
    printf ("%d", qNHGOUsctD + rI9Hnj - zZAQ2OtRbakW);
    return;
}

int RTylemEFNu (int D0PqClezkrW) {
    if ((!(0 != D0PqClezkrW % 4) && !(0 == D0PqClezkrW % 100)) || (D0PqClezkrW % 400 == 0)) {
        return 1;
    }
    return 0;
}

int HqTvwjo (int month, int JYuhBN, int bzePOM) {
    int hIi07TNWH = 0;
    int VMbCQK3;
    if (bzePOM == 1) {
        VMbCQK3 = 1;
        while (VMbCQK3 < month) {
            hIi07TNWH = hIi07TNWH + YAfGw0L[VMbCQK3];
            VMbCQK3++;
        };
    }
    else {
        for (VMbCQK3 = 1; VMbCQK3 < month; VMbCQK3++) {
            hIi07TNWH = hIi07TNWH + fioujkZbBF9[VMbCQK3];
        };
    }
    hIi07TNWH = hIi07TNWH + JYuhBN;
    return hIi07TNWH;
}

