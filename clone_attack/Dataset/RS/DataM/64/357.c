int main () {
    double  gApZfcsl3deH;
    gApZfcsl3deH = 0;
    float MVGD0d [110], temp1;
    int a [(808 - 698)] [3], n, rKMFo4rklVw, i, j, jz6Uxdf7aZwT = (586 - 586), MvmP7KpI6HBk [1000] [(638 - 636)], IeItOGRPS;
    scanf ("%d", &n);
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
    for (i = 0; n > i; i = i + 1)
        for (j = 0; 3 > j; j = j + 1)
            scanf ("%d", &a[i][j]);
    for (i = 0; n > i; i = i + 1) {
        rKMFo4rklVw = i + 1;
        while (rKMFo4rklVw < n) {
            gApZfcsl3deH = 0;
            for (j = 0; j < 3; j = j + 1)
                gApZfcsl3deH += (a[rKMFo4rklVw][j] - a[i][j]) * (a[rKMFo4rklVw][j] - a[i][j]);
            MVGD0d[jz6Uxdf7aZwT] = sqrt (gApZfcsl3deH);
            MvmP7KpI6HBk[jz6Uxdf7aZwT][0] = i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            MvmP7KpI6HBk[jz6Uxdf7aZwT][1] = rKMFo4rklVw;
            rKMFo4rklVw = rKMFo4rklVw + 1;
            jz6Uxdf7aZwT++;
        };
    }
    for (j = 0; jz6Uxdf7aZwT - 1 > j; j++)
        for (i = 0; i < jz6Uxdf7aZwT - j - 1; i = i + 1)
            if (MVGD0d[i + 1] > MVGD0d[i]) {
                temp1 = MVGD0d[i];
                MVGD0d[i] = MVGD0d[i + 1];
                MVGD0d[i + 1] = temp1;
                for (rKMFo4rklVw = 0; 2 > rKMFo4rklVw; rKMFo4rklVw++) {
                    IeItOGRPS = MvmP7KpI6HBk[i][rKMFo4rklVw];
                    MvmP7KpI6HBk[i][rKMFo4rklVw] = MvmP7KpI6HBk[i + 1][rKMFo4rklVw];
                    MvmP7KpI6HBk[i + 1][rKMFo4rklVw] = IeItOGRPS;
                };
            }
    for (i = 0; i < jz6Uxdf7aZwT; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[MvmP7KpI6HBk[i][0]][0], a[MvmP7KpI6HBk[i][0]][1], a[MvmP7KpI6HBk[i][0]][2], a[MvmP7KpI6HBk[i][1]][0], a[MvmP7KpI6HBk[i][1]][1], a[MvmP7KpI6HBk[i][1]][2], MVGD0d[i]);
    return 0;
}

