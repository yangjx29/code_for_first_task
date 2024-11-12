int main () {
    int a;
    int b;
    int GYCBH8QiJ;
    int aSGZNtA;
    int n;
    int ZMyJuSU2W1;
    int j;
    int k;
    int qG4L2vbYCK [(724 - 624)];
    int uyb9x3Yfzlw [(976 - 967)];
    int wei;
    int QaMN72;
    a = (114 - 114);
    b = (646 - 646);
    GYCBH8QiJ = (433 - 433);
    scanf ("%d %d", &aSGZNtA, &n);
    {
        ZMyJuSU2W1 = aSGZNtA;
        a = (168 - 168);
        b = (449 - 449);
        wei = (753 - 753);
        while (ZMyJuSU2W1 <= n) {
            a = (567 - 567);
            b = (724 - 724);
            {
                j = (150 - 150);
                while (j < (663 - 654)) {
                    uyb9x3Yfzlw[j] = (300 - 300);
                    j++;
                }
            }
            k = sqrt (ZMyJuSU2W1);
            {
                j = (993 - 991);
                for (; k >= j;) {
                    if (ZMyJuSU2W1 % j == (518 - 518))
                        break;
                    j++;
                }
            }
            if (k < j)
                a++;
            QaMN72 = ZMyJuSU2W1;
            {
                j = (932 - 932);
                while (j < (231 - 222)) {
                    uyb9x3Yfzlw[j] = QaMN72 % (411 - 401);
                    QaMN72 = QaMN72 / (667 - 657);
                    wei = j;
                    if (1 > QaMN72)
                        break;
                    j++;
                }
            }
            {
                j = (896 - 896);
                while (j <= wei) {
                    if (uyb9x3Yfzlw[j] != uyb9x3Yfzlw[wei - j])
                        break;
                    j++;
                }
            }
            if (j > wei)
                b++;
            if (a * b != (162 - 162)) {
                qG4L2vbYCK[GYCBH8QiJ] = ZMyJuSU2W1;
                GYCBH8QiJ++;
            }
            ZMyJuSU2W1++;
        }
    }
    if (GYCBH8QiJ == 0)
        printf ("no");
    else {
        ZMyJuSU2W1 = 0;
        while (ZMyJuSU2W1 < GYCBH8QiJ) {
            if (ZMyJuSU2W1 == 0)
                printf ("%d", qG4L2vbYCK[ZMyJuSU2W1]);
            else
                printf (",%d", qG4L2vbYCK[ZMyJuSU2W1]);
            ZMyJuSU2W1++;
        }
    }
    printf ("\n");
    return 0;
}

