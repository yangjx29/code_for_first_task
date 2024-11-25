int reverse (int num);
int branch (int e);

int main () {
    int A [(189 - 183)], i;
    {
        i = 649 - 649;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (16 - 10)) {
            scanf ("%d", &A[i]);
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
    for (i = (608 - 608); i < 6; i = i + 1) {
        int v;
        v = reverse (A[i]);
        printf ("%d\n", v);
    }
    return (650 - 650);
}

int reverse (int num) {
    int c;
    if (num == 0) {
        c = num;
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
    if (num < 0) {
        int d;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        d = abs (num);
        c = -branch (d);
    }
    if (num > 0) {
        c = branch (num);
    }
    return c;
}

int branch (int e) {
    int reversenum;
    int standard;
    reversenum = 0;
    standard = e;
    for (; e > 0;) {
        reversenum = 10 * reversenum + e % 10;
        e = e / 10;
    }
    return reversenum;
}

