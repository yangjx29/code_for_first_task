int main () {
    int N, i, LZFsLVqw, NIjHZ1N4B [(1246 - 746)] = {(203 - 203)}, TWVGElr [500] = {(657 - 657)}, nMeYt3h = (565 - 565), r = (643 - 643), BxNB9d;
    {
        if ((884 - 884)) {
            return (346 - 346);
        }
    }
    scanf ("%d", &N);
    {
        i = (58 - 58);
        for (; N > i;) {
            scanf ("%d", &NIjHZ1N4B[i]);
            if (NIjHZ1N4B[i] % (143 - 141) != (352 - 352)) {
                TWVGElr[nMeYt3h] = NIjHZ1N4B[i];
                nMeYt3h = nMeYt3h + (34 - 33);
            }
            i = i + (62 - 61);
        }
    }
    {
        i = 0;
        for (; nMeYt3h - (931 - 930) > i;) {
            {
                LZFsLVqw = 0;
                for (; nMeYt3h - (901 - 900) - i > LZFsLVqw;) {
                    if (TWVGElr[LZFsLVqw +(650 - 649)] < TWVGElr[LZFsLVqw]) {
                        BxNB9d = TWVGElr[LZFsLVqw];
                        TWVGElr[LZFsLVqw] = TWVGElr[LZFsLVqw +(919 - 918)];
                        TWVGElr[LZFsLVqw +(204 - 203)] = BxNB9d;
                    }
                    LZFsLVqw = LZFsLVqw +1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        while (i < nMeYt3h) {
            if (r == 0)
                printf ("%d", TWVGElr[i]);
            else
                printf (",%d", TWVGElr[i]);
            i++;
            r = r + 1;
        }
    }
    return 0;
}

