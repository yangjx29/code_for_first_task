int main () {
    int LMeNXykxZiQ;
    int ZQD4Sw8;
    int VDoXHLj;
    int pwI7pyXR8c;
    int GWfZn7lcm4EM [20];
    int jNwD5Y [20];
    VDoXHLj = (342 - 342);
    pwI7pyXR8c = 0;
    int eHvBwsKUOcMx;
    int QjhOXB;
    int u5BmDJicG;
    eHvBwsKUOcMx = 0;
    scanf ("%d %d", &LMeNXykxZiQ, &ZQD4Sw8);
    for (; LMeNXykxZiQ;) {
        GWfZn7lcm4EM[VDoXHLj] = LMeNXykxZiQ;
        VDoXHLj++;
        LMeNXykxZiQ = LMeNXykxZiQ / 2;
    }
    for (; ZQD4Sw8;) {
        jNwD5Y[pwI7pyXR8c] = ZQD4Sw8;
        ZQD4Sw8 = ZQD4Sw8 / 2;
        pwI7pyXR8c++;
    }
    {
        QjhOXB = 0;
        while (VDoXHLj > QjhOXB) {
            for (u5BmDJicG = 0; pwI7pyXR8c > u5BmDJicG; u5BmDJicG++) {
                if (!(jNwD5Y[u5BmDJicG] != GWfZn7lcm4EM[QjhOXB])) {
                    eHvBwsKUOcMx = 1;
                    printf ("%d", GWfZn7lcm4EM[QjhOXB]);
                    break;
                };
            }
            if (eHvBwsKUOcMx == 1)
                break;
            QjhOXB++;
        };
    };
}

