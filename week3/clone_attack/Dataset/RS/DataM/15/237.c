int main (int argc, char *argv []) {
    int OpvDcWZFY0 [11] [11];
    int i, j, IhWz9AIo, a1 = 0, a2 = 0, b1 = 0, b2 = 0, klfhb4ducOpS;
    scanf ("%d", &IhWz9AIo);
    {
        i = 0;
        while (i < IhWz9AIo) {
            {
                j = 0;
                while (j < IhWz9AIo) {
                    scanf ("%d", &OpvDcWZFY0[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < IhWz9AIo) {
            {
                j = 0;
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
                while (j < IhWz9AIo) {
                    if (OpvDcWZFY0[i][j] == 0) {
                        b1 = j;
                        a1 = i;
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
                        break;
                    }
                    j++;
                };
            }
            if (OpvDcWZFY0[a1][b1] == 0) {
                break;
            }
            i++;
        };
    }
    {
        i = IhWz9AIo -1;
        while (i >= 0) {
            {
                j = IhWz9AIo -1;
                while (j >= 0) {
                    if (OpvDcWZFY0[i][j] == 0) {
                        b2 = j;
                        a2 = i;
                        break;
                    }
                    j--;
                };
            }
            if (OpvDcWZFY0[i][j] == 0) {
                break;
            }
            i--;
        };
    }
    klfhb4ducOpS = (b2 - b1 - 1) * (a2 - a1 - 1);
    printf ("\n%d\n", klfhb4ducOpS);
    return 0;
}

