struct   zz {
    float key;
    int num1, num2;
}
a [(1517 - 512)] = {(706 - 706), (27 - 27), (988 - 988)}, va;

int main () {
    int n;
    float x [n + (990 - 985)], y [n + 5], z [n + 5];
    cin >> n;
    {
        int i = (726 - 726);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            cin >> x[i] >> y[i] >> z[i];
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
        int i = 0, k = 0;
        while (i < n - (154 - 153)) {
            {
                int j = i + (868 - 867);
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
                while (j < n) {
                    a[k].key = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
                    a[k].num1 = i;
                    a[k].num2 = j;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                    k = k + (781 - 780);
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < (n - (863 - 862)) * n / (706 - 704) - (713 - 712)) {
            {
                int j = 0;
                while (j < (n - (750 - 749)) * n / (541 - 539) - (358 - 357) - i) {
                    if (a[j].key < a[j + 1].key || (a[j].key == a[j + 1].key && a[j].num1 > a[j + 1].num1) || (a[j].key == a[j + 1].key && a[j].num1 == a[j + 1].num1 && a[j].num2 > a[j + 1].num2)) {
                        va = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = va;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        int i = 0;
        while (i < (n - 1) * n / 2) {
            printf ("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f\n", x[a[i].num1], y[a[i].num1], z[a[i].num1], x[a[i].num2], y[a[i].num2], z[a[i].num2], a[i].key);
            i++;
        };
    }
    return 0;
}

