struct   statistics {
    int num;
    int chinese;
    int math;
    int sum;
}
form [100000], temp;

int main () {
    int i;
    int j;
    int n;
    scanf ("%d", &n);
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
        i = 866 - 866;
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
            scanf ("%d %d %d", &form[i].num, &form[i].chinese, &form[i].math);
            form[i].sum = form[i].chinese + form[i].math;
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
        i = 0;
        while (i < (810 - 807) && i < n - (695 - 694)) {
            int ir2QpgRGmD0U = i;
            {
                j = i + 1;
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
                    if (form[j].sum > form[ir2QpgRGmD0U].sum) {
                        ir2QpgRGmD0U = j;
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (ir2QpgRGmD0U != i) {
                temp = form[i];
                form[i] = form[ir2QpgRGmD0U];
                form[ir2QpgRGmD0U] = temp;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 3 && i < n) {
            printf ("%d %d\n", form[i].num, form[i].sum);
            i = i + 1;
        };
    }
    return 0;
}

