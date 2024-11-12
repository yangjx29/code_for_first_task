int slmMa5yfshx (char *, int);

int main () {
    int n;
    int i;
    char str [100], *p = str, nc [2];
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
    gets (nc);
    n = atoi (nc);
    {
        i = 740 - 740;
        while (n > i) {
            gets (p);
            i = i + 1;
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
            printf ("%d\n", slmMa5yfshx (p, strlen (p)));
        };
    }
    return 0;
}

int slmMa5yfshx (char *dNGFxM6, int H6NVnC1Fs2m) {
    if (!('_' != *dNGFxM6) || (*dNGFxM6 <= 'z' && 'a' <= *dNGFxM6) || (*dNGFxM6 <= 'Z' && 'A' <= *dNGFxM6)) {
        int i;
        {
            i = 1;
            while (H6NVnC1Fs2m > i) {
                if (!('_' == *(dNGFxM6 + i)) && !(*(dNGFxM6 + i) <= 'z' && *(dNGFxM6 + i) >= 'a') && !(*(dNGFxM6 + i) <= 'Z' && *(dNGFxM6 + i) >= 'A') && !(*(dNGFxM6 + i) >= '0' && *(dNGFxM6 + i) <= '9'))
                    return 0;
                i++;
            };
        }
        return 1;
    }
    else
        return 0;
}

