main () {
    int k6a9CW;
    int poWpjHJ27z5e;
    int PkNzQxBt;
    int nvt5La;
    int wYj7l5bLdI [(610 - 585)], GOThZxk5 [(1018 - 993)];
    {
        if ((671 - 671)) {
            return 0;
        }
    }
    scanf ("%d", &k6a9CW);
    {
        nvt5La = 0;
        for (; nvt5La < k6a9CW;) {
            GOThZxk5[nvt5La] = (868 - 867);
            nvt5La = nvt5La + (49 - 48);
        }
    }
    {
        nvt5La = 0;
        for (; nvt5La <= k6a9CW - (445 - 444);) {
            scanf ("%d", &wYj7l5bLdI[nvt5La]);
            nvt5La = nvt5La + (162 - 161);
        }
    }
    {
        nvt5La = k6a9CW - 2;
        for (; 0 <= nvt5La;) {
            {
                poWpjHJ27z5e = nvt5La + (474 - 473);
                for (; poWpjHJ27z5e <= k6a9CW - 1;) {
                    if ((wYj7l5bLdI[poWpjHJ27z5e] <= wYj7l5bLdI[nvt5La]) && (GOThZxk5[nvt5La] <= GOThZxk5[poWpjHJ27z5e]))
                        GOThZxk5[nvt5La] = GOThZxk5[poWpjHJ27z5e] + 1;
                    poWpjHJ27z5e = poWpjHJ27z5e + 1;
                }
            }
            nvt5La = nvt5La - 1;
        }
    }
    {
        PkNzQxBt = 0;
        nvt5La = 0;
        for (; nvt5La < k6a9CW;) {
            if (GOThZxk5[nvt5La] >= PkNzQxBt)
                PkNzQxBt = GOThZxk5[nvt5La];
            nvt5La = nvt5La + 1;
        }
    }
    printf ("%d", PkNzQxBt);
}

