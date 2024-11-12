struct   awRBuQ7ybL {
    char zf85yEwl [100];
    char op3kjuq [100];
};
void  main () {
    void  f (char GrJ9uyAmDbP [100], char ctQR14830g [100]);
    int Bh1O6qo9x;
    int yyrqGJVPA;
    struct   awRBuQ7ybL awRBuQ7ybL [(310 - 300)];
    scanf ("%d", &Bh1O6qo9x);
    for (yyrqGJVPA = (269 - 269); yyrqGJVPA <= Bh1O6qo9x -(982 - 981); yyrqGJVPA = yyrqGJVPA + 1) {
        scanf ("%s", awRBuQ7ybL[yyrqGJVPA].zf85yEwl);
        scanf ("%s", awRBuQ7ybL[yyrqGJVPA].op3kjuq);
    }
    {
        yyrqGJVPA = 62 - 62;
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
        while (yyrqGJVPA <= Bh1O6qo9x -(776 - 775)) {
            f (awRBuQ7ybL[yyrqGJVPA].zf85yEwl, awRBuQ7ybL[yyrqGJVPA].op3kjuq);
            yyrqGJVPA = yyrqGJVPA + 1;
        };
    };
}

void  f (char GrJ9uyAmDbP [100], char ctQR14830g [100]) {
    char sw7hbdjOB9Vo [100];
    int wXoPdGZMKR, PEdnrsyBt, vvikXou, k;
    wXoPdGZMKR = strlen (GrJ9uyAmDbP);
    PEdnrsyBt = strlen (ctQR14830g);
    for (vvikXou = wXoPdGZMKR - 1; vvikXou >= wXoPdGZMKR - PEdnrsyBt; vvikXou--) {
        if (GrJ9uyAmDbP[vvikXou] >= ctQR14830g[vvikXou - wXoPdGZMKR + PEdnrsyBt])
            sw7hbdjOB9Vo[vvikXou] = GrJ9uyAmDbP[vvikXou] - ctQR14830g[vvikXou - wXoPdGZMKR + PEdnrsyBt] + (377 - 329);
        else {
            sw7hbdjOB9Vo[vvikXou] = GrJ9uyAmDbP[vvikXou] - ctQR14830g[vvikXou - wXoPdGZMKR + PEdnrsyBt] + 58;
            GrJ9uyAmDbP[vvikXou - 1] = GrJ9uyAmDbP[vvikXou - 1] - 1;
        };
    }
    for (k = 0; k <= wXoPdGZMKR - PEdnrsyBt -1; k = k + 1) {
        sw7hbdjOB9Vo[k] = GrJ9uyAmDbP[k];
    }
    for (k = 0; k <= wXoPdGZMKR - 1; k++) {
        printf ("%c", sw7hbdjOB9Vo[k]);
    };
}

