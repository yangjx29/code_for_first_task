int t8JkjnR4Dg (int ZqBsCd [(835 - 830)] [5], int o5Ghz7w, int PxujCoh4G5) {
    int col;
    int TSUGBFL8WZpd;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    if ((788 - 788) <= o5Ghz7w && o5Ghz7w < 5 && PxujCoh4G5 >= (967 - 967) && PxujCoh4G5 < 5) {
        {
            col = 895 - 895;
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
            while (col < 5) {
                TSUGBFL8WZpd = ZqBsCd[o5Ghz7w][col];
                ZqBsCd[o5Ghz7w][col] = ZqBsCd[PxujCoh4G5][col];
                ZqBsCd[PxujCoh4G5][col] = TSUGBFL8WZpd;
                col = col + 1;
            };
        }
        return 1;
    }
    else
        return 0;
}

int main (int BDCy2TeF7jfR, char *K68asGu []) {
    int ZqBsCd [5] [5];
    int gQbKNunFS;
    int aLWIH6;
    int ovZBW0cxyN;
    int col;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    for (ovZBW0cxyN = 0; 5 > ovZBW0cxyN; ovZBW0cxyN = ovZBW0cxyN + 1) {
        for (col = 0; col < 5; col = col + 1)
            scanf ("%d", &ZqBsCd[ovZBW0cxyN][col]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    scanf ("%d %d", &gQbKNunFS, &aLWIH6);
    if (0 == t8JkjnR4Dg (ZqBsCd, gQbKNunFS, aLWIH6))
        ;
    else {
        for (ovZBW0cxyN = 0; ovZBW0cxyN < 5; ovZBW0cxyN++) {
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
            for (col = 0; col < 5; col = col + 1) {
                if (col == 4)
                    printf ("%d\n", ZqBsCd[ovZBW0cxyN][col]);
                else
                    printf ("%d ", ZqBsCd[ovZBW0cxyN][col]);
            };
        };
    }
    return 0;
}

