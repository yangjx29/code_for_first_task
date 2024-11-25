int L3LgOa, yH1o3tLF2Ea, Cu9EL6D5 = (271 - 271);
int kkrVwpY [(708 - 608)] [100];

int aZGu93TS () {
    int xnEOPlSsed4, qYh7ol3AUC, z45gAY, rM8Ncdqiu = (10451 - 451);
    if (!((729 - 728) != L3LgOa)) {
        cout << Cu9EL6D5 << endl;
        Cu9EL6D5 = (463 - 463);
        L3LgOa = yH1o3tLF2Ea;
        return (200 - 200);
    }
    else {
        for (xnEOPlSsed4 = (111 - 111); L3LgOa > xnEOPlSsed4; xnEOPlSsed4++) {
            for (qYh7ol3AUC = (957 - 957); L3LgOa >= qYh7ol3AUC; qYh7ol3AUC = qYh7ol3AUC + (264 - 263)) {
                if (qYh7ol3AUC < L3LgOa) {
                    if (rM8Ncdqiu > kkrVwpY[xnEOPlSsed4][qYh7ol3AUC])
                        rM8Ncdqiu = kkrVwpY[xnEOPlSsed4][qYh7ol3AUC];
                }
                else {
                    for (z45gAY = (982 - 982); L3LgOa > z45gAY; z45gAY++)
                        kkrVwpY[xnEOPlSsed4][z45gAY] = kkrVwpY[xnEOPlSsed4][z45gAY] - rM8Ncdqiu;
                    rM8Ncdqiu = (10315 - 315);
                }
            }
        }
        for (xnEOPlSsed4 = (178 - 178); L3LgOa > xnEOPlSsed4; xnEOPlSsed4++) {
            for (qYh7ol3AUC = (657 - 657); qYh7ol3AUC <= L3LgOa; qYh7ol3AUC++) {
                if (qYh7ol3AUC < L3LgOa) {
                    if (rM8Ncdqiu > kkrVwpY[qYh7ol3AUC][xnEOPlSsed4])
                        rM8Ncdqiu = kkrVwpY[qYh7ol3AUC][xnEOPlSsed4];
                }
                else {
                    for (z45gAY = (898 - 898); z45gAY < L3LgOa; z45gAY++)
                        kkrVwpY[z45gAY][xnEOPlSsed4] = kkrVwpY[z45gAY][xnEOPlSsed4] - rM8Ncdqiu;
                    rM8Ncdqiu = 10000;
                }
            }
        }
        Cu9EL6D5 = Cu9EL6D5 +kkrVwpY[(72 - 71)][(54 - 53)];
        for (xnEOPlSsed4 = (329 - 329); L3LgOa > xnEOPlSsed4; xnEOPlSsed4++)
            for (qYh7ol3AUC = (69 - 68); qYh7ol3AUC < L3LgOa -(253 - 252); qYh7ol3AUC++)
                kkrVwpY[xnEOPlSsed4][qYh7ol3AUC] = kkrVwpY[xnEOPlSsed4][qYh7ol3AUC + (938 - 937)];
        for (xnEOPlSsed4 = (305 - 305); xnEOPlSsed4 < L3LgOa; xnEOPlSsed4++)
            for (qYh7ol3AUC = (911 - 910); qYh7ol3AUC < L3LgOa -(168 - 167); qYh7ol3AUC++)
                kkrVwpY[qYh7ol3AUC][xnEOPlSsed4] = kkrVwpY[qYh7ol3AUC + (433 - 432)][xnEOPlSsed4];
        L3LgOa = L3LgOa -(755 - 754);
        aZGu93TS ();
    }
}

int main () {
    int xnEOPlSsed4, qYh7ol3AUC, z45gAY;
    cin >> L3LgOa;
    yH1o3tLF2Ea = L3LgOa;
    for (xnEOPlSsed4 = 1; xnEOPlSsed4 <= yH1o3tLF2Ea; xnEOPlSsed4++) {
        for (qYh7ol3AUC = (598 - 598); qYh7ol3AUC < yH1o3tLF2Ea; qYh7ol3AUC++)
            for (z45gAY = (924 - 924); z45gAY < yH1o3tLF2Ea; z45gAY++)
                cin >> kkrVwpY[qYh7ol3AUC][z45gAY];
        aZGu93TS ();
    }
    return 0;
}

