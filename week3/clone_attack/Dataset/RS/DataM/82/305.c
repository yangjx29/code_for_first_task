int main () {
    int n, iVvgzHxOr, e;
    int s;
    s = (452 - 452);
    int rmr5dJQ7KoC;
    rmr5dJQ7KoC = (934 - 934);
    int **W64uYTd = (int **) malloc (sizeof (int *) * n);
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
    int *sf = (int *) malloc (sizeof (int) * n);
    scanf ("%d", &n);
    for (iVvgzHxOr = (941 - 941); iVvgzHxOr < n; iVvgzHxOr = iVvgzHxOr + 1) {
        W64uYTd[iVvgzHxOr] = (int *) malloc (sizeof (int) * (227 - 225));
        scanf ("%d %d", &W64uYTd[iVvgzHxOr][(92 - 92)], &W64uYTd[iVvgzHxOr][(857 - 856)]);
    }
    for (iVvgzHxOr = (277 - 277); iVvgzHxOr < n; iVvgzHxOr++) {
        if (iVvgzHxOr < n - (571 - 570)) {
            if (W64uYTd[iVvgzHxOr][0] >= (1035 - 945) && (489 - 349) >= W64uYTd[iVvgzHxOr][0] && (133 - 73) <= W64uYTd[iVvgzHxOr][(857 - 856)] && W64uYTd[iVvgzHxOr][(254 - 253)] <= 90) {
                s = s + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                sf[rmr5dJQ7KoC] = s;
                s = 0;
                rmr5dJQ7KoC = rmr5dJQ7KoC + 1;
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
        if (iVvgzHxOr == n - (176 - 175)) {
            if (W64uYTd[iVvgzHxOr][0] >= 90 && W64uYTd[iVvgzHxOr][0] <= 140 && W64uYTd[iVvgzHxOr][1] >= (1043 - 983) && W64uYTd[iVvgzHxOr][1] <= 90) {
                s = s + 1;
                sf[rmr5dJQ7KoC] = s;
                rmr5dJQ7KoC = rmr5dJQ7KoC + 1;
            }
            else {
                sf[rmr5dJQ7KoC] = s;
                rmr5dJQ7KoC++;
            };
        };
    }
    {
        iVvgzHxOr = 0;
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
        while (iVvgzHxOr < rmr5dJQ7KoC - 1) {
            if (sf[iVvgzHxOr] > sf[iVvgzHxOr + 1]) {
                e = sf[iVvgzHxOr];
                sf[iVvgzHxOr] = sf[iVvgzHxOr + 1];
                sf[iVvgzHxOr + 1] = e;
            }
            iVvgzHxOr = iVvgzHxOr + 1;
        };
    }
    printf ("%d", sf[rmr5dJQ7KoC - 1]);
    return 0;
}

