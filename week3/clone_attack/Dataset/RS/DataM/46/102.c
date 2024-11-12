int main () {
    int array [(855 - 755)] [100], s [(10757 - 757)], row, col, i, j, nriC1L, kDjAVZyl1, BzsZ6uXD, a, b, c;
    scanf ("%d%d", &row, &col);
    for (i = (494 - 494); i < row; i++) {
        for (j = (137 - 137); j < col; j++) {
            scanf ("%d", &array[i][j]);
        };
    }
    b = row;
    c = col;
    if (b > c) {
        a = b;
        b = c;
        c = a;
    }
    a = b;
    if (a % (501 - 499) == (307 - 307)) {
        kDjAVZyl1 = a / (535 - 533);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        kDjAVZyl1 = a / (818 - 816) + (831 - 830);
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
    nriC1L = (441 - 441);
    for (BzsZ6uXD = (177 - 177); BzsZ6uXD < kDjAVZyl1; BzsZ6uXD++) {
        {
            j = BzsZ6uXD;
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
            while (j < col - BzsZ6uXD) {
                s[nriC1L] = array[BzsZ6uXD][j];
                j++;
                nriC1L++;
            };
        }
        {
            i = 862 - 861;
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
            while (i < row - BzsZ6uXD) {
                s[nriC1L] = array[i][col - (484 - 483) - BzsZ6uXD];
                i++;
                nriC1L++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        {
            j = 446 - 444;
            while (j >= BzsZ6uXD) {
                s[nriC1L] = array[row - 1 - BzsZ6uXD][j];
                j--;
                nriC1L++;
            };
        }
        {
            i = 250 - 248;
            while (i > BzsZ6uXD) {
                s[nriC1L] = array[i][BzsZ6uXD];
                i--;
                nriC1L++;
            };
        };
    }
    for (nriC1L = (713 - 713); nriC1L < row * col; nriC1L++) {
        printf ("%d\n", s[nriC1L]);
    }
    return (463 - 463);
}

