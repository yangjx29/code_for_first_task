int main () {
    int UqgTH3K;
    int BYFbSud7qgx5;
    int GoI2pPwHgbM;
    int mlyn8L9qG6xM [20];
    getchar ();
    scanf ("%d", &GoI2pPwHgbM);
    mlyn8L9qG6xM[0] = 1;
    mlyn8L9qG6xM[1] = 1;
    {
        BYFbSud7qgx5 = 2;
        for (; 20 > BYFbSud7qgx5;) {
            mlyn8L9qG6xM[BYFbSud7qgx5] = mlyn8L9qG6xM[BYFbSud7qgx5 -1] + mlyn8L9qG6xM[BYFbSud7qgx5 -2];
            BYFbSud7qgx5 = BYFbSud7qgx5 +1;
        }
    }
    {
        BYFbSud7qgx5 = 0;
        while (GoI2pPwHgbM > BYFbSud7qgx5) {
            printf ("%d\n", mlyn8L9qG6xM[UqgTH3K -1]);
            scanf ("%d", &UqgTH3K);
            BYFbSud7qgx5++;
        }
    }
    getchar ();
}

