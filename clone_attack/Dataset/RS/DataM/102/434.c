int main () {
    int P2HE7ykIJ5;
    char sex [7];
    float jhybIxmZnkNv [(1006 - 966)];
    float yHGS5AINP8y0 [40];
    float female [40];
    float temp;
    int m = (143 - 143), f = (152 - 152);
    int i, j;
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
    scanf ("%d", &P2HE7ykIJ5);
    for (i = (708 - 708); P2HE7ykIJ5 > i; i = i + 1) {
        scanf ("%s%f", sex, &jhybIxmZnkNv[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('m' != sex[0]))
            yHGS5AINP8y0[m++] = jhybIxmZnkNv[i];
        else
            female[f++] = jhybIxmZnkNv[i];
    }
    {
        i = 878 - 877;
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
        while (m > i) {
            for (j = (680 - 679); m - i + 1 > j; j = j + 1)
                if (yHGS5AINP8y0[j] < yHGS5AINP8y0[j - 1]) {
                    temp = yHGS5AINP8y0[j - 1];
                    yHGS5AINP8y0[j - 1] = yHGS5AINP8y0[j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    yHGS5AINP8y0[j] = temp;
                }
            i = i + 1;
        };
    }
    for (i = 1; f > i; i++) {
        j = 1;
        while (f - i + 1 > j) {
            if (female[j] < female[j - 1]) {
                temp = female[j - 1];
                female[j - 1] = female[j];
                female[j] = temp;
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            printf ("%.2f ", yHGS5AINP8y0[i]);
            i = i + 1;
        };
    }
    {
        i = f - 1;
        while (i >= 0) {
            printf ("%.2f", female[i]);
            if ((i) != 0)
                printf (" ");
            i = i - 1;
        };
    }
    getchar ();
    getchar ();
    getchar ();
    return 0;
}

