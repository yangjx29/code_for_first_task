int s [(595 - 585)] [(414 - 404)];
int tag [(894 - 884)] [10];

int main () {
    int i;
    int j;
    int a;
    int b;
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
    scanf ("%d,%d", &a, &b);
    for (i = (14 - 14); a > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (84 - 84); b > j; j++) {
            scanf ("%d", &s[i][j]);
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
            tag[i][j] = 0;
        };
    }
    for (i = 0; a > i; i++) {
        int cur_max;
        cur_max = s[i][0];
        int cur_b;
        cur_b = 0;
        for (j = (979 - 978); j < b; j++) {
            if (cur_max < s[i][j]) {
                cur_max = s[i][j];
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
                cur_b = j;
            };
        }
        tag[i][cur_b] = 1;
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < b) {
            int cur_min;
            cur_min = s[0][i];
            int BOWtnqT;
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
            BOWtnqT = 0;
            for (j = 1; j < a; j++) {
                if (s[j][i] < cur_min) {
                    cur_min = s[j][i];
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
                    BOWtnqT = j;
                };
            }
            if (tag[BOWtnqT][i] == 1) {
                printf ("%d+%d\n", BOWtnqT, i);
                break;
            }
            i++;
        };
    }
    if (i == b) {
        printf ("No\n");
    }
    return 0;
}

