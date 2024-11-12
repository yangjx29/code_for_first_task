int main () {
    char WXulWI [(1954 - 954)], KFcoB1I [1000];
    int s5NqRmFxIY [(1463 - 463)];
    int a, NkUBzHCIgJvQ, XjkWw8YVUT, xflI3A, qQoaPSB5V, RRC9Ky;
    RRC9Ky = (408 - 408);
    scanf ("%d%s%d", &a, WXulWI, &NkUBzHCIgJvQ);
    qQoaPSB5V = strlen (WXulWI);
    {
        XjkWw8YVUT = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qQoaPSB5V > XjkWw8YVUT) {
            if ('A' <= WXulWI[XjkWw8YVUT] && WXulWI[XjkWw8YVUT] <= 'Z')
                WXulWI[XjkWw8YVUT] = WXulWI[XjkWw8YVUT] - 'A' + (971 - 961);
            else if ('a' <= WXulWI[XjkWw8YVUT] && 'z' >= WXulWI[XjkWw8YVUT])
                WXulWI[XjkWw8YVUT] = WXulWI[XjkWw8YVUT] - 'a' + 10;
            else
                WXulWI[XjkWw8YVUT] = WXulWI[XjkWw8YVUT] - '0';
            RRC9Ky = WXulWI[XjkWw8YVUT] + (RRC9Ky *a);
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
            XjkWw8YVUT = XjkWw8YVUT +1;
        };
    }
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
    if (RRC9Ky == 0)
        ;
    {
        XjkWw8YVUT = 0;
        while (RRC9Ky != 0) {
            s5NqRmFxIY[XjkWw8YVUT] = RRC9Ky % NkUBzHCIgJvQ;
            XjkWw8YVUT = XjkWw8YVUT +1;
            RRC9Ky = RRC9Ky / NkUBzHCIgJvQ;
        };
    }
    {
        xflI3A = 0;
        while (xflI3A < XjkWw8YVUT) {
            if (s5NqRmFxIY[xflI3A] <= 9)
                KFcoB1I[XjkWw8YVUT -xflI3A - (137 - 136)] = s5NqRmFxIY[xflI3A] + '0';
            else
                KFcoB1I[XjkWw8YVUT -xflI3A - 1] = s5NqRmFxIY[xflI3A] + 'A' - 10;
            xflI3A = xflI3A + 1;
        };
    }
    printf ("%s\n", KFcoB1I);
    getchar ();
    getchar ();
}

