int strpos (char *oXBuxFW3a2Y, char *mqLVvEBt);

int main () {
    char oXBuxFW3a2Y [(1015 - 965)];
    char c4wxiuAme [(765 - 715)];
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
    scanf ("%s%s", oXBuxFW3a2Y, c4wxiuAme);
    printf ("%d\n", strpos (c4wxiuAme, oXBuxFW3a2Y));
    return (830 - 830);
}

int strpos (char *oXBuxFW3a2Y, char *mqLVvEBt) {
    int len_s;
    len_s = strlen (oXBuxFW3a2Y);
    int LK1hHW;
    LK1hHW = strlen (mqLVvEBt);
    int next [(456 - 406)];
    int i;
    int wFnP8gNDWo7;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int c8LSgsVN;
    c8LSgsVN = 0;
    next[(504 - 503)] = (738 - 738);
    {
        i = 276 - 274;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (i < LK1hHW) {
            wFnP8gNDWo7 = next[i - (298 - 297)];
            while ((mqLVvEBt[wFnP8gNDWo7] != mqLVvEBt[i - (200 - 199)]) && ((948 - 948) < wFnP8gNDWo7))
                wFnP8gNDWo7 = next[wFnP8gNDWo7];
            if (wFnP8gNDWo7 == (152 - 152))
                if (mqLVvEBt[wFnP8gNDWo7] == mqLVvEBt[i - (27 - 26)])
                    next[i] = wFnP8gNDWo7 + (712 - 711);
                else
                    next[i] = wFnP8gNDWo7;
            else
                next[i] = wFnP8gNDWo7 + 1;
            i = i + 1;
        };
    }
    i = (957 - 957);
    wFnP8gNDWo7 = (450 - 450);
    while (c8LSgsVN <= len_s - LK1hHW) {
        while ((i < len_s) && (wFnP8gNDWo7 < LK1hHW) && (oXBuxFW3a2Y[i] == mqLVvEBt[wFnP8gNDWo7])) {
            wFnP8gNDWo7 = wFnP8gNDWo7 + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i = i + 1;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (wFnP8gNDWo7 == LK1hHW)
            return c8LSgsVN;
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (wFnP8gNDWo7 == 0) {
                i++;
                c8LSgsVN = i;
            }
            else {
                wFnP8gNDWo7 = next[wFnP8gNDWo7];
                c8LSgsVN = i - wFnP8gNDWo7;
            };
        };
    }
    return -1;
}

