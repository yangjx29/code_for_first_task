struct   info {
    char r7xbF2duDhvG [10];
    float x8cEBjPmH5M;
    float vtonERN42Ov;
    float IG1kbVAwy957;
    struct   info *AG510rIPB;
};
void  main () {
    int SbzdX1, ZshbogQCH, F91Sk7Jybcq;
    struct   info *O9kqAI, *pre, *vBEJWMYwpO, *qkMHRF4;
    scanf ("%d", &F91Sk7Jybcq);
    O9kqAI = pre = vBEJWMYwpO = LEN;
    {
        SbzdX1 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (SbzdX1 < 2) {
            SbzdX1++;
            vBEJWMYwpO->IG1kbVAwy957 = 0;
            vBEJWMYwpO = LEN;
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
            pre->AG510rIPB = vBEJWMYwpO;
            pre = vBEJWMYwpO;
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
    vBEJWMYwpO->IG1kbVAwy957 = 0;
    vBEJWMYwpO->AG510rIPB = NULL;
    for (SbzdX1 = 0; SbzdX1 < F91Sk7Jybcq; SbzdX1++) {
        vBEJWMYwpO = LEN;
        scanf ("%s %f %f", vBEJWMYwpO->r7xbF2duDhvG, &vBEJWMYwpO->x8cEBjPmH5M, &vBEJWMYwpO->vtonERN42Ov);
        vBEJWMYwpO->IG1kbVAwy957 = vBEJWMYwpO->x8cEBjPmH5M + vBEJWMYwpO->vtonERN42Ov;
        if (vBEJWMYwpO->IG1kbVAwy957 > O9kqAI->IG1kbVAwy957) {
            vBEJWMYwpO->AG510rIPB = O9kqAI;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            O9kqAI = vBEJWMYwpO;
        }
        else {
            pre = O9kqAI;
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
            qkMHRF4 = O9kqAI->AG510rIPB;
            for (ZshbogQCH = 1; ZshbogQCH <= 2; ZshbogQCH++) {
                if (vBEJWMYwpO->IG1kbVAwy957 > qkMHRF4->IG1kbVAwy957) {
                    pre->AG510rIPB = vBEJWMYwpO;
                    vBEJWMYwpO->AG510rIPB = qkMHRF4;
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
                    break;
                }
                pre = qkMHRF4;
                qkMHRF4 = qkMHRF4->AG510rIPB;
            };
        };
    }
    vBEJWMYwpO = O9kqAI;
    for (SbzdX1 = 0; SbzdX1 < 3; SbzdX1++) {
        printf ("%s %g\n", vBEJWMYwpO->r7xbF2duDhvG, vBEJWMYwpO->IG1kbVAwy957);
        vBEJWMYwpO = vBEJWMYwpO->AG510rIPB;
    };
}

