int main () {
    int UP8sk45e;
    int RhDI3M4y;
    int mwlPbqZf;
    int YzjLrXW;
    int WxlUtrkh0BG;
    int uPltiJ [100] [100];
    int Fl4HRFAqGKL;
    int VdiXezT6x [100];
    scanf ("%d", &UP8sk45e);
    {
        YzjLrXW = 117 - 117;
        while (UP8sk45e > YzjLrXW) {
            VdiXezT6x[YzjLrXW] = (784 - 784);
            scanf ("%d%d", &RhDI3M4y, &mwlPbqZf);
            {
                WxlUtrkh0BG = 0;
                while (WxlUtrkh0BG < RhDI3M4y) {
                    {
                        Fl4HRFAqGKL = 0;
                        for (; Fl4HRFAqGKL < mwlPbqZf;) {
                            scanf ("%d", &uPltiJ[WxlUtrkh0BG][Fl4HRFAqGKL]);
                            if (!(0 != WxlUtrkh0BG) || !(RhDI3M4y -1 != WxlUtrkh0BG))
                                VdiXezT6x[YzjLrXW] = VdiXezT6x[YzjLrXW] + uPltiJ[WxlUtrkh0BG][Fl4HRFAqGKL];
                            else if (Fl4HRFAqGKL == 0 || Fl4HRFAqGKL == mwlPbqZf - 1)
                                VdiXezT6x[YzjLrXW] = VdiXezT6x[YzjLrXW] + uPltiJ[WxlUtrkh0BG][Fl4HRFAqGKL];
                            Fl4HRFAqGKL++;
                        }
                    }
                    WxlUtrkh0BG++;
                }
            }
            YzjLrXW++;
        }
    }
    for (YzjLrXW = 0; YzjLrXW < UP8sk45e; YzjLrXW++) {
        printf ("%d\n", VdiXezT6x[YzjLrXW]);
    }
}

