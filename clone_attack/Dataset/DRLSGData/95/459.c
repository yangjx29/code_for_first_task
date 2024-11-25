int main () {
    char mfJl98XcjY [80];
    gets (mfJl98XcjY);
    char DQD3qCRZAwi0 [80];
    char RyWBidmMhk;
    gets (DQD3qCRZAwi0);
    {
        RyWBidmMhk = 0;
        for (; (mfJl98XcjY[RyWBidmMhk] != '\0') || (DQD3qCRZAwi0[RyWBidmMhk] != '\0');) {
            if ((mfJl98XcjY[RyWBidmMhk] >= 'A') && ('Z' >= mfJl98XcjY[RyWBidmMhk]))
                mfJl98XcjY[RyWBidmMhk] = mfJl98XcjY[RyWBidmMhk] - 'A' + 'a';
            if (('A' <= DQD3qCRZAwi0[RyWBidmMhk]) && (DQD3qCRZAwi0[RyWBidmMhk] <= 'Z'))
                DQD3qCRZAwi0[RyWBidmMhk] = DQD3qCRZAwi0[RyWBidmMhk] - 'A' + 'a';
            RyWBidmMhk = RyWBidmMhk +1;
        }
    }
    RyWBidmMhk = 0;
    for (; (!(DQD3qCRZAwi0[RyWBidmMhk] != mfJl98XcjY[RyWBidmMhk])) && (mfJl98XcjY[RyWBidmMhk] != '\0');)
        RyWBidmMhk = RyWBidmMhk +1;
    if ((!('\0' != mfJl98XcjY[RyWBidmMhk])) && (DQD3qCRZAwi0[RyWBidmMhk] == '\0'))
        ;
    else {
        if (mfJl98XcjY[RyWBidmMhk] > DQD3qCRZAwi0[RyWBidmMhk])
            ;
        else
            ;
    }
}

