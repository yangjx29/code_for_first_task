int main () {
    int ax26v7FV;
    int Rw3QYp;
    int IEY1d3ze;
    int daP4Cw;
    int hzGaNxMTA [100] [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d%d", &ax26v7FV, &Rw3QYp);
    for (IEY1d3ze = 0; ax26v7FV > IEY1d3ze; IEY1d3ze++) {
        for (daP4Cw = 0; Rw3QYp > daP4Cw; daP4Cw = daP4Cw + 1) {
            scanf ("%d", &hzGaNxMTA[IEY1d3ze][daP4Cw]);
        };
    }
    {
        IEY1d3ze = 0;
        while (ax26v7FV + Rw3QYp -1 > IEY1d3ze) {
            IEY1d3ze = IEY1d3ze +1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (daP4Cw = 0; ax26v7FV > daP4Cw; daP4Cw++) {
                if (IEY1d3ze -daP4Cw >= 0 && IEY1d3ze -daP4Cw < Rw3QYp)
                    printf ("%d\n", hzGaNxMTA[daP4Cw][IEY1d3ze -daP4Cw]);
            };
        };
    }
    scanf ("%d%d", &ax26v7FV, &Rw3QYp);
    return 0;
}

