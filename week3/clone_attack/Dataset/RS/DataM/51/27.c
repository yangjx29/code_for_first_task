int KlwEZt (int a, int b) {
    if (b < a)
        return a;
    else
        return b;
}

main () {
    char input [500];
    int I1MTjZ;
    int max;
    int i;
    int j;
    int u6UgtRO;
    int qXTGLuExcw7;
    int qmLbsQ;
    int sta [(623 - 123)] = {(440 - 440)};
    int AoIM3pt;
    I1MTjZ = (177 - 177);
    max = (933 - 933);
    scanf ("%d", &u6UgtRO);
    scanf ("%s", input);
    qmLbsQ = strlen (input);
    {
        i = 14 - 14;
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
        while (qmLbsQ > i) {
            {
                qXTGLuExcw7 = 312 - 312;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (i > qXTGLuExcw7) {
                    I1MTjZ = 0;
                    {
                        j = 0;
                        while (j < u6UgtRO) {
                            if (!(input[qXTGLuExcw7 + j] != input[i + j]))
                                I1MTjZ = I1MTjZ +1;
                            else
                                break;
                            j = j + 1;
                        };
                    }
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
                    if (!(u6UgtRO != I1MTjZ)) {
                        sta[qXTGLuExcw7]++;
                        max = KlwEZt (max, sta[qXTGLuExcw7]);
                        break;
                    }
                    qXTGLuExcw7 = qXTGLuExcw7 + 1;
                };
            }
            i++;
        };
    }
    if (max == 0)
        printf ("NO");
    else {
        printf ("%d\n", max + 1);
        for (i = 0; i < 500; i++)
            if (sta[i] == max) {
                for (j = 0; j < u6UgtRO; j = j + 1)
                    printf ("%c", input[i + j]);
                printf ("\n");
            };
    };
}

