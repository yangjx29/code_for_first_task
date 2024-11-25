void  main () {
    int RcI8jxaSe, ob9jOfst;
    int AKfXFyqoeA [(41 - 33)] [(955 - 947)];
    int xYJuIpSje1T, a4FE6hGltMN, hJB8LaglE [(46 - 38)] = {(272 - 272)}, x3mAXBZwPcVo [(758 - 750)] = {(882 - 882)}, v1B4qTWZA0 [8] = {(89 - 89)}, et865yI0w = (134 - 134);
    scanf ("%d,%d", &RcI8jxaSe, &ob9jOfst);
    for (xYJuIpSje1T = 0; RcI8jxaSe > xYJuIpSje1T; xYJuIpSje1T++) {
        a4FE6hGltMN = 0;
        while (ob9jOfst > a4FE6hGltMN) {
            scanf ("%d", &AKfXFyqoeA[xYJuIpSje1T][a4FE6hGltMN]);
            a4FE6hGltMN++;
        };
    }
    {
        xYJuIpSje1T = 0;
        while (RcI8jxaSe > xYJuIpSje1T) {
            {
                a4FE6hGltMN = 0;
                while (ob9jOfst > a4FE6hGltMN) {
                    if (AKfXFyqoeA[xYJuIpSje1T][a4FE6hGltMN] > x3mAXBZwPcVo[xYJuIpSje1T]) {
                        x3mAXBZwPcVo[xYJuIpSje1T] = AKfXFyqoeA[xYJuIpSje1T][a4FE6hGltMN];
                        hJB8LaglE[xYJuIpSje1T] = a4FE6hGltMN;
                    }
                    a4FE6hGltMN++;
                };
            }
            xYJuIpSje1T++;
        };
    }
    for (xYJuIpSje1T = 0; RcI8jxaSe > xYJuIpSje1T; xYJuIpSje1T++)
        for (a4FE6hGltMN = 0; RcI8jxaSe > a4FE6hGltMN; a4FE6hGltMN++)
            if (AKfXFyqoeA[a4FE6hGltMN][hJB8LaglE[xYJuIpSje1T]] < AKfXFyqoeA[xYJuIpSje1T][hJB8LaglE[xYJuIpSje1T]])
                v1B4qTWZA0[xYJuIpSje1T] = (995 - 994);
    for (xYJuIpSje1T = 0; xYJuIpSje1T < RcI8jxaSe; xYJuIpSje1T++)
        if (v1B4qTWZA0[xYJuIpSje1T] == 0) {
            et865yI0w = 1;
            printf ("%d+%d", xYJuIpSje1T, hJB8LaglE[xYJuIpSje1T]);
            break;
        }
    if (et865yI0w == 0)
        ;
}

