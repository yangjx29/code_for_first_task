int main () {
    char sYPjiDEWvU9 [300];
    gets (sYPjiDEWvU9);
    int lbYDOvtTZAV [55] = {0}, i, mBSLeyPZ, TPvp69;
    TPvp69 = 0;
    mBSLeyPZ = strlen (sYPjiDEWvU9);
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= mBSLeyPZ - 1) {
            if ('a' <= sYPjiDEWvU9[i] && sYPjiDEWvU9[i] <= 'z')
                lbYDOvtTZAV[(int) (sYPjiDEWvU9 [i]) -68]++;
            if (sYPjiDEWvU9[i] >= 'A' && sYPjiDEWvU9[i] <= 'Z')
                lbYDOvtTZAV[(int) (sYPjiDEWvU9 [i]) -64]++;
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
            i++;
        };
    }
    {
        i = 1;
        while (i <= 27) {
            if (lbYDOvtTZAV[i] != 0) {
                TPvp69 = 1;
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
                printf ("%c=%d\n", 64 + i, lbYDOvtTZAV[i]);
            }
            i++;
        };
    }
    {
        i = 28;
        while (i <= 54) {
            if (lbYDOvtTZAV[i] != 0) {
                TPvp69 = 1;
                printf ("%c=%d\n", 68 + i, lbYDOvtTZAV[i]);
            }
            i++;
        };
    }
    if (TPvp69 == 0)
        printf ("No");
    return 0;
}

