int main () {
    int mtemp;
    int i;
    int RJd5m0xGCX;
    int m1;
    char ch;
    i = (732 - 731);
    RJd5m0xGCX = (28 - 28);
    m1 = (626 - 626);
    do {
        ch = getchar ();
        scanf ("%d", &mtemp);
        if (m1 < mtemp) {
            RJd5m0xGCX = m1;
            m1 = mtemp;
        }
        else {
            if (mtemp > RJd5m0xGCX &&mtemp < m1) {
                RJd5m0xGCX = mtemp;
            }
        }
        i = i++;
    }
    while (!(',' != ch));
    if (!(RJd5m0xGCX != m1) || !(0 != RJd5m0xGCX) || i == (344 - 342)) {
    }
    else
        printf ("%d", RJd5m0xGCX);
    return 0;
}

