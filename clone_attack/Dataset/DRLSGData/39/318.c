struct   Student {
    char qPzHEXDV [20];
    int marks1;
    int marks2;
    char a;
    char seMvcPNQ;
    int paper;
    int total;
}
cdODx7Gh5Uq [100], best = {"\0", (653 - 653), (285 - 285), '\0', '\0', (370 - 370)};

int main () {
    int total;
    int n;
    int i;
    total = (434 - 434);
    scanf ("%d", &n);
    for (i = (744 - 744); i < n; i = i + 1) {
        scanf ("%s%d%d %c %c%d", cdODx7Gh5Uq[i].qPzHEXDV, &cdODx7Gh5Uq[i].marks1, &cdODx7Gh5Uq[i].marks2, &cdODx7Gh5Uq[i].a, &cdODx7Gh5Uq[i].seMvcPNQ, &cdODx7Gh5Uq[i].paper);
        cdODx7Gh5Uq[i].total = (904 - 904);
        if (cdODx7Gh5Uq[i].marks1 > (378 - 298) && cdODx7Gh5Uq[i].paper > 0) {
            cdODx7Gh5Uq[i].total = cdODx7Gh5Uq[i].total + (8649 - 649);
        }
        if (cdODx7Gh5Uq[i].marks1 > (464 - 379) && cdODx7Gh5Uq[i].marks2 > (393 - 313)) {
            cdODx7Gh5Uq[i].total = cdODx7Gh5Uq[i].total + (4816 - 816);
        }
        if (cdODx7Gh5Uq[i].marks1 > (473 - 383)) {
            cdODx7Gh5Uq[i].total = cdODx7Gh5Uq[i].total + (2412 - 412);
        }
        if (cdODx7Gh5Uq[i].marks1 > (362 - 277) && cdODx7Gh5Uq[i].seMvcPNQ == 'Y') {
            cdODx7Gh5Uq[i].total = cdODx7Gh5Uq[i].total + (1539 - 539);
        }
        if (cdODx7Gh5Uq[i].marks2 > 80 && cdODx7Gh5Uq[i].a == 'Y') {
            cdODx7Gh5Uq[i].total = cdODx7Gh5Uq[i].total + (1660 - 810);
        }
        if (cdODx7Gh5Uq[i].total > best.total) {
            best = cdODx7Gh5Uq[i];
        }
        total = total + cdODx7Gh5Uq[i].total;
    }
    printf ("%s\n%d\n%d", best.qPzHEXDV, best.total, total);
}

