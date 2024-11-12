int main () {
    int n;
    int gCiXqGr;
    int temp;
    int a, b, max1, max2;
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
    scanf ("%d %d %d", &n, &a, &b);
    if (b < a) {
        max1 = a;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        max2 = b;
    }
    else {
        max1 = b;
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
        max2 = a;
    }
    for (gCiXqGr = 0; n - (244 - 242) > gCiXqGr; gCiXqGr++) {
        scanf ("%d", &temp);
        if (temp > max1) {
            max2 = max1;
            max1 = temp;
        }
        else {
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
            if (temp > max2) {
                max1 = max1;
                max2 = temp;
            }
            else {
                max2 = max2;
                max1 = max1;
            };
        };
    }
    printf ("%d\n%d", max1, max2);
    return 0;
}

