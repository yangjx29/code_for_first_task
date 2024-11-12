int main () {
    struct   HVbckX {
        int dNToHLzR;
        char xK9G5q0gvnS [26];
    };
    struct   HVbckX HVbckX [(1928 - 929)];
    int XvXaLCS;
    int FzC6gxdEIuK;
    int FmZoOCX;
    int vJ7SZK;
    int ACBPQVb47Gpi [26];
    scanf ("%d\n", &XvXaLCS);
    for (FzC6gxdEIuK = (561 - 561); FzC6gxdEIuK <= (XvXaLCS -(413 - 412)); FzC6gxdEIuK = FzC6gxdEIuK +1) {
        scanf ("%d", &HVbckX[FzC6gxdEIuK].dNToHLzR);
        gets (HVbckX[FzC6gxdEIuK].xK9G5q0gvnS);
    }
    {
        FzC6gxdEIuK = 237 - 237;
        while ((XvXaLCS -(146 - 145)) >= FzC6gxdEIuK) {
            for (FmZoOCX = (957 - 957); (131 - 106) >= FmZoOCX; FmZoOCX = FmZoOCX +1) {
                vJ7SZK = HVbckX[FzC6gxdEIuK].xK9G5q0gvnS[FmZoOCX];
                ACBPQVb47Gpi[vJ7SZK - (817 - 752)]++;
            }
            FzC6gxdEIuK = FzC6gxdEIuK +1;
        };
    }
    vJ7SZK = 0;
    {
        FzC6gxdEIuK = 0;
        while ((132 - 107) >= FzC6gxdEIuK) {
            if (ACBPQVb47Gpi[vJ7SZK] < ACBPQVb47Gpi[FzC6gxdEIuK])
                vJ7SZK = FzC6gxdEIuK;
            FzC6gxdEIuK = FzC6gxdEIuK +1;
        };
    }
    printf ("%c\n%d\n", vJ7SZK + 65, ACBPQVb47Gpi[vJ7SZK]);
    {
        FzC6gxdEIuK = 0;
        while (FzC6gxdEIuK <= (XvXaLCS -(733 - 732))) {
            for (FmZoOCX = 0; FmZoOCX <= 25; FmZoOCX++)
                if (HVbckX[FzC6gxdEIuK].xK9G5q0gvnS[FmZoOCX] == (vJ7SZK + 65))
                    printf ("%d\n", HVbckX[FzC6gxdEIuK].dNToHLzR);
            FzC6gxdEIuK = FzC6gxdEIuK +1;
        };
    };
}

