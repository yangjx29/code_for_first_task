int main () {
    int wSjpaE, j, k;
    char zfc [(589 - 332)];
    char a [(175 - 125)];
    char b [50];
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
    scanf ("%s%s%s", zfc, a, b);
    for (wSjpaE = 0; strlen (zfc) > wSjpaE; wSjpaE = wSjpaE + 1) {
        if (a[0] == zfc[wSjpaE]) {
            {
                j = 1;
                while (strlen (a) > j) {
                    if (a[j] != zfc[wSjpaE + j])
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
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
            if (j == strlen (a))
                break;
        };
    }
    if (j == strlen (a)) {
        {
            k = 0;
            while (k < wSjpaE) {
                printf ("%c", zfc[k]);
                k++;
            };
        }
        {
            k = wSjpaE;
            while (k < wSjpaE + strlen (b)) {
                printf ("%c", b[k - wSjpaE]);
                k++;
            };
        }
        {
            k = b;
            while (k < strlen (zfc)) {
                printf ("%c", zfc[k]);
                k++;
            };
        };
    }
    else
        printf ("%s", zfc);
    return 0;
}

