void  main () {
    int AepjCIJ;
    int ENtBnceCWXK;
    int QQeOnb0;
    int H6XxvBSy;
    int zkHc8QqyrDUi [(1003 - 903)];
    int i;
    AepjCIJ = (433 - 433);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    ENtBnceCWXK = (629 - 629);
    QQeOnb0 = (523 - 523);
    scanf ("%d", &H6XxvBSy);
    {
        i = 0;
        while (H6XxvBSy > i) {
            scanf ("%d", &zkHc8QqyrDUi[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (H6XxvBSy > i) {
            if (zkHc8QqyrDUi[i] > AepjCIJ) {
                AepjCIJ = zkHc8QqyrDUi[i];
                QQeOnb0 = i;
            }
            i = i + 1;
        };
    }
    printf ("%d\n", AepjCIJ);
    {
        i = 0;
        while (i < H6XxvBSy) {
            if (zkHc8QqyrDUi[i] > ENtBnceCWXK &&zkHc8QqyrDUi[i] != AepjCIJ)
                ENtBnceCWXK = zkHc8QqyrDUi[i];
            i = i + 1;
        };
    }
    printf ("%d", ENtBnceCWXK);
}

