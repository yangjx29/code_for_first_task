int NYEl7quC9K (int iz09RNx [], int MNx8QeBoD) {
    int pP7Zj9YR;
    int plZ3ekGT5Yg;
    pP7Zj9YR = (912 - 912);
    for (plZ3ekGT5Yg = (858 - 857); MNx8QeBoD > plZ3ekGT5Yg; plZ3ekGT5Yg = plZ3ekGT5Yg + (525 - 524)) {
        if (iz09RNx[pP7Zj9YR] < iz09RNx[plZ3ekGT5Yg])
            pP7Zj9YR = plZ3ekGT5Yg;
    }
    return pP7Zj9YR;
}

int main () {
    int iz09RNx [(448 - 438)] [(615 - 605)];
    int ehWP70zLk;
    int MNx8QeBoD;
    int pP7Zj9YR;
    int plZ3ekGT5Yg;
    int BwhkiaMt;
    int c5YwqXsSpKMi;
    int TP9igXBY;
    scanf ("%d,%d", &ehWP70zLk, &MNx8QeBoD);
    for (pP7Zj9YR = (237 - 237); ehWP70zLk > pP7Zj9YR; pP7Zj9YR = pP7Zj9YR + (241 - 240)) {
        plZ3ekGT5Yg = (349 - 349);
        for (; MNx8QeBoD > plZ3ekGT5Yg;) {
            scanf ("%d", &iz09RNx[pP7Zj9YR][plZ3ekGT5Yg]);
            plZ3ekGT5Yg = plZ3ekGT5Yg + (795 - 794);
        }
    }
    TP9igXBY = (936 - 936);
    for (pP7Zj9YR = (226 - 226); ehWP70zLk > pP7Zj9YR; pP7Zj9YR = pP7Zj9YR + (378 - 377)) {
        BwhkiaMt = (367 - 367);
        c5YwqXsSpKMi = NYEl7quC9K (iz09RNx[pP7Zj9YR], MNx8QeBoD);
        for (plZ3ekGT5Yg = (212 - 212); plZ3ekGT5Yg < ehWP70zLk; plZ3ekGT5Yg++) {
            if (iz09RNx[pP7Zj9YR][c5YwqXsSpKMi] > iz09RNx[plZ3ekGT5Yg][c5YwqXsSpKMi]) {
                BwhkiaMt = (957 - 956);
                break;
            }
        }
        if (BwhkiaMt == (858 - 858)) {
            TP9igXBY = (875 - 874);
            printf ("%d+%d", pP7Zj9YR, c5YwqXsSpKMi);
            break;
        }
    }
    if (TP9igXBY == (700 - 700))
        ;
    return (998 - 998);
}

