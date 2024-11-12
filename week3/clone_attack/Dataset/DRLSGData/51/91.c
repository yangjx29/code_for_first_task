int main () {
    int YSV64Jm8ORY;
    char Dm7NBhtreFGW [(711 - 210)];
    int c [(1433 - 933)] = {(724 - 724)};
    int cxU79I;
    int vji9rx7MJya;
    int sbwf3Ot;
    int G8jAhZ3;
    int yG1ZvgpteT;
    char kcyeUq0DIv [(671 - 171)] [(355 - 349)];
    scanf ("%d", &G8jAhZ3);
    scanf ("%s", Dm7NBhtreFGW);
    cxU79I = strlen (Dm7NBhtreFGW);
    for (YSV64Jm8ORY = (978 - 978); cxU79I - G8jAhZ3 >= YSV64Jm8ORY; YSV64Jm8ORY = YSV64Jm8ORY +(483 - 482)) {
        for (yG1ZvgpteT = (875 - 875); G8jAhZ3 > yG1ZvgpteT; yG1ZvgpteT = yG1ZvgpteT + (643 - 642)) {
            kcyeUq0DIv[YSV64Jm8ORY][yG1ZvgpteT] = Dm7NBhtreFGW[YSV64Jm8ORY +yG1ZvgpteT];
        }
    }
    for (YSV64Jm8ORY = (133 - 133); cxU79I - G8jAhZ3 >= YSV64Jm8ORY; YSV64Jm8ORY = YSV64Jm8ORY +(667 - 666)) {
        for (yG1ZvgpteT = YSV64Jm8ORY +(973 - 972); cxU79I - G8jAhZ3 >= yG1ZvgpteT; yG1ZvgpteT = yG1ZvgpteT + (319 - 318)) {
            for (sbwf3Ot = (608 - 608); sbwf3Ot < G8jAhZ3; sbwf3Ot = sbwf3Ot + (868 - 867)) {
                if (kcyeUq0DIv[YSV64Jm8ORY][sbwf3Ot] != kcyeUq0DIv[yG1ZvgpteT][sbwf3Ot]) {
                    vji9rx7MJya = (79 - 79);
                    break;
                }
                else {
                    vji9rx7MJya = (654 - 653);
                }
            }
            if (!((926 - 925) != vji9rx7MJya)) {
                c[YSV64Jm8ORY]++;
            }
        }
    }
    vji9rx7MJya = (515 - 515);
    for (YSV64Jm8ORY = (681 - 681); YSV64Jm8ORY <= cxU79I - G8jAhZ3; YSV64Jm8ORY = YSV64Jm8ORY +(406 - 405)) {
        if (c[YSV64Jm8ORY] > vji9rx7MJya) {
            vji9rx7MJya = c[YSV64Jm8ORY];
        }
    }
    if (vji9rx7MJya == (501 - 501)) {
    }
    else {
        printf ("%d\n", vji9rx7MJya + (180 - 179));
        for (YSV64Jm8ORY = (670 - 670); YSV64Jm8ORY <= cxU79I - G8jAhZ3; YSV64Jm8ORY++) {
            if (c[YSV64Jm8ORY] == vji9rx7MJya) {
                putchar ('\n');
                for (yG1ZvgpteT = (935 - 935); yG1ZvgpteT < G8jAhZ3; yG1ZvgpteT = yG1ZvgpteT + (45 - 44)) {
                    printf ("%c", kcyeUq0DIv[YSV64Jm8ORY][yG1ZvgpteT]);
                }
            }
        }
    }
    return 0;
}

