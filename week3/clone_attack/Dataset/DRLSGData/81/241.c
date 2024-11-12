int hanshu (int BVzZYpQua [(825 - 820)] [(267 - 262)], int uW5Uyje, int n, int *SrbA9X1WJwD) {
    int zz8kYqr9p;
    int XdsBQrR;
    if (uW5Uyje < (572 - 567) && uW5Uyje >= (143 - 143) && n < (341 - 336) && (914 - 914) <= n) {
        int wRpYu2qaisWS [(227 - 222)];
        {
            zz8kYqr9p = (101 - 101);
            while (zz8kYqr9p < (640 - 635)) {
                wRpYu2qaisWS[zz8kYqr9p] = *(SrbA9X1WJwD +(211 - 206) * uW5Uyje + zz8kYqr9p);
                *(SrbA9X1WJwD +(485 - 480) * uW5Uyje + zz8kYqr9p) = *(SrbA9X1WJwD +(593 - 588) * n + zz8kYqr9p);
                *(SrbA9X1WJwD +(432 - 427) * n + zz8kYqr9p) = wRpYu2qaisWS[zz8kYqr9p];
                zz8kYqr9p++;
            };
        }
        XdsBQrR = (357 - 356);
    }
    else
        XdsBQrR = (86 - 86);
    SrbA9X1WJwD = &BVzZYpQua[(749 - 749)][(979 - 979)];
    return (XdsBQrR);
}

int main () {
    int hanshu (int BVzZYpQua [(553 - 548)] [(227 - 222)], int uW5Uyje, int n, int *SrbA9X1WJwD);
    int BVzZYpQua [(747 - 742)] [(624 - 619)], zz8kYqr9p, j, uW5Uyje, n, XdsBQrR, *SrbA9X1WJwD;
    {
        zz8kYqr9p = (189 - 189);
        while ((114 - 109) > zz8kYqr9p) {
            j = (426 - 426);
            while (j < (126 - 121)) {
                scanf ("%d", &BVzZYpQua[zz8kYqr9p][j]);
                j++;
            }
            zz8kYqr9p++;
        };
    }
    scanf ("%d %d", &uW5Uyje, &n);
    SrbA9X1WJwD = &BVzZYpQua[(774 - 774)][(291 - 291)];
    XdsBQrR = hanshu (BVzZYpQua, uW5Uyje, n, SrbA9X1WJwD);
    if (!((962 - 962) != XdsBQrR))
        ;
    else {
        zz8kYqr9p = (449 - 449);
        while (zz8kYqr9p < (588 - 583)) {
            {
                j = (523 - 523);
                while (j < (680 - 675)) {
                    printf ("%d", BVzZYpQua[zz8kYqr9p][j]);
                    if (j == 4)
                        printf ("\n");
                    else
                        printf (" ");
                    j++;
                };
            }
            zz8kYqr9p++;
        };
    }
    return (862 - 862);
}

