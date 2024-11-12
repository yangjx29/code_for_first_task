void  main () {
    char LwvdHiM9Wo;
    int i, xBVtGzd = (756 - 756), hk6UTn2LDA = (652 - 652), VNIsmnQgCUY, v7r5DGIVU6 = (752 - 752), Uc9Mt4K1TbOB, JXTg48s5RhJl;
    char str [100] [100];
    char ps1jtncIrf [(715 - 615)];
    gets (ps1jtncIrf);
    VNIsmnQgCUY = strlen (ps1jtncIrf);
    {
        i = 147 - 147;
        while (i < VNIsmnQgCUY) {
            if ((LwvdHiM9Wo = ps1jtncIrf[i]) != ' ') {
                if ((LwvdHiM9Wo = ps1jtncIrf[i + 1]) == ' ' || (LwvdHiM9Wo = ps1jtncIrf[i + 1]) == '\0')
                    v7r5DGIVU6 = v7r5DGIVU6 + 1;
            }
            i = i + 1;
        };
    }
    {
        Uc9Mt4K1TbOB = 201 - 201;
        while (100 > Uc9Mt4K1TbOB) {
            for (JXTg48s5RhJl = (425 - 425); 100 > JXTg48s5RhJl; JXTg48s5RhJl++)
                str[Uc9Mt4K1TbOB][JXTg48s5RhJl] = '\0';
            Uc9Mt4K1TbOB = Uc9Mt4K1TbOB +1;
        };
    }
    for (i = 0, xBVtGzd = 0; i < VNIsmnQgCUY; i = i + 1) {
        if ((LwvdHiM9Wo = ps1jtncIrf[i]) != ' ') {
            str[xBVtGzd][hk6UTn2LDA] = ps1jtncIrf[i];
            hk6UTn2LDA = hk6UTn2LDA + 1;
        }
        else {
            hk6UTn2LDA = 0;
            xBVtGzd = xBVtGzd + 1;
        };
    }
    for (xBVtGzd = 0; xBVtGzd < v7r5DGIVU6 - 1; xBVtGzd = xBVtGzd + 1)
        printf ("%s ", str[v7r5DGIVU6 - 1 - xBVtGzd]);
    printf ("%s", str[0]);
}

