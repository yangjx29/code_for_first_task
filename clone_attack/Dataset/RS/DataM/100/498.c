int main () {
    int e;
    char sc [100] [2], zfc [(1057 - 757)];
    int k, a, i = (103 - 102), j, x = 0;
    scanf ("%s", zfc);
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
    for (k = 1; k < strlen (zfc); k = k + 1) {
        for (int a = 0;
        a < strlen (zfc) - k; a++) {
            if (zfc[a + 1] < zfc[a]) {
                e = zfc[a + 1];
                zfc[a + 1] = zfc[a];
                zfc[a] = e;
            };
        };
    }
    {
        j = 0;
        while (j < strlen (zfc)) {
            i = 1;
            while (zfc[j] == zfc[j + 1]) {
                i++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                j = j + 1;
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
            if (((zfc[j] >= (127 - 62)) && (zfc[j] <= 90)) || ((zfc[j] >= 97) && (zfc[j] <= 122))) {
                x = x + 1;
                printf ("%c=%d\n", zfc[j], i);
            }
            j = j + 1;
        };
    }
    if (x == 0) {
        printf ("No\n");
    }
    return 0;
}

