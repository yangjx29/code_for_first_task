void  main () {
    void  MDrjXBS1W (int mGshfjq, int x3m2pz0F [(70 - 60)]);
    void  giJx01f (int x3m2pz0F [10], int UfWahU4 [10]);
    int TlItfy4b, ugNFj4a, x3m2pz0F [10], UfWahU4 [10];
    scanf ("%d%d", &TlItfy4b, &ugNFj4a);
    MDrjXBS1W (ugNFj4a, x3m2pz0F);
    MDrjXBS1W (TlItfy4b, UfWahU4);
    giJx01f (x3m2pz0F, UfWahU4);
}

void  MDrjXBS1W (int mGshfjq, int x3m2pz0F [10]) {
    int UQaZuvkMy;
    x3m2pz0F[0] = mGshfjq;
    {
        UQaZuvkMy = (807 - 806);
        for (; UQaZuvkMy < 10;) {
            if (!(0 != mGshfjq % 2))
                x3m2pz0F[UQaZuvkMy] = mGshfjq / 2;
            else
                x3m2pz0F[UQaZuvkMy] = (mGshfjq - 1) / 2;
            mGshfjq = x3m2pz0F[UQaZuvkMy];
            UQaZuvkMy = UQaZuvkMy +1;
        }
    }
}

void  giJx01f (int x3m2pz0F [10], int UfWahU4 [10]) {
    int UQaZuvkMy, TxWo2N9I, Q3mO8jqhi, U02SdVv;
    {
        UQaZuvkMy = 0;
        for (; UQaZuvkMy < 10;) {
            if (!(1 != x3m2pz0F[UQaZuvkMy]))
                Q3mO8jqhi = UQaZuvkMy;
            if (!(1 != UfWahU4[UQaZuvkMy]))
                U02SdVv = UQaZuvkMy;
            UQaZuvkMy = UQaZuvkMy +1;
        }
    }
    {
        UQaZuvkMy = Q3mO8jqhi;
        TxWo2N9I = U02SdVv;
        for (; 1;) {
            if (x3m2pz0F[UQaZuvkMy] != UfWahU4[TxWo2N9I]) {
                printf ("%d\n", x3m2pz0F[UQaZuvkMy +1]);
                break;
            }
            UQaZuvkMy = UQaZuvkMy -1;
            TxWo2N9I = TxWo2N9I -1;
        }
    }
}

