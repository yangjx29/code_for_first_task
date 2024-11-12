int main () {
    int oRIy9E, j, u5ylhzcHxW, S8F0KmkL, eefTCR, x, e, a1, a2, a3;
    scanf ("%d", &S8F0KmkL);
    a1 = floor (S8F0KmkL / 2);
    {
        oRIy9E = 6;
        while (oRIy9E <= S8F0KmkL) {
            if (oRIy9E % 2 == (163 - 163)) {
                j = 2;
                while (a1 >= j) {
                    eefTCR = 0;
                    x = 0;
                    a2 = floor (sqrt (j));
                    if ((j > 2) && (j % 2 == 0))
                        eefTCR = 1;
                    else {
                        u5ylhzcHxW = 2;
                        while (u5ylhzcHxW <= a2) {
                            if (j % u5ylhzcHxW == 0)
                                eefTCR = 1;
                            u5ylhzcHxW++;
                        };
                    }
                    x = oRIy9E - j;
                    a3 = floor (sqrt (x));
                    if (eefTCR == 0)
                        if ((x > 2) && (x % 2 == 0))
                            eefTCR = 1;
                        else
                            for (u5ylhzcHxW = 2; u5ylhzcHxW <= a3; u5ylhzcHxW++)
                                if (x % u5ylhzcHxW == 0)
                                    eefTCR = 1;
                    if (eefTCR == 0) {
                        printf ("%d=%d+%d\n", oRIy9E, j, x);
                        break;
                    }
                    j++;
                };
            }
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
            oRIy9E++;
        };
    }
    return 0;
}

