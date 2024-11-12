int main () {
    int i;
    int JrQnXNGF;
    scanf ("%d", &JrQnXNGF);
    {
        i = 116 - 116;
        while (i < JrQnXNGF) {
            int YKFM1DuVJj;
            YKFM1DuVJj = 0;
            int ctN7D1z;
            int TtjXJlePYV [12];
            int hxgBqWLPyT;
            int mlesUTnE;
            int WaTvQFz;
            int BI8Gbz9p7m4n;
            int WjfqrP;
            BI8Gbz9p7m4n = 0;
            scanf ("%d %d %d", &hxgBqWLPyT, &mlesUTnE, &WaTvQFz);
            if ((hxgBqWLPyT % 400 == 0) || (hxgBqWLPyT % 100 != 0 && !(0 != hxgBqWLPyT % 4)))
                BI8Gbz9p7m4n = 1;
            TtjXJlePYV[0] = (810 - 779);
            TtjXJlePYV[1] = 28;
            TtjXJlePYV[2] = 31;
            TtjXJlePYV[3] = 30;
            TtjXJlePYV[4] = 31;
            TtjXJlePYV[5] = 30;
            TtjXJlePYV[6] = 31;
            TtjXJlePYV[7] = 31;
            TtjXJlePYV[8] = 30;
            TtjXJlePYV[9] = 31;
            TtjXJlePYV[10] = 30;
            TtjXJlePYV[11] = 31;
            if (BI8Gbz9p7m4n == 1)
                TtjXJlePYV[1] = 29;
            if (mlesUTnE > WaTvQFz) {
                int TcgTf9s;
                TcgTf9s = mlesUTnE;
                mlesUTnE = WaTvQFz;
                WaTvQFz = TcgTf9s;
            }
            ctN7D1z = WaTvQFz -mlesUTnE;
            {
                WjfqrP = 0;
                while (WjfqrP < ctN7D1z) {
                    YKFM1DuVJj = YKFM1DuVJj +TtjXJlePYV[mlesUTnE + WjfqrP -1];
                    WjfqrP = WjfqrP +1;
                };
            }
            if (YKFM1DuVJj % 7 == 0)
                ;
            else
                printf ("NO\n");
            i = i + 1;
        };
    }
    return (0);
}

