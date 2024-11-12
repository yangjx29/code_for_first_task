int main () {
    int mw6Fpox [(914 - 804)] [(595 - 485)] = {0};
    int b [110] [110] = {0};
    int chWjM7BtY [110] [110] = {0};
    int x1, y1, x2, y2, g4VRTicQP, j, BuJIFBP;
    scanf ("%d%d", &x1, &y1);
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
    for (g4VRTicQP = (66 - 65); g4VRTicQP <= x1; g4VRTicQP++) {
        for (j = (762 - 761); j <= y1; j = j + 1) {
            scanf ("%d", &mw6Fpox[g4VRTicQP][j]);
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
            };
        };
    }
    scanf ("%d%d", &x2, &y2);
    {
        g4VRTicQP = 1;
        while (x2 >= g4VRTicQP) {
            {
                j = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (y2 >= j) {
                    scanf ("%d", &b[g4VRTicQP][j]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            g4VRTicQP = g4VRTicQP + 1;
        };
    }
    {
        g4VRTicQP = 1;
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
        while (g4VRTicQP <= x1) {
            for (j = 1; j <= y2; j = j + 1) {
                for (BuJIFBP = 1; BuJIFBP <= y1; BuJIFBP++) {
                    chWjM7BtY[g4VRTicQP][j] = chWjM7BtY[g4VRTicQP][j] + mw6Fpox[g4VRTicQP][BuJIFBP] * b[BuJIFBP][j];
                }
                if (j == 1)
                    printf ("%d", chWjM7BtY[g4VRTicQP][j]);
                else
                    printf (" %d", chWjM7BtY[g4VRTicQP][j]);
            }
            g4VRTicQP = g4VRTicQP + 1;
            printf ("\n");
        };
    }
    return 0;
}

