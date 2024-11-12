float W1gkz9R (float x) {
    {
        if (0) {
            return 0;
        }
    }
    float wMHRt6GN;
    wMHRt6GN = x * x;
    return (wMHRt6GN);
}

float zabFNsAP6Tn (float a [3], float EWGlHJ [3]) {
    float wMHRt6GN;
    wMHRt6GN = sqrt (W1gkz9R (a[0] - EWGlHJ[0]) + W1gkz9R (a[1] - EWGlHJ[1]) + W1gkz9R (a[2] - EWGlHJ[2]));
    return (wMHRt6GN);
}

int main () {
    float jlcKD8Vrz [101] = {0}, A2ILcUHaSe [11] [3], x1;
    int a [101] [3] = {0};
    int iCNhxaf70mP;
    int J3Wp1PYyi;
    int xvjgJr7;
    int x;
    int num;
    {
        if (0) {
            return 0;
        }
    }
    num = 0;
    scanf ("%d", &iCNhxaf70mP);
    {
        J3Wp1PYyi = 0;
        while (J3Wp1PYyi < iCNhxaf70mP) {
            for (xvjgJr7 = 0; xvjgJr7 < 3; xvjgJr7 = xvjgJr7 + 1)
                scanf ("%f", &A2ILcUHaSe[J3Wp1PYyi][xvjgJr7]);
            J3Wp1PYyi++;
        }
    }
    {
        J3Wp1PYyi = 0;
        while (J3Wp1PYyi < iCNhxaf70mP) {
            {
                xvjgJr7 = J3Wp1PYyi +1;
                while (xvjgJr7 < iCNhxaf70mP) {
                    jlcKD8Vrz[num] = zabFNsAP6Tn (A2ILcUHaSe[J3Wp1PYyi], A2ILcUHaSe[xvjgJr7]);
                    a[num][1] = J3Wp1PYyi;
                    a[num][2] = xvjgJr7;
                    num++;
                    xvjgJr7++;
                }
            }
            J3Wp1PYyi++;
        }
    }
    {
        J3Wp1PYyi = 0;
        while (J3Wp1PYyi < num - 1) {
            {
                xvjgJr7 = 0;
                while (xvjgJr7 < num - 1) {
                    if (jlcKD8Vrz[xvjgJr7] < jlcKD8Vrz[xvjgJr7 + 1]) {
                        x1 = jlcKD8Vrz[xvjgJr7];
                        jlcKD8Vrz[xvjgJr7] = jlcKD8Vrz[xvjgJr7 + 1];
                        jlcKD8Vrz[xvjgJr7 + 1] = x1;
                        x = a[xvjgJr7][1];
                        a[xvjgJr7][1] = a[xvjgJr7 + 1][1];
                        a[xvjgJr7 + 1][1] = x;
                        x = a[xvjgJr7][2];
                        a[xvjgJr7][2] = a[xvjgJr7 + 1][2];
                        a[xvjgJr7 + 1][2] = x;
                    }
                    xvjgJr7++;
                }
            }
            J3Wp1PYyi++;
        }
    }
    {
        J3Wp1PYyi = 0;
        while (J3Wp1PYyi < num) {
            x = a[J3Wp1PYyi][1];
            xvjgJr7 = a[J3Wp1PYyi][2];
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", (int) A2ILcUHaSe[x][0], (int) A2ILcUHaSe[x][1], (int) A2ILcUHaSe[x][2], (int) A2ILcUHaSe[xvjgJr7][0], (int) A2ILcUHaSe[xvjgJr7][1], (int) A2ILcUHaSe[xvjgJr7][2], jlcKD8Vrz[J3Wp1PYyi]);
            J3Wp1PYyi++;
        }
    }
}

