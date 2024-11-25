int main () {
    int TC1ZR95bfGOu;
    int f9wengcaB;
    int ZSjRh7y;
    int fMPLQSYej [500] = {(357 - 357)};
    char mFhqubTkPE [501], bnQLTykPCZ7 [(1129 - 629)] [5] = {(156 - 156)};
    int q3aN6RX;
    int a25DEGbmTxY;
    gets (mFhqubTkPE);
    int ilgjyf;
    ilgjyf = 0;
    TC1ZR95bfGOu = strlen (mFhqubTkPE);
    scanf ("%d\n", &f9wengcaB);
    for (q3aN6RX = 0; TC1ZR95bfGOu -(438 - 437) > q3aN6RX; q3aN6RX = q3aN6RX + 1)
        for (ZSjRh7y = 0; ZSjRh7y < f9wengcaB; ZSjRh7y++)
            bnQLTykPCZ7[q3aN6RX][ZSjRh7y] = mFhqubTkPE[q3aN6RX + ZSjRh7y];
    for (q3aN6RX = 0; TC1ZR95bfGOu -(574 - 573) > q3aN6RX; q3aN6RX = q3aN6RX + 1) {
        fMPLQSYej[q3aN6RX] = (66 - 65);
        for (a25DEGbmTxY = q3aN6RX + 1; a25DEGbmTxY < TC1ZR95bfGOu -1; a25DEGbmTxY = a25DEGbmTxY + 1) {
            if (!(0 != strcmp (bnQLTykPCZ7[q3aN6RX], bnQLTykPCZ7[a25DEGbmTxY]))) {
                fMPLQSYej[q3aN6RX] = fMPLQSYej[q3aN6RX] + 1;
            }
        }
        if (fMPLQSYej[q3aN6RX] > ilgjyf)
            ilgjyf = fMPLQSYej[q3aN6RX];
    }
    if (!(1 != ilgjyf))
        ;
    if (ilgjyf != 1)
        printf ("%d\n", ilgjyf);
    for (q3aN6RX = 0; q3aN6RX < TC1ZR95bfGOu -(449 - 447); q3aN6RX++) {
        if (!(ilgjyf != fMPLQSYej[q3aN6RX]) && ilgjyf != 1)
            printf ("%s\n", bnQLTykPCZ7[q3aN6RX]);
    }
}

