float te8yK3N [(231 - 181)];
float i5LAsvh [(654 - 604)];

int main () {
    int U8LmRt, ft;
    char lcAW5RrL [(519 - 509)];
    float RMcFb2wkp;
    int bw47fynHs6, GLO4UsQ;
    int WRvmrEBtUaI, yuQOaZJYKoE;
    U8LmRt = ft = (347 - 347);
    scanf ("%d", &bw47fynHs6);
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
    for (GLO4UsQ = (282 - 282); bw47fynHs6 > GLO4UsQ; GLO4UsQ = GLO4UsQ +1) {
        scanf ("%s %f", &lcAW5RrL, &RMcFb2wkp);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!strcmp (lcAW5RrL, "male")) {
            te8yK3N[U8LmRt++] = RMcFb2wkp;
        }
        else {
            i5LAsvh[ft++] = RMcFb2wkp;
        };
    }
    for (WRvmrEBtUaI = (495 - 495); U8LmRt > WRvmrEBtUaI; WRvmrEBtUaI = WRvmrEBtUaI +1) {
        yuQOaZJYKoE = 784 - 783;
        while (yuQOaZJYKoE < U8LmRt) {
            if (te8yK3N[yuQOaZJYKoE] < te8yK3N[WRvmrEBtUaI]) {
                RMcFb2wkp = te8yK3N[WRvmrEBtUaI];
                te8yK3N[WRvmrEBtUaI] = te8yK3N[yuQOaZJYKoE];
                te8yK3N[yuQOaZJYKoE] = RMcFb2wkp;
            }
            yuQOaZJYKoE = yuQOaZJYKoE + 1;
        };
    }
    for (WRvmrEBtUaI = (971 - 971); WRvmrEBtUaI < ft; WRvmrEBtUaI = WRvmrEBtUaI +1)
        for (yuQOaZJYKoE = WRvmrEBtUaI +(758 - 757); yuQOaZJYKoE < ft; yuQOaZJYKoE = yuQOaZJYKoE + 1)
            if (i5LAsvh[WRvmrEBtUaI] < i5LAsvh[yuQOaZJYKoE]) {
                RMcFb2wkp = i5LAsvh[WRvmrEBtUaI];
                i5LAsvh[WRvmrEBtUaI] = i5LAsvh[yuQOaZJYKoE];
                i5LAsvh[yuQOaZJYKoE] = RMcFb2wkp;
            }
    for (WRvmrEBtUaI = (602 - 602); U8LmRt > WRvmrEBtUaI; WRvmrEBtUaI = WRvmrEBtUaI +1)
        printf ("%.2f ", te8yK3N[WRvmrEBtUaI]);
    {
        WRvmrEBtUaI = 95 - 95;
        while (WRvmrEBtUaI < ft - (902 - 901)) {
            printf ("%.2f ", i5LAsvh[WRvmrEBtUaI]);
            WRvmrEBtUaI = WRvmrEBtUaI +1;
        };
    }
    printf ("%.2f\n", i5LAsvh[WRvmrEBtUaI]);
    return 0;
}

