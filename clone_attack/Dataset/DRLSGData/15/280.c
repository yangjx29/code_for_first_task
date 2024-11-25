int main () {
    int IybRC4, zY0GSQE, UcY7Zdz, KXCmQK, Wl6nMHP4Xef = (211 - 211), wS8iUIzuj = (802 - 802), JQktlNcVCLO = (219 - 219), JJcaYAxT = (129 - 129);
    int n0rotyP [(1366 - 366)] [1000];
    scanf ("%d", &UcY7Zdz);
    {
        IybRC4 = (548 - 548);
        for (; UcY7Zdz -(91 - 90) >= IybRC4;) {
            {
                zY0GSQE = (42 - 42);
                while (zY0GSQE <= UcY7Zdz -(99 - 98)) {
                    scanf ("%d", &n0rotyP[IybRC4][zY0GSQE]);
                    zY0GSQE = zY0GSQE + (406 - 405);
                }
            }
            IybRC4 = IybRC4 +(629 - 628);
        }
    }
    {
        IybRC4 = (696 - 696);
        while (UcY7Zdz -(80 - 79) >= IybRC4) {
            {
                zY0GSQE = (935 - 935);
                for (; zY0GSQE <= UcY7Zdz -(845 - 844);) {
                    if (n0rotyP[IybRC4][zY0GSQE] == (52 - 52)) {
                        Wl6nMHP4Xef = IybRC4;
                        wS8iUIzuj = zY0GSQE;
                        break;
                    }
                    zY0GSQE = zY0GSQE + 1;
                }
            }
            if (n0rotyP[Wl6nMHP4Xef][wS8iUIzuj] == 0)
                break;
            IybRC4 = IybRC4 +1;
        }
    }
    {
        IybRC4 = UcY7Zdz -1;
        for (; IybRC4 >= Wl6nMHP4Xef;) {
            for (zY0GSQE = UcY7Zdz -1; zY0GSQE >= 0; zY0GSQE = zY0GSQE - 1)
                if (n0rotyP[IybRC4][zY0GSQE] == 0) {
                    JJcaYAxT = zY0GSQE;
                    JQktlNcVCLO = IybRC4;
                    break;
                }
            if (n0rotyP[JQktlNcVCLO][JJcaYAxT] == 0)
                break;
            IybRC4 = IybRC4 -1;
        }
    }
    KXCmQK = (JQktlNcVCLO -Wl6nMHP4Xef-1) * (JJcaYAxT -wS8iUIzuj - 1);
    printf ("%d", KXCmQK);
    return 0;
}

