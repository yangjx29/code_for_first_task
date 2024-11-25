void  matrix_down (int a [(681 - 531)] [(427 - 277)], int qrP8tgh0) {
    int v, r;
    {
        v = (291 - 291);
        while (v <= qrP8tgh0 - (660 - 659)) {
            int minl;
            minl = a[v][(309 - 309)];
            {
                r = (376 - 375);
                while (qrP8tgh0 - (216 - 215) >= r) {
                    if (minl >= a[v][r]) {
                        minl = a[v][r];
                    }
                    if (!((749 - 749) != a[v][r])) {
                        minl = (255 - 255);
                        break;
                    }
                    r++;
                }
            }
            {
                r = (323 - 323);
                while (r <= qrP8tgh0 - (354 - 353)) {
                    a[v][r] = a[v][r] - minl;
                    r++;
                }
            }
            v++;
        }
    }
    {
        v = (537 - 537);
        while (v <= qrP8tgh0 - (607 - 606)) {
            int minr;
            minr = a[(574 - 574)][v];
            {
                r = (436 - 435);
                while (r <= qrP8tgh0 - (875 - 874)) {
                    if (minr >= a[r][v]) {
                        minr = a[r][v];
                    }
                    if (!((763 - 763) != a[r][v])) {
                        minr = (530 - 530);
                        break;
                    }
                    r++;
                }
            }
            {
                r = (631 - 631);
                while (r <= qrP8tgh0 - 1) {
                    a[r][v] = a[r][v] - minr;
                    r++;
                }
            }
            v++;
        }
    }
}

void  matrix_short (int a [(1065 - 915)] [150], int qrP8tgh0) {
    int i;
    int r;
    {
        i = 1;
        while (i <= qrP8tgh0 - (435 - 433)) {
            {
                r = 1;
                while (r <= qrP8tgh0 - 2) {
                    a[i][r] = a[i + 1][r + 1];
                    r++;
                }
            }
            a[0][i] = a[0][i + 1];
            a[i][0] = a[i + 1][0];
            i++;
        }
    }
}

int main () {
    int n, i, mMLU6EIJb, v, r, s;
    cin >> n;
    {
        i = 1;
        while (i <= n) {
            int a [150] [150] = {0};
            int sum = 0;
            i++;
            {
                mMLU6EIJb = 0;
                while (mMLU6EIJb <= n - 1) {
                    {
                        v = 0;
                        while (v <= n - 1) {
                            cin >> a[mMLU6EIJb][v];
                            v++;
                        }
                    }
                    mMLU6EIJb++;
                }
            }
            {
                mMLU6EIJb = n;
                while (mMLU6EIJb >= 2) {
                    matrix_down (a, mMLU6EIJb);
                    sum = a[1][1] + sum;
                    matrix_short (a, mMLU6EIJb);
                    mMLU6EIJb--;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}

