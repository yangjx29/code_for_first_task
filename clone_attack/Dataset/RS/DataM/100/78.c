int main () {
    char Z2Irqv7gkFV [302];
    char i390EktA [300];
    gets (Z2Irqv7gkFV);
    int Wn4puIXRQO;
    int C2Rr8OLWxPZN;
    int RYpfgN;
    int YaboTEG;
    int AxUVcsy9Q;
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
    int O4mInJsNcM [(629 - 229)] = {(680 - 680), 0};
    Wn4puIXRQO = (543 - 543);
    YaboTEG = strlen (Z2Irqv7gkFV);
    {
        C2Rr8OLWxPZN = 0;
        while (YaboTEG > C2Rr8OLWxPZN) {
            if (((Z2Irqv7gkFV[C2Rr8OLWxPZN] >= 'A') && (Z2Irqv7gkFV[C2Rr8OLWxPZN] <= 'Z')) || ((Z2Irqv7gkFV[C2Rr8OLWxPZN] >= 'a') && (Z2Irqv7gkFV[C2Rr8OLWxPZN] <= 'z'))) {
                AxUVcsy9Q = Z2Irqv7gkFV[C2Rr8OLWxPZN];
                i390EktA[AxUVcsy9Q] = Z2Irqv7gkFV[C2Rr8OLWxPZN];
                O4mInJsNcM[AxUVcsy9Q]++;
            }
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
            C2Rr8OLWxPZN++;
        };
    }
    {
        RYpfgN = 0;
        while (RYpfgN <= (192 - 70)) {
            if (O4mInJsNcM[RYpfgN] != 0) {
                Wn4puIXRQO++;
                printf ("%c=%d\n", i390EktA[RYpfgN], O4mInJsNcM[RYpfgN]);
            }
            RYpfgN = RYpfgN +1;
        };
    }
    if (Wn4puIXRQO == 0)
        printf ("No\n");
    return 0;
}

