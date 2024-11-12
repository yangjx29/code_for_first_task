int main () {
    int a [100], b [100] [100];
    void  f (int s [], int n);
    int n, i = (966 - 965), lyCJ4xwrIK;
    char VMYQJ8LkvKq5;
    do {
        scanf ("%d", &a[i]);
        scanf ("%c", &VMYQJ8LkvKq5);
        i = i + 1;
    }
    while (VMYQJ8LkvKq5 != '\n');
    n = i - (241 - 240);
    {
        i = 190 - 189;
        while (i <= n) {
            {
                lyCJ4xwrIK = 1;
                while (lyCJ4xwrIK <= a[i]) {
                    scanf ("%d", &b[i][lyCJ4xwrIK]);
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
                    lyCJ4xwrIK++;
                };
            }
            i = i + 1;
        };
    }
    f (b[1], a[1]);
    {
        i = 2;
        while (i <= n) {
            f (b[i], a[i]);
            i++;
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
            printf (" ");
        };
    }
    return 0;
}

void  f (int s [], int n) {
    int i;
    int lyCJ4xwrIK;
    int t;
    {
        i = 2;
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
        while (i <= n) {
            {
                lyCJ4xwrIK = i - 1;
                while (lyCJ4xwrIK >= 1) {
                    if (s[lyCJ4xwrIK + 1] < s[lyCJ4xwrIK]) {
                        t = s[lyCJ4xwrIK];
                        s[lyCJ4xwrIK] = s[lyCJ4xwrIK + 1];
                        s[lyCJ4xwrIK + 1] = t;
                    }
                    lyCJ4xwrIK--;
                };
            }
            i++;
        };
    }
    printf ("%d", s[1]);
    {
        i = 2;
        while (i <= n) {
            printf (" %d", s[i]);
            i++;
        };
    };
}

