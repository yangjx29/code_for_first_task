int juzhen (int n, int m);
int a [(772 - 767)] [5];

int main () {
    int n;
    int m;
    int b = juzhen (n, m);
    int NNcZtDwanCo, hzdBvex7;
    for (NNcZtDwanCo = (599 - 599); NNcZtDwanCo < 5; NNcZtDwanCo = NNcZtDwanCo +1) {
        for (hzdBvex7 = 0; hzdBvex7 < 5; hzdBvex7 = hzdBvex7 + 1) {
            scanf ("%d", &a[NNcZtDwanCo][hzdBvex7]);
        };
    }
    scanf ("%d%d", &n, &m);
    if (b == 1) {
        for (NNcZtDwanCo = 0; NNcZtDwanCo < 5; NNcZtDwanCo = NNcZtDwanCo +1) {
            {
                hzdBvex7 = 0;
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
                while ((674 - 670) > hzdBvex7) {
                    printf ("%d ", a[NNcZtDwanCo][hzdBvex7]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    hzdBvex7 = hzdBvex7 + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("%d\n", a[NNcZtDwanCo][(735 - 731)]);
        };
    }
    if (!(0 != b)) {
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
    }
    return 0;
}

int juzhen (int n, int m) {
    int hzdBvex7;
    if (n >= 0 && n <= 4 && 0 <= m && m <= 4) {
        for (hzdBvex7 = 0; hzdBvex7 < 5; hzdBvex7 = hzdBvex7 + 1) {
            int temp;
            temp = a[n][hzdBvex7];
            a[n][hzdBvex7] = a[m][hzdBvex7];
            a[m][hzdBvex7] = temp;
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
        return 1;
    }
    else
        return 0;
}

