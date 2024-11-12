int main () {
    int a [(901 - 896)] [(660 - 655)], i, oYdkrQ, count = (151 - 150), lXwynC2, u79eqBFS23Ho;
    {
        i = 594 - 594;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((552 - 547) > i) {
            for (oYdkrQ = 0; 5 > oYdkrQ; oYdkrQ = oYdkrQ + 1)
                scanf ("%d", &a[i][oYdkrQ]);
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
            i++;
        };
    }
    for (i = 0; 5 > i; i = i + 1) {
        u79eqBFS23Ho = 0;
        {
            oYdkrQ = 1;
            while (oYdkrQ < 5) {
                if (a[i][oYdkrQ] > a[i][u79eqBFS23Ho])
                    u79eqBFS23Ho = oYdkrQ;
                oYdkrQ = oYdkrQ + 1;
            };
        }
        for (lXwynC2 = 0; 5 > lXwynC2; lXwynC2++) {
            if (lXwynC2 == i)
                continue;
            if (a[i][u79eqBFS23Ho] > a[lXwynC2][u79eqBFS23Ho])
                break;
        }
        if (lXwynC2 == 5) {
            count++;
            printf ("%d %d %d\n", i + 1, u79eqBFS23Ho + 1, a[i][u79eqBFS23Ho]);
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
    if (count == 1)
        printf ("not found\n");
    return 0;
}

