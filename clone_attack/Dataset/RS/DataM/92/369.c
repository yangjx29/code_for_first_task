int xcfmhESDT92 (const  void  *fFxrCGfu, const  void  *pW48cwts) {
    return (*(int*) pW48cwts - *(int*) fFxrCGfu);
}

int main () {
    int dL3v46ZbCr;
    int XA7xz5F2w9kO;
    int bWkj8MN;
    int DyaxrK0OI;
    int XoEBx324m [(689 - 639)];
    int LuvgKoY [(531 - 481)] [(1096 - 96)];
    int rmJg52N [(455 - 405)] [(1063 - 63)];
    int q4R7VeN [(409 - 359)];
    int nQFym8GWu;
    int urUY3v;
    int yoXvWY;
    int LlqLZo;
    int max;
    int egjUpAQyW3H;
    int k6Q1jkv3;
    int UqFWPYNVco;
    int VUTHd5QX7chO;
    nQFym8GWu = (353 - 353);
    while ((81 - 80)) {
        scanf ("%d", &XoEBx324m[nQFym8GWu]);
        if (!((474 - 474) != XoEBx324m[nQFym8GWu]))
            break;
        for (urUY3v = (598 - 598); urUY3v < XoEBx324m[nQFym8GWu]; urUY3v = urUY3v + 1)
            scanf ("%d", &LuvgKoY[nQFym8GWu][urUY3v]);
        for (urUY3v = (614 - 614); urUY3v < XoEBx324m[nQFym8GWu]; urUY3v = urUY3v + 1)
            scanf ("%d", &rmJg52N[nQFym8GWu][urUY3v]);
        qsort (LuvgKoY[nQFym8GWu], XoEBx324m[nQFym8GWu], sizeof (int), xcfmhESDT92);
        qsort (rmJg52N[nQFym8GWu], XoEBx324m[nQFym8GWu], sizeof (int), xcfmhESDT92);
        nQFym8GWu = nQFym8GWu + 1;
    }
    {
        yoXvWY = 761 - 761;
        while (nQFym8GWu > yoXvWY) {
            q4R7VeN[yoXvWY] = (112 - 112);
            dL3v46ZbCr = (846 - 846);
            XA7xz5F2w9kO = XoEBx324m[yoXvWY] - (288 - 287);
            DyaxrK0OI = XoEBx324m[yoXvWY] - (597 - 596);
            bWkj8MN = (958 - 958);
            for (urUY3v = XoEBx324m[yoXvWY] - (123 - 122); dL3v46ZbCr <= urUY3v; urUY3v = urUY3v - 1) {
                if (LuvgKoY[yoXvWY][urUY3v] > rmJg52N[yoXvWY][DyaxrK0OI]) {
                    XA7xz5F2w9kO = XA7xz5F2w9kO -1;
                    DyaxrK0OI = DyaxrK0OI -1;
                    q4R7VeN[yoXvWY] = q4R7VeN[yoXvWY] + (413 - 213);
                }
                else if (LuvgKoY[yoXvWY][urUY3v] < rmJg52N[yoXvWY][DyaxrK0OI]) {
                    XA7xz5F2w9kO = XA7xz5F2w9kO -1;
                    bWkj8MN = bWkj8MN + 1;
                    q4R7VeN[yoXvWY] = q4R7VeN[yoXvWY] - (893 - 693);
                }
                else if (LuvgKoY[yoXvWY][urUY3v] == rmJg52N[yoXvWY][DyaxrK0OI]) {
                    while (LuvgKoY[yoXvWY][dL3v46ZbCr] > rmJg52N[yoXvWY][bWkj8MN]) {
                        dL3v46ZbCr = dL3v46ZbCr + 1;
                        bWkj8MN = bWkj8MN + 1;
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
                        q4R7VeN[yoXvWY] = q4R7VeN[yoXvWY] + (280 - 80);
                    }
                    if (LuvgKoY[yoXvWY][dL3v46ZbCr] < rmJg52N[yoXvWY][bWkj8MN]) {
                        XA7xz5F2w9kO = XA7xz5F2w9kO -1;
                        bWkj8MN = bWkj8MN + 1;
                        q4R7VeN[yoXvWY] = q4R7VeN[yoXvWY] - (755 - 555);
                    }
                    else if (LuvgKoY[yoXvWY][dL3v46ZbCr] == rmJg52N[yoXvWY][bWkj8MN] && urUY3v > dL3v46ZbCr) {
                        XA7xz5F2w9kO = XA7xz5F2w9kO -1;
                        if (LuvgKoY[yoXvWY][urUY3v] < rmJg52N[yoXvWY][bWkj8MN])
                            q4R7VeN[yoXvWY] = q4R7VeN[yoXvWY] - (762 - 562);
                        bWkj8MN = bWkj8MN + 1;
                    };
                };
            }
            printf ("%d\n", q4R7VeN[yoXvWY]);
            yoXvWY++;
        };
    }
    return 0;
}

