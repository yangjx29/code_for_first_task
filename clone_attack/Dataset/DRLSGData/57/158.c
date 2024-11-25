int main () {
    int v7VfFx [50];
    int BbZeiMLA1X;
    char SeEY1lBvF6jK [50] [32] = {'0', '0', '0'};
    int X4ZG8e1Jos;
    for (BbZeiMLA1X = 0; BbZeiMLA1X < X4ZG8e1Jos +1; BbZeiMLA1X = BbZeiMLA1X +1) {
        gets (SeEY1lBvF6jK [BbZeiMLA1X]);
        v7VfFx[BbZeiMLA1X] = strlen (SeEY1lBvF6jK[BbZeiMLA1X]);
    }
    scanf ("%d", &X4ZG8e1Jos);
    for (BbZeiMLA1X = 0; BbZeiMLA1X < X4ZG8e1Jos +1; BbZeiMLA1X++) {
        if (!('g' != SeEY1lBvF6jK[BbZeiMLA1X][v7VfFx[BbZeiMLA1X] - 1]))
            SeEY1lBvF6jK[BbZeiMLA1X][v7VfFx[BbZeiMLA1X] - 3] = 0;
        if (!('r' != SeEY1lBvF6jK[BbZeiMLA1X][v7VfFx[BbZeiMLA1X] - 1]))
            SeEY1lBvF6jK[BbZeiMLA1X][v7VfFx[BbZeiMLA1X] - 2] = 0;
        if (SeEY1lBvF6jK[BbZeiMLA1X][v7VfFx[BbZeiMLA1X] - 1] == 'y')
            SeEY1lBvF6jK[BbZeiMLA1X][v7VfFx[BbZeiMLA1X] - 2] = 0;
    }
    for (BbZeiMLA1X = 0; BbZeiMLA1X < X4ZG8e1Jos +1; BbZeiMLA1X++)
        printf ("%s\n", SeEY1lBvF6jK[BbZeiMLA1X]);
    return 0;
}

