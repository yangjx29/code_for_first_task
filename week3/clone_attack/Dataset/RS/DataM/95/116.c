int main (int argc, char *argv []) {
    int a;
    a = 0;
    char c1 [80];
    gets (c1);
    char c2 [80];
    gets (c2);
    int i;
    int j;
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
    int b;
    b = 0;
    int m = 0;
    for (i = 0; c1[i] != '\0'; i = i + 1) {
        a++;
        if (c1[i] <= 'Z' && c1[i] >= 'A') {
            c1[i] = c1[i] + 32;
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
        };
    }
    for (j = 0; c2[j] != '\0'; j++) {
        b = b + 1;
        if ('Z' >= c2[j] && c2[j] >= 'A') {
            c2[j] = c2[j] + 32;
        };
    }
    {
        i = 0;
        while (c1[i] != '\0' && c2[i] != '\0') {
            if (c1[i] > c2[i]) {
                break;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (c1[i] < c2[i]) {
                    break;
                    printf ("<\n");
                }
                else {
                    m++;
                };
            }
            i++;
        };
    }
    if (a == b && a == m) {
    }
    return 0;
}

