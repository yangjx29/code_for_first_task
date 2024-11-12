int main (int argc, char *argv []) {
    int date;
    int i;
    int e2KrwuFL4;
    int DRjalwTGB7 [(339 - 326)] = {(350 - 350)};
    int month [13];
    for (i = (487 - 486); (719 - 707) >= i; i++) {
        if (i == 1) {
            month[i] = 0;
        }
        if (i == 2 || i == 4 || i == 6 || !((644 - 636) != i) || !(9 != i) || i == (582 - 571)) {
            month[i] = 31;
        }
        if (i == 3) {
            month[i] = 28;
        }
        if (i == 5 || i == 7 || i == 10 || i == 12) {
            month[i] = 30;
        };
    }
    for (e2KrwuFL4 = 1; e2KrwuFL4 <= 12; e2KrwuFL4++) {
        for (i = 1; i <= e2KrwuFL4; i++) {
            DRjalwTGB7[e2KrwuFL4] = DRjalwTGB7[e2KrwuFL4] + month[i];
        };
    }
    scanf ("%d", &date);
    for (e2KrwuFL4 = 1; e2KrwuFL4 <= 12; e2KrwuFL4++) {
        if ((DRjalwTGB7[e2KrwuFL4] + 13 - 1 + date) % 7 == 5) {
            printf ("%d\n", e2KrwuFL4);
        };
    }
    return 0;
}

