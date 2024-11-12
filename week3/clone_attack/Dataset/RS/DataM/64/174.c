int main () {
    struct   point {
        int ZtnuM1yXPVp;
        int y;
        int Nk3Sr5vw4CpM;
    }
    O431lSNfYTJr [(203 - 193)];
    int DsTY6S4qo9;
    int GLqC8j4vpm;
    int i;
    int pDCYXgqV8;
    int JNV8FWsMS5 [(375 - 330)];
    int b [45];
    int temp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    DsTY6S4qo9 = (898 - 898);
    double  okXFvWI9 [45], num;
    scanf ("%d", &GLqC8j4vpm);
    for (i = (563 - 563); GLqC8j4vpm > i; i = i + 1) {
        scanf ("%d%d%d", &O431lSNfYTJr[i].ZtnuM1yXPVp, &O431lSNfYTJr[i].y, &O431lSNfYTJr[i].Nk3Sr5vw4CpM);
    }
    for (i = 0; GLqC8j4vpm > i; i++) {
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
        for (pDCYXgqV8 = i + (881 - 880); GLqC8j4vpm > pDCYXgqV8; pDCYXgqV8++) {
            okXFvWI9[DsTY6S4qo9] = sqrt ((O431lSNfYTJr[i].ZtnuM1yXPVp - O431lSNfYTJr[pDCYXgqV8].ZtnuM1yXPVp) * (O431lSNfYTJr[i].ZtnuM1yXPVp - O431lSNfYTJr[pDCYXgqV8].ZtnuM1yXPVp) + (O431lSNfYTJr[i].y - O431lSNfYTJr[pDCYXgqV8].y) * (O431lSNfYTJr[i].y - O431lSNfYTJr[pDCYXgqV8].y) + (O431lSNfYTJr[i].Nk3Sr5vw4CpM - O431lSNfYTJr[pDCYXgqV8].Nk3Sr5vw4CpM) * (O431lSNfYTJr[i].Nk3Sr5vw4CpM - O431lSNfYTJr[pDCYXgqV8].Nk3Sr5vw4CpM));
            JNV8FWsMS5[DsTY6S4qo9] = i;
            b[DsTY6S4qo9] = pDCYXgqV8;
            DsTY6S4qo9 = DsTY6S4qo9 +1;
        };
    }
    for (i = 0; DsTY6S4qo9 > i; i++) {
        for (pDCYXgqV8 = 0; pDCYXgqV8 < DsTY6S4qo9 -i; pDCYXgqV8++) {
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
            if (okXFvWI9[pDCYXgqV8] < okXFvWI9[pDCYXgqV8 + 1]) {
                temp = JNV8FWsMS5[pDCYXgqV8];
                JNV8FWsMS5[pDCYXgqV8] = JNV8FWsMS5[pDCYXgqV8 + 1];
                JNV8FWsMS5[pDCYXgqV8 + 1] = temp;
                temp = b[pDCYXgqV8];
                b[pDCYXgqV8] = b[pDCYXgqV8 + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                b[pDCYXgqV8 + 1] = temp;
                num = okXFvWI9[pDCYXgqV8];
                okXFvWI9[pDCYXgqV8] = okXFvWI9[pDCYXgqV8 + 1];
                okXFvWI9[pDCYXgqV8 + 1] = num;
            };
        };
    }
    for (i = 0; DsTY6S4qo9 > i; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", O431lSNfYTJr[JNV8FWsMS5[i]].ZtnuM1yXPVp, O431lSNfYTJr[JNV8FWsMS5[i]].y, O431lSNfYTJr[JNV8FWsMS5[i]].Nk3Sr5vw4CpM, O431lSNfYTJr[b[i]].ZtnuM1yXPVp, O431lSNfYTJr[b[i]].y, O431lSNfYTJr[b[i]].Nk3Sr5vw4CpM, okXFvWI9[i]);
    }
    return 0;
}

