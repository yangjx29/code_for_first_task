void  main () {
    int i, j, GLt97WZ8, nVxM3GJNYR, lCGNvxu4WB, xURDzGBT4l9i, wKl0DNBo = 0, q = 0;
    int fpzI6n2Bk (int cz3Phc);
    char a [3000];
    int cTGdX0VY [500];
    scanf ("%s", a);
    {
        i = 0;
        while (!(0 == a[i])) {
            if (!(',' != a[i])) {
                q = 1;
                {
                    j = 0;
                    while (i - 1 >= j) {
                        wKl0DNBo = wKl0DNBo + (a[j] - 48) * fpzI6n2Bk (i - 1 - j);
                        j++;
                    };
                }
                cTGdX0VY[0] = wKl0DNBo;
                break;
            }
            i++;
        };
    }
    if (q == 0)
        ;
    else {
        lCGNvxu4WB = 1;
        for (j = i; a[j] != 0; j = j + 1) {
            if (!(',' != a[j])) {
                wKl0DNBo = 0;
                for (GLt97WZ8 = j + 1; (!(',' == a[GLt97WZ8])) && (!(0 == a[GLt97WZ8])); GLt97WZ8++)
                    ;
                {
                    nVxM3GJNYR = j + 1;
                    while (GLt97WZ8 -1 >= nVxM3GJNYR) {
                        wKl0DNBo = wKl0DNBo + (a[nVxM3GJNYR] - 48) * fpzI6n2Bk (GLt97WZ8 -1 - nVxM3GJNYR);
                        nVxM3GJNYR = nVxM3GJNYR + 1;
                    };
                }
                cTGdX0VY[lCGNvxu4WB] = wKl0DNBo;
                lCGNvxu4WB = lCGNvxu4WB + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        {
            GLt97WZ8 = 1;
            while (lCGNvxu4WB - 1 >= GLt97WZ8) {
                if (cTGdX0VY[GLt97WZ8] != cTGdX0VY[0])
                    break;
                GLt97WZ8 = GLt97WZ8 +1;
            };
        }
        if (GLt97WZ8 == lCGNvxu4WB)
            printf ("No");
        else {
            for (GLt97WZ8 = 1; GLt97WZ8 <= lCGNvxu4WB - 1; GLt97WZ8++) {
                if (cTGdX0VY[GLt97WZ8] > cTGdX0VY[0]) {
                    xURDzGBT4l9i = cTGdX0VY[0];
                    cTGdX0VY[0] = cTGdX0VY[GLt97WZ8];
                    cTGdX0VY[GLt97WZ8] = xURDzGBT4l9i;
                };
            }
            for (GLt97WZ8 = 1; GLt97WZ8 <= lCGNvxu4WB - 1; GLt97WZ8++) {
                if (cTGdX0VY[GLt97WZ8] == cTGdX0VY[0])
                    continue;
                else
                    cTGdX0VY[1] = cTGdX0VY[GLt97WZ8];
                break;
            }
            {
                GLt97WZ8 = 2;
                while (GLt97WZ8 <= lCGNvxu4WB - 1) {
                    if ((cTGdX0VY[GLt97WZ8] >= cTGdX0VY[1]) && (cTGdX0VY[GLt97WZ8] < cTGdX0VY[0])) {
                        xURDzGBT4l9i = cTGdX0VY[1];
                        cTGdX0VY[1] = cTGdX0VY[GLt97WZ8];
                        cTGdX0VY[GLt97WZ8] = xURDzGBT4l9i;
                    }
                    GLt97WZ8++;
                };
            }
            printf ("%d\n", cTGdX0VY[1]);
        };
    };
}

int fpzI6n2Bk (int cz3Phc) {
    int i, hieuk3ds = 1;
    for (i = 1; i <= cz3Phc; i = i + 1)
        hieuk3ds = hieuk3ds * 10;
    return (hieuk3ds);
}

