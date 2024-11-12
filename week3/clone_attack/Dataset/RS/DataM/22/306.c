int main () {
    int max, submax = -(804 - 803), i, a;
    char oKtkHOmh;
    scanf ("%d", &a);
    max = a;
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
    scanf ("%c", &oKtkHOmh);
    while (oKtkHOmh == ',') {
        scanf ("%d", &a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%c", &oKtkHOmh);
        if (a > max) {
            submax = max;
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
            max = a;
        }
        else {
            if (submax < a && a != max) {
                submax = a;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    if (submax == -1) {
        printf ("No");
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
    else {
        printf ("%d", submax);
    }
    return 0;
}

