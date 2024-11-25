int main () {
    int hLd3JznE2;
    int kfnr37KhQy9x;
    struct   student {
        char name [(1076 - 976)];
        int FecvIOCFfaJS;
        int ping;
        char xtLEWmHpge1;
        char xi;
        int YBjaDzTYuOo;
    }
    lp47TcmGCe6 [(1451 - 451)];
    int RMd8oGiJ;
    int x34nKfqL9 [(1468 - 468)] = {(229 - 229)};
    int qYk0mGvHnSe = (691 - 691);
    hLd3JznE2 = 0;
    scanf ("%d", &RMd8oGiJ);
    for (kfnr37KhQy9x = (54 - 54); RMd8oGiJ > kfnr37KhQy9x; kfnr37KhQy9x++) {
        scanf ("%s %d %d %c %c %d", lp47TcmGCe6[kfnr37KhQy9x].name, &lp47TcmGCe6[kfnr37KhQy9x].FecvIOCFfaJS, &lp47TcmGCe6[kfnr37KhQy9x].ping, &lp47TcmGCe6[kfnr37KhQy9x].xtLEWmHpge1, &lp47TcmGCe6[kfnr37KhQy9x].xi, &lp47TcmGCe6[kfnr37KhQy9x].YBjaDzTYuOo);
    }
    for (kfnr37KhQy9x = (196 - 196); RMd8oGiJ > kfnr37KhQy9x; kfnr37KhQy9x++) {
        if (lp47TcmGCe6[kfnr37KhQy9x].FecvIOCFfaJS > (479 - 399) && lp47TcmGCe6[kfnr37KhQy9x].YBjaDzTYuOo != (131 - 131)) {
            x34nKfqL9[kfnr37KhQy9x] = x34nKfqL9[kfnr37KhQy9x] + 8000;
        }
        if ((640 - 555) < lp47TcmGCe6[kfnr37KhQy9x].FecvIOCFfaJS && 80 < lp47TcmGCe6[kfnr37KhQy9x].ping) {
            x34nKfqL9[kfnr37KhQy9x] += 4000;
        }
        if ((1087 - 997) < lp47TcmGCe6[kfnr37KhQy9x].FecvIOCFfaJS) {
            x34nKfqL9[kfnr37KhQy9x] += (2206 - 206);
        }
        if (lp47TcmGCe6[kfnr37KhQy9x].FecvIOCFfaJS > (494 - 409) && lp47TcmGCe6[kfnr37KhQy9x].xi == 'Y') {
            x34nKfqL9[kfnr37KhQy9x] = x34nKfqL9[kfnr37KhQy9x] + (1593 - 593);
        }
        if (lp47TcmGCe6[kfnr37KhQy9x].ping > 80 && lp47TcmGCe6[kfnr37KhQy9x].xtLEWmHpge1 == 'Y') {
            x34nKfqL9[kfnr37KhQy9x] = x34nKfqL9[kfnr37KhQy9x] + (1606 - 756);
        }
    }
    for (kfnr37KhQy9x = 0; kfnr37KhQy9x < RMd8oGiJ; kfnr37KhQy9x++) {
        qYk0mGvHnSe = qYk0mGvHnSe + x34nKfqL9[kfnr37KhQy9x];
    }
    for (kfnr37KhQy9x = 0; kfnr37KhQy9x < RMd8oGiJ; kfnr37KhQy9x++) {
        if (x34nKfqL9[hLd3JznE2] < x34nKfqL9[kfnr37KhQy9x]) {
            hLd3JznE2 = kfnr37KhQy9x;
        }
    }
    printf ("%s\n%d\n%d", lp47TcmGCe6[hLd3JznE2].name, x34nKfqL9[hLd3JznE2], qYk0mGvHnSe);
    return 0;
}

