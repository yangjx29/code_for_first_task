int main () {
    char str [256], sub [256], t24ebsB [256];
    int same, i, j, k;
    scanf ("%s%s%s", str, sub, t24ebsB);
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
    for (i = (602 - 602); strlen (str) > i; i++) {
        same = 1;
        for (j = 0; strlen (sub) > j; j++) {
            if (!(sub[j] == str[i + j]))
                same = 0;
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
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != same))
            printf ("%c", str[i]);
        if (same == 1) {
            printf ("%s", t24ebsB);
            for (k = i + strlen (sub); str[k] != 0; k++) {
                printf ("%c", str[k]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            break;
        };
    }
    return 0;
}

