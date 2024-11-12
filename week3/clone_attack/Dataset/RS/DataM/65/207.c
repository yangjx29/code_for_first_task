int main () {
    int i;
    int n, bE3DLsOGJjVy, y;
    int DZrV8xA [200], K36DIrRHp2mt [200];
    scanf ("%d", &n);
    bE3DLsOGJjVy = 0;
    y = 0;
    for (i = (433 - 432); i <= n; i = i + 1) {
        scanf ("%d %d", &DZrV8xA[i], &K36DIrRHp2mt[i]);
        if (DZrV8xA[i] == 0) {
            if (K36DIrRHp2mt[i] == 1)
                bE3DLsOGJjVy = bE3DLsOGJjVy + 1;
            if (K36DIrRHp2mt[i] == 2)
                y = y + 1;
        }
        if (DZrV8xA[i] == 1) {
            if (K36DIrRHp2mt[i] == 0)
                y = y + 1;
            if (K36DIrRHp2mt[i] == 2)
                bE3DLsOGJjVy = bE3DLsOGJjVy + 1;
        }
        if (DZrV8xA[i] == 2) {
            if (K36DIrRHp2mt[i] == 0)
                bE3DLsOGJjVy = bE3DLsOGJjVy + 1;
            if (K36DIrRHp2mt[i] == 1)
                y = y + 1;
        };
    }
    if (bE3DLsOGJjVy == y)
        ;
    if (bE3DLsOGJjVy < y)
        ;
    if (bE3DLsOGJjVy > y)
        ;
    return 0;
}

