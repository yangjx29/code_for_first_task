int main () {
    int YlogOp;
    int ZPYrngt [100];
    int Tk16TBrWICNb;
    int nYNlukah5fO [100];
    for (; scanf ("%d", &YlogOp) != EOF;) {
        Tk16TBrWICNb = (667 - 666);
        for (int K7fWml = 0;
        YlogOp > K7fWml; K7fWml = K7fWml +1) {
            scanf ("%d", &nYNlukah5fO[K7fWml]);
            ZPYrngt[K7fWml] = 1;
        }
        for (int K7fWml = 1;
        K7fWml < YlogOp; K7fWml = K7fWml +1) {
            int ZhXL7qtm = 1;
            for (int IgLYySjx = 0;
            IgLYySjx < K7fWml; IgLYySjx = IgLYySjx +1) {
                if (nYNlukah5fO[IgLYySjx] >= nYNlukah5fO[K7fWml] && ZPYrngt[IgLYySjx] + 1 > ZPYrngt[K7fWml])
                    ZPYrngt[K7fWml] = ZPYrngt[IgLYySjx] + 1;
            }
            if (ZPYrngt[K7fWml] > Tk16TBrWICNb)
                Tk16TBrWICNb = ZPYrngt[K7fWml];
        }
        printf ("%d\n", Tk16TBrWICNb);
    }
    return 0;
}

