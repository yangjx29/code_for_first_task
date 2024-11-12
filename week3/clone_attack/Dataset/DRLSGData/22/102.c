int main () {
    int vQnkN8g;
    char aaMO3iDWc;
    int k;
    int ftyBdSgD;
    int n;
    int sEl4qYOJIi [300];
    for (vQnkN8g = 0;; vQnkN8g++) {
        scanf ("%d", &sEl4qYOJIi[vQnkN8g]);
        scanf ("%c", &aaMO3iDWc);
        if (aaMO3iDWc == '\n') {
            n = vQnkN8g + 1;
            break;
        }
    }
    if (n == 1)
        ;
    else {
        for (vQnkN8g = 0; vQnkN8g < n - 1; vQnkN8g++)
            for (ftyBdSgD = 0; ftyBdSgD < n - 1 - vQnkN8g; ftyBdSgD++) {
                if (sEl4qYOJIi[ftyBdSgD] > sEl4qYOJIi[ftyBdSgD + 1]) {
                    k = sEl4qYOJIi[ftyBdSgD + 1];
                    sEl4qYOJIi[ftyBdSgD + 1] = sEl4qYOJIi[ftyBdSgD];
                    sEl4qYOJIi[ftyBdSgD] = k;
                }
            }
        for (vQnkN8g = n - 2; vQnkN8g >= 0; vQnkN8g--) {
            if (sEl4qYOJIi[vQnkN8g] != sEl4qYOJIi[n - 1]) {
                printf ("%d", sEl4qYOJIi[vQnkN8g]);
                break;
            }
            else {
                if (vQnkN8g != 0)
                    continue;
                else
                    ;
            }
        }
    }
    return 0;
}

