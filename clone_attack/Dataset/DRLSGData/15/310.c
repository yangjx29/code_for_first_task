int main () {
    int CLxCsZ, QxC98H2ezN, lIFxAbOy, unYiGHtlV, xCG4kXVESJm, HSVfDoHIN, ZMhKSc, LfvT4EjFx8;
    int MsSgbVG [1000] [1000];
    scanf ("%d", &CLxCsZ);
    {
        QxC98H2ezN = 0;
        for (; CLxCsZ > QxC98H2ezN;) {
            {
                lIFxAbOy = 0;
                for (; CLxCsZ > lIFxAbOy;) {
                    scanf ("%d", &MsSgbVG[QxC98H2ezN][lIFxAbOy]);
                    lIFxAbOy = lIFxAbOy + 1;
                }
            }
            QxC98H2ezN = QxC98H2ezN +1;
        }
    }
    {
        QxC98H2ezN = 0;
        while (CLxCsZ > QxC98H2ezN) {
            {
                lIFxAbOy = 0;
                for (; CLxCsZ > lIFxAbOy;) {
                    if (!(0 != MsSgbVG[QxC98H2ezN][lIFxAbOy])) {
                        unYiGHtlV = QxC98H2ezN;
                        xCG4kXVESJm = lIFxAbOy;
                    }
                    lIFxAbOy = lIFxAbOy + 1;
                }
            }
            QxC98H2ezN = QxC98H2ezN +1;
        }
    }
    {
        QxC98H2ezN = CLxCsZ -1;
        while (0 < QxC98H2ezN) {
            {
                lIFxAbOy = CLxCsZ -1;
                for (; lIFxAbOy > 0;) {
                    if (MsSgbVG[QxC98H2ezN][lIFxAbOy] == 0) {
                        ZMhKSc = lIFxAbOy;
                        HSVfDoHIN = QxC98H2ezN;
                    }
                    lIFxAbOy = lIFxAbOy - 1;
                }
            }
            QxC98H2ezN = QxC98H2ezN -1;
        }
    }
    LfvT4EjFx8 = (unYiGHtlV - HSVfDoHIN -1) * (xCG4kXVESJm - ZMhKSc -1);
    printf ("%d", LfvT4EjFx8);
    return 0;
}

