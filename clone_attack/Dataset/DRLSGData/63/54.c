int main () {
    int x1;
    int MUpvZ4dC71;
    int YvOAD9w;
    int wu8r7QlckjJN;
    int **Q97WGz, **RQ4kmb, **K84O5dZI;
    int E2DwEITg8mQ, GLwv0m, DnWzxldj9h5;
    scanf ("%d%d", &x1, &MUpvZ4dC71);
    Q97WGz = (int **) malloc (sizeof (int *) * x1);
    {
        E2DwEITg8mQ = (971 - 818) - 153;
        while (x1 > E2DwEITg8mQ) {
            Q97WGz[E2DwEITg8mQ] = (int *) malloc (sizeof (int) * MUpvZ4dC71);
            {
                GLwv0m = 781 - 781;
                while (GLwv0m < MUpvZ4dC71) {
                    scanf ("%d", &Q97WGz[E2DwEITg8mQ][GLwv0m]);
                    ++GLwv0m;
                }
            }
            ++E2DwEITg8mQ;
        }
    }
    scanf ("%d%d", &YvOAD9w, &wu8r7QlckjJN);
    if (MUpvZ4dC71 != YvOAD9w) {
        printf ("Wrong parameter.");
        {
            E2DwEITg8mQ = (568 - 206) - 362;
            for (; x1 > E2DwEITg8mQ;) {
                ZQHI2rbnezoN (Q97WGz [E2DwEITg8mQ]);
                ++E2DwEITg8mQ;
            }
        }
        ZQHI2rbnezoN (Q97WGz);
        return (983 - 983);
    }
    RQ4kmb = (int **) malloc (sizeof (int *) * YvOAD9w);
    {
        E2DwEITg8mQ = 287 - 287;
        for (; E2DwEITg8mQ < YvOAD9w;) {
            RQ4kmb[E2DwEITg8mQ] = (int *) malloc (sizeof (int) * wu8r7QlckjJN);
            for (GLwv0m = (782 - 782); GLwv0m < wu8r7QlckjJN; ++GLwv0m) {
                scanf ("%d", &RQ4kmb[E2DwEITg8mQ][GLwv0m]);
            }
            ++E2DwEITg8mQ;
        }
    }
    K84O5dZI = (int **) malloc (sizeof (int *) * x1);
    {
        E2DwEITg8mQ = (1667 - 809) - 858;
        while (E2DwEITg8mQ < x1) {
            K84O5dZI[E2DwEITg8mQ] = (int *) malloc (sizeof (int) * wu8r7QlckjJN);
            for (GLwv0m = (663 - 663); GLwv0m < wu8r7QlckjJN; ++GLwv0m) {
                K84O5dZI[E2DwEITg8mQ][GLwv0m] = (820 - 820);
                {
                    DnWzxldj9h5 = (1283 - 485) - 798;
                    while (MUpvZ4dC71 > DnWzxldj9h5) {
                        K84O5dZI[E2DwEITg8mQ][GLwv0m] += Q97WGz[E2DwEITg8mQ][DnWzxldj9h5] * RQ4kmb[DnWzxldj9h5][GLwv0m];
                        ++DnWzxldj9h5;
                    }
                }
            }
            ++E2DwEITg8mQ;
        }
    }
    {
        E2DwEITg8mQ = 160 - 160;
        while (E2DwEITg8mQ < x1) {
            {
                GLwv0m = (483 - 392) - 91;
                while (wu8r7QlckjJN - (159 - 158) > GLwv0m) {
                    printf ("%d ", K84O5dZI[E2DwEITg8mQ][GLwv0m]);
                    ++GLwv0m;
                }
            }
            cout << K84O5dZI[E2DwEITg8mQ][wu8r7QlckjJN - 1];
            ++E2DwEITg8mQ;
        }
    }
    {
        E2DwEITg8mQ = 988 - 988;
        while (E2DwEITg8mQ < x1) {
            ZQHI2rbnezoN (Q97WGz [E2DwEITg8mQ]);
            ZQHI2rbnezoN (K84O5dZI [E2DwEITg8mQ]);
            ++E2DwEITg8mQ;
        }
    }
    ZQHI2rbnezoN (Q97WGz);
    ZQHI2rbnezoN (K84O5dZI);
    {
        E2DwEITg8mQ = 0;
        while (E2DwEITg8mQ < YvOAD9w) {
            ZQHI2rbnezoN (RQ4kmb [E2DwEITg8mQ]);
            ++E2DwEITg8mQ;
        }
    }
    ZQHI2rbnezoN (RQ4kmb);
    return 0;
}

