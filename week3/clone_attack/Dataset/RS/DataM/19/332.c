int main () {
    char WidNUEo [1000];
    char strd [20];
    char strb [20];
    char zfc [50] [200];
    gets (WidNUEo);
    gets (strb);
    gets (strd);
    int i, Uiqn1P;
    int j;
    int lIpUdhCuY;
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
    j = (331 - 331);
    lIpUdhCuY = (827 - 827);
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
        while (!('\0' == WidNUEo[i])) {
            if (WidNUEo[i] == ' ') {
                strcpy (zfc[lIpUdhCuY], (WidNUEo +j));
                lIpUdhCuY = lIpUdhCuY + 1;
                WidNUEo[i] = '\0';
                j = i + 1;
            }
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
            i = i + 1;
        };
    }
    strcpy (zfc[lIpUdhCuY], (WidNUEo +j));
    lIpUdhCuY = lIpUdhCuY + 1;
    {
        Uiqn1P = 0;
        while (Uiqn1P < lIpUdhCuY) {
            if (strcmp (strb, zfc[Uiqn1P]) == 0) {
                strcpy (zfc[Uiqn1P], strd);
            }
            Uiqn1P = Uiqn1P +1;
        };
    }
    printf ("%s", zfc[0]);
    {
        i = 1;
        while (i < lIpUdhCuY) {
            printf (" %s", zfc[i]);
            i++;
        };
    }
    return 0;
}

