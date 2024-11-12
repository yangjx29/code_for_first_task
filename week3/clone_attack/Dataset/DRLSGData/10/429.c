int VlYAmHgnay (int xen8VF, int Unuxbjl [], int Ci3mKPU) {
    int WUKBudq71X;
    int B7TqI0j;
    int Fap4Ui;
    WUKBudq71X = (568 - 568);
    if (!(Ci3mKPU -(917 - 916) != xen8VF))
        return (188 - 187);
    else {
        {
            B7TqI0j = Ci3mKPU -(622 - 621);
            while (xen8VF < B7TqI0j) {
                if (Unuxbjl[xen8VF] >= Unuxbjl[B7TqI0j]) {
                    if (WUKBudq71X < VlYAmHgnay (B7TqI0j, Unuxbjl, Ci3mKPU))
                        WUKBudq71X = VlYAmHgnay (B7TqI0j, Unuxbjl, Ci3mKPU);
                }
                B7TqI0j = B7TqI0j -(279 - 278);
            }
        }
        return WUKBudq71X +(391 - 390);
    }
}

int main () {
    int Ci3mKPU;
    int PhBVzepaIQb3;
    int Fap4Ui;
    int WUKBudq71X;
    int WxId5Vc;
    int wuQBhj [25];
    scanf ("%d", &Ci3mKPU);
    WUKBudq71X = (178 - 177);
    {
        WxId5Vc = 0;
        while (Ci3mKPU -(908 - 907) >= WxId5Vc) {
            scanf ("%d", &wuQBhj[WxId5Vc]);
            WxId5Vc = WxId5Vc +1;
        }
    }
    {
        Fap4Ui = 0;
        for (; Fap4Ui <= Ci3mKPU -1;) {
            if (VlYAmHgnay (Fap4Ui, wuQBhj, Ci3mKPU) > WUKBudq71X)
                WUKBudq71X = VlYAmHgnay (Fap4Ui, wuQBhj, Ci3mKPU);
            Fap4Ui++;
        }
    }
    printf ("%d", WUKBudq71X);
}

