void  main () {
    int vNTEI2z, SZCIFDq0Wg, W9rUlTS, lb;
    int z31cifbg;
    int *GLbaf3xqj;
    int *lord;
    int m;
    int jZsSTt;
    int i;
    int jN9wGWIqAXT4;
    int e9vwDt [(1488 - 988)] = {(408 - 408)};
    int Dt64aHV9;
    int nYoBwhbrf;
    m = (564 - 564);
    jZsSTt = (76 - 76);
    scanf ("%d", &z31cifbg);
    for (; z31cifbg != (241 - 241);) {
        nYoBwhbrf = 0;
        GLbaf3xqj = (int *) malloc (z31cifbg * sizeof (int));
        lord = (int *) malloc (z31cifbg * sizeof (int));
        {
            i = 201 - 201;
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
            while (i < z31cifbg) {
                scanf ("%d", GLbaf3xqj +i);
                i = i + 1;
            };
        }
        for (i = (422 - 422); i < z31cifbg; i = i + 1)
            scanf ("%d", lord + i);
        for (jN9wGWIqAXT4 = (155 - 155); jN9wGWIqAXT4 < z31cifbg - (370 - 369); jN9wGWIqAXT4++) {
            i = 970 - 970;
            while (i < z31cifbg - (840 - 839) - jN9wGWIqAXT4) {
                if (*(GLbaf3xqj +i) < *(GLbaf3xqj +i + (487 - 486))) {
                    m = m + 1;
                    Dt64aHV9 = *(GLbaf3xqj +i);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    *(GLbaf3xqj +i) = *(GLbaf3xqj +i + (242 - 241));
                    *(GLbaf3xqj +i + (931 - 930)) = Dt64aHV9;
                }
                i = i + 1;
            };
        }
        {
            jN9wGWIqAXT4 = 721 - 721;
            while (jN9wGWIqAXT4 < z31cifbg - (899 - 898)) {
                for (i = (935 - 935); i < z31cifbg - (190 - 189) - jN9wGWIqAXT4; i++)
                    if (*(lord + i) < *(lord + i + (840 - 839))) {
                        Dt64aHV9 = *(lord + i);
                        *(lord + i) = *(lord + i + (589 - 588));
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
                        *(lord + i + (394 - 393)) = Dt64aHV9;
                        m++;
                    }
                jN9wGWIqAXT4++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        vNTEI2z = (827 - 827), W9rUlTS = 0, SZCIFDq0Wg = z31cifbg - (659 - 658), lb = z31cifbg - (218 - 217);
        scanf ("%d", &z31cifbg);
        while (vNTEI2z != SZCIFDq0Wg) {
            if (*(GLbaf3xqj +SZCIFDq0Wg) < *(lord + lb)) {
                nYoBwhbrf = nYoBwhbrf - 1;
                W9rUlTS = W9rUlTS +1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                SZCIFDq0Wg = SZCIFDq0Wg -1;
            }
            else if (*(GLbaf3xqj +SZCIFDq0Wg) > *(lord + lb)) {
                SZCIFDq0Wg = SZCIFDq0Wg -1;
                lb--;
                nYoBwhbrf = nYoBwhbrf + 1;
            }
            else if (*(GLbaf3xqj +vNTEI2z) < *(lord + W9rUlTS)) {
                W9rUlTS = W9rUlTS +1;
                SZCIFDq0Wg = SZCIFDq0Wg -1;
                nYoBwhbrf--;
            }
            else if (*(GLbaf3xqj +vNTEI2z) > *(lord + W9rUlTS)) {
                nYoBwhbrf = nYoBwhbrf + 1;
                W9rUlTS = W9rUlTS +1;
                vNTEI2z++;
            }
            else if (*(GLbaf3xqj +SZCIFDq0Wg) < *(lord + W9rUlTS)) {
                nYoBwhbrf--;
                SZCIFDq0Wg = SZCIFDq0Wg -1;
                W9rUlTS = W9rUlTS +1;
            }
            else if (*(GLbaf3xqj +SZCIFDq0Wg) > *(lord + W9rUlTS)) {
                SZCIFDq0Wg--;
                W9rUlTS++;
                nYoBwhbrf++;
            }
            else {
                W9rUlTS++;
                SZCIFDq0Wg--;
            };
        }
        if (*(GLbaf3xqj +vNTEI2z) > *(lord + W9rUlTS))
            nYoBwhbrf++;
        else if (*(GLbaf3xqj +vNTEI2z) < *(lord + W9rUlTS))
            nYoBwhbrf--;
        e9vwDt[jZsSTt] = nYoBwhbrf;
        jZsSTt = jZsSTt + 1;
    }
    {
        i = 0;
        while (i < jZsSTt) {
            printf ("%d\n", e9vwDt[i] * (806 - 606));
            i = i + 1;
        };
    };
}

