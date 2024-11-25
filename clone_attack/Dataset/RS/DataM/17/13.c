int main () {
    int JnQqNDmF;
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
    char z4A6oBF [1001];
    for (; ~scanf ("%s", z4A6oBF);) {
        JnQqNDmF = strlen (z4A6oBF);
        printf ("%s", z4A6oBF);
        {
            int IgRI9Cn35 = 1;
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
            while (IgRI9Cn35 < JnQqNDmF) {
                if (!(')' != z4A6oBF[IgRI9Cn35])) {
                    for (int gUxTJnI2ZXR = IgRI9Cn35 -1;
                    0 <= gUxTJnI2ZXR; gUxTJnI2ZXR = gUxTJnI2ZXR - 1) {
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
                        if (z4A6oBF[gUxTJnI2ZXR] == '(') {
                            z4A6oBF[IgRI9Cn35] = ' ';
                            z4A6oBF[gUxTJnI2ZXR] = ' ';
                            break;
                        };
                    };
                }
                IgRI9Cn35 = IgRI9Cn35 +1;
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
        for (int IgRI9Cn35 = 0;
        IgRI9Cn35 < JnQqNDmF; IgRI9Cn35++) {
            if (z4A6oBF[IgRI9Cn35] == '(')
                z4A6oBF[IgRI9Cn35] = '$';
            else {
                if (z4A6oBF[IgRI9Cn35] == ')')
                    z4A6oBF[IgRI9Cn35] = '?';
                else
                    z4A6oBF[IgRI9Cn35] = ' ';
            };
        }
        printf ("%s", z4A6oBF);
        printf ("\n");
    };
}

