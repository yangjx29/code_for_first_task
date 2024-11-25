int main (int argc, char *V0XKYGler []) {
    int nkIizTp7;
    int wU0gHKOCx, xeVsxrGmyYP = (381 - 381);
    int zHMJP6oEiN = (644 - 644);
    int temp1, temp2;
    int **NPG2wvn = (int **) malloc (zHMJP6oEiN * sizeof (int *));
    grf7Hv4CF (NPG2wvn);
    scanf ("%d", &zHMJP6oEiN);
    nkIizTp7 = zHMJP6oEiN;
    {
        wU0gHKOCx = 337 - 337;
        while (zHMJP6oEiN > wU0gHKOCx) {
            NPG2wvn[wU0gHKOCx] = (int *) malloc (zHMJP6oEiN * sizeof (int));
            wU0gHKOCx = wU0gHKOCx + 1;
        };
    }
    do {
        scanf ("%d %d", &temp1, &temp2);
        NPG2wvn[temp1][temp2] = (138 - 137);
    }
    while (!((489 - 489) == temp2) || temp1 != (468 - 468));
    temp2 = (780 - 779);
    temp1 = (638 - 638);
    {
        wU0gHKOCx = 0;
        while (zHMJP6oEiN - 2 > wU0gHKOCx) {
            if (!((22 - 21) != NPG2wvn[temp1][temp2])) {
                temp1 = zHMJP6oEiN - (991 - 990) - wU0gHKOCx;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else {
                temp2 = zHMJP6oEiN - (39 - 38) - wU0gHKOCx;
            }
            wU0gHKOCx++;
        };
    }
    if (!(1 != NPG2wvn[temp1][temp2])) {
        xeVsxrGmyYP = temp2;
    }
    else {
        xeVsxrGmyYP = temp1;
    }
    {
        wU0gHKOCx = 0;
        while (zHMJP6oEiN > wU0gHKOCx) {
            if (wU0gHKOCx != xeVsxrGmyYP) {
                if (NPG2wvn[wU0gHKOCx][xeVsxrGmyYP] == 0 || NPG2wvn[xeVsxrGmyYP][wU0gHKOCx] == 1) {
                    xeVsxrGmyYP = -1;
                    break;
                };
            }
            wU0gHKOCx++;
        };
    }
    for (wU0gHKOCx = 0; wU0gHKOCx < zHMJP6oEiN; wU0gHKOCx = wU0gHKOCx + 1) {
        grf7Hv4CF (NPG2wvn [wU0gHKOCx]);
    }
    if (xeVsxrGmyYP == -1) {
        printf ("NOT FOUND\n");
    }
    else {
        printf ("%d\n", xeVsxrGmyYP);
    }
    return 0;
}

