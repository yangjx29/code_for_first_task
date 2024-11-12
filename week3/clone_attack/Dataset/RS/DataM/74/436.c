int main () {
    int txREzsO3D;
    int rrQUR5nV6xhq;
    int mXQVoaymYIL;
    int PpOS6yGC;
    int surpV93DIoO;
    int ROJqNS;
    int sNHCQxYb;
    int prxijR;
    scanf ("%d %d", &txREzsO3D, &rrQUR5nV6xhq);
    for (mXQVoaymYIL = txREzsO3D, PpOS6yGC = 0; mXQVoaymYIL <= rrQUR5nV6xhq; mXQVoaymYIL++) {
        for (surpV93DIoO = 2; surpV93DIoO < mXQVoaymYIL; surpV93DIoO++)
            if (mXQVoaymYIL % surpV93DIoO == 0)
                break;
        for (ROJqNS = 0, sNHCQxYb = 0, prxijR = mXQVoaymYIL; prxijR != 0;) {
            sNHCQxYb = prxijR % 10;
            ROJqNS = ROJqNS *10 + sNHCQxYb;
            prxijR = prxijR / 10;
        }
        if (surpV93DIoO == mXQVoaymYIL && ROJqNS == mXQVoaymYIL) {
            if (PpOS6yGC == 0) {
                printf ("%d", mXQVoaymYIL);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                PpOS6yGC++;
            }
            else
                printf (",%d", mXQVoaymYIL);
        };
    }
    getchar ();
    getchar ();
    if (PpOS6yGC == 0)
        ;
}

