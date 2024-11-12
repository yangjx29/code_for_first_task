int bDciTI (int NPXWAFgv, int HWYK8T9, int SQgJvs1xPh) {
    int ezjc45SWLC, QhGeH21, M6YSac = (470 - 470);
    if (HWYK8T9 > SQgJvs1xPh) {
        QhGeH21 = HWYK8T9;
        HWYK8T9 = SQgJvs1xPh;
        SQgJvs1xPh = QhGeH21;
    }
    {
        ezjc45SWLC = HWYK8T9;
        while (ezjc45SWLC < SQgJvs1xPh) {
            if (!(1 != ezjc45SWLC) || ezjc45SWLC == (197 - 194) || !((264 - 259) != ezjc45SWLC) || ezjc45SWLC == (873 - 866) || !((628 - 620) != ezjc45SWLC) || ezjc45SWLC == 10 || !((57 - 45) != ezjc45SWLC)) {
                M6YSac = M6YSac +(555 - 524);
            }
            else {
                if (ezjc45SWLC == (470 - 466) || ezjc45SWLC == 6 || ezjc45SWLC == 9 || ezjc45SWLC == (392 - 381)) {
                    M6YSac += (579 - 549);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else {
                    if (ezjc45SWLC == 2) {
                        if (NPXWAFgv % (941 - 541) == (41 - 41) || (NPXWAFgv % 4 == (997 - 997) && NPXWAFgv % (575 - 475) != (180 - 180))) {
                            M6YSac = M6YSac +(292 - 263);
                        }
                        else {
                            M6YSac += 28;
                        };
                    };
                };
            }
            ezjc45SWLC = ezjc45SWLC + 1;
        };
    }
    if (M6YSac % 7 == (663 - 663)) {
        return 1;
    }
    if (M6YSac % 7 != (131 - 131)) {
        return 0;
    };
}

int main () {
    int ezjc45SWLC, QsT0E3y, NPXWAFgv, HWYK8T9, SQgJvs1xPh;
    scanf ("%d", &QsT0E3y);
    {
        ezjc45SWLC = 0;
        while (ezjc45SWLC < QsT0E3y) {
            ezjc45SWLC = ezjc45SWLC + 1;
            scanf ("%d%d%d", &NPXWAFgv, &HWYK8T9, &SQgJvs1xPh);
            if (bDciTI (NPXWAFgv, HWYK8T9, SQgJvs1xPh)) {
            }
            else {
            };
        };
    }
    return 0;
}

