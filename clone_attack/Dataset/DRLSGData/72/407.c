int main () {
    int k2S6fCKL8 [25] [25], DlgUrpcvRFfL, wWrEelkpAI1, cowMYV, tq0MFKnru, BIKeZV5mY, BIs75Rg, GiBZufRLVWyx = (718 - 718), CSIo6m5 = 0;
    memset (k2S6fCKL8, 0, sizeof (k2S6fCKL8));
    scanf ("%d%d", &DlgUrpcvRFfL, &wWrEelkpAI1);
    {
        tq0MFKnru = 1;
        while (DlgUrpcvRFfL >= tq0MFKnru) {
            for (BIKeZV5mY = 1; wWrEelkpAI1 >= BIKeZV5mY; BIKeZV5mY = BIKeZV5mY +1)
                scanf ("%d", &k2S6fCKL8[tq0MFKnru][BIKeZV5mY]);
            tq0MFKnru++;
        }
    }
    {
        tq0MFKnru = 1;
        while (DlgUrpcvRFfL >= tq0MFKnru) {
            BIKeZV5mY = 1;
            while (wWrEelkpAI1 >= BIKeZV5mY) {
                if ((k2S6fCKL8[tq0MFKnru][BIKeZV5mY] >= k2S6fCKL8[tq0MFKnru - 1][BIKeZV5mY]) && (k2S6fCKL8[tq0MFKnru][BIKeZV5mY] >= k2S6fCKL8[tq0MFKnru + 1][BIKeZV5mY]) && (k2S6fCKL8[tq0MFKnru][BIKeZV5mY] >= k2S6fCKL8[tq0MFKnru][BIKeZV5mY -1]) && (k2S6fCKL8[tq0MFKnru][BIKeZV5mY] >= k2S6fCKL8[tq0MFKnru][BIKeZV5mY +1]))
                    printf ("%d %d\n", tq0MFKnru - 1, BIKeZV5mY -1);
                BIKeZV5mY++;
            }
            tq0MFKnru++;
        }
    }
}

