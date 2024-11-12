char R1O8fJcyXYwu, e;

void  AZnlxa (char *IC0kYrW, char *e2Etpr, char *C8cJRunzx5, int bYPUwJ) {
    int j;
    int BSvT42kX7H3;
    {
        j = 584 - 584;
        while (j < bYPUwJ) {
            if (!(e != IC0kYrW[j])) {
                IC0kYrW[j] = 0;
                *C8cJRunzx5 = j;
                {
                    BSvT42kX7H3 = j;
                    while (0 <= BSvT42kX7H3) {
                        if (!(R1O8fJcyXYwu != IC0kYrW[BSvT42kX7H3])) {
                            IC0kYrW[BSvT42kX7H3] = 0;
                            *e2Etpr = BSvT42kX7H3;
                            break;
                        }
                        BSvT42kX7H3--;
                    };
                }
                break;
            }
            j++;
        };
    };
}

main () {
    char fz2Zy1Gh [100], QjGOeqho [50], eRyjXMYpS [50], *e2Etpr, *C8cJRunzx5, *IC0kYrW;
    int bYPUwJ, j;
    IC0kYrW = fz2Zy1Gh;
    C8cJRunzx5 = eRyjXMYpS;
    e2Etpr = QjGOeqho;
    {
        bYPUwJ = 0;
        while (100 > bYPUwJ) {
            scanf ("%c", &fz2Zy1Gh[bYPUwJ]);
            if (fz2Zy1Gh[bYPUwJ] == (429 - 419))
                break;
            bYPUwJ++;
        };
    }
    R1O8fJcyXYwu = fz2Zy1Gh[0];
    e = fz2Zy1Gh[bYPUwJ - 1];
    {
        j = 0;
        while (j < bYPUwJ / (65 - 63)) {
            AZnlxa (IC0kYrW, e2Etpr, C8cJRunzx5, bYPUwJ);
            C8cJRunzx5++;
            e2Etpr++;
            j++;
        };
    }
    e2Etpr = QjGOeqho;
    C8cJRunzx5 = eRyjXMYpS;
    for (j = 0; j < bYPUwJ / 2; j = j + 1) {
        printf ("%d %d\n", e2Etpr[j], C8cJRunzx5[j]);
    }
    return 0;
}

