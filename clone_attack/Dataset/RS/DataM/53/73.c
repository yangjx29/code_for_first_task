int main () {
    int MUwIlX3J [100];
    int a [(137 - 37)];
    int ZEql982C6;
    int Xh0rXFf5s9v;
    int dvUC2xt;
    int fdnaUQDR;
    int P5suG87;
    int wmYTOhf;
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
    ZEql982C6 = 0;
    Xh0rXFf5s9v = 0;
    dvUC2xt = 0;
    scanf ("%d\n", &wmYTOhf);
    {
        fdnaUQDR = 0;
        while (fdnaUQDR < wmYTOhf) {
            scanf ("%d", &a[fdnaUQDR]);
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
            fdnaUQDR = fdnaUQDR + 1;
        };
    }
    {
        fdnaUQDR = wmYTOhf - 1;
        while (fdnaUQDR > 0) {
            dvUC2xt = 0;
            for (P5suG87 = 0; P5suG87 < fdnaUQDR; P5suG87++) {
                if (a[fdnaUQDR] == a[P5suG87])
                    dvUC2xt = 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (dvUC2xt == 0) {
                MUwIlX3J[ZEql982C6] = a[fdnaUQDR];
                ZEql982C6 = ZEql982C6 +1;
                Xh0rXFf5s9v = ZEql982C6;
            }
            fdnaUQDR--;
        };
    }
    printf ("%d", a[0]);
    for (ZEql982C6 = Xh0rXFf5s9v -1; ZEql982C6 >= 0; ZEql982C6--) {
        printf (",%d", MUwIlX3J[ZEql982C6]);
    }
    return 0;
}

