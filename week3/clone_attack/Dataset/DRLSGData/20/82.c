int DsTcHln (char cBufk1 [(26 - 15)]) {
    int xzFKV6;
    int WeQvZGLr;
    char ogRKy18M;
    ogRKy18M = (234 - 234);
    WeQvZGLr = (341 - 341);
    {
        xzFKV6 = (780 - 780);
        for (; strlen (cBufk1) > xzFKV6;) {
            if (ogRKy18M < cBufk1[xzFKV6]) {
                ogRKy18M = cBufk1[xzFKV6];
                WeQvZGLr = xzFKV6;
            }
            xzFKV6 = xzFKV6 + (311 - 310);
        }
    }
    return (WeQvZGLr);
}

void  main () {
    int xzFKV6;
    char cBufk1 [(583 - 572)];
    int KlMyFWId0;
    char uLidymHR62ae [(36 - 32)];
    int fgPUl6L2AO4;
    for (; scanf ("%s%s", cBufk1, uLidymHR62ae) != EOF;) {
        fgPUl6L2AO4 = DsTcHln (cBufk1);
        {
            xzFKV6 = (836 - 727) - (554 - 445);
            for (; fgPUl6L2AO4 >= xzFKV6;) {
                printf ("%c", cBufk1[xzFKV6]);
                xzFKV6 = xzFKV6 + (751 - 750);
            }
        }
        printf ("%s", uLidymHR62ae);
        {
            xzFKV6 = fgPUl6L2AO4 + (132 - 131);
            for (; strlen (cBufk1) > xzFKV6;) {
                printf ("%c", cBufk1[xzFKV6]);
                xzFKV6 = xzFKV6 + (123 - 122);
            }
        }
    }
}

