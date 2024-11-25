main () {
    int w8JNcr;
    int lEbyfKduFw;
    int gGF7HI;
    w8JNcr = (587 - 587);
    lEbyfKduFw = (828 - 828);
    gGF7HI = (91 - 91);
    char qhTu4w [(749 - 648)], bEMrlbIOPfKA [100] [100];
    gets (qhTu4w);
    for (; !('\0' == qhTu4w[w8JNcr]);) {
        if (qhTu4w[w8JNcr] != ' ') {
            bEMrlbIOPfKA[lEbyfKduFw][gGF7HI] = qhTu4w[w8JNcr];
            w8JNcr++;
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
            gGF7HI = gGF7HI + 1;
        }
        else {
            gGF7HI = 0;
            lEbyfKduFw = lEbyfKduFw + 1;
            w8JNcr++;
        };
    }
    for (w8JNcr = lEbyfKduFw; w8JNcr > 0; w8JNcr--)
        printf ("%s ", bEMrlbIOPfKA[w8JNcr]);
    printf ("%s", bEMrlbIOPfKA[0]);
}

