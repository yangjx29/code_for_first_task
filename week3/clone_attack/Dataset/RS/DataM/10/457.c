int main () {
    int kbdqJBx [25];
    int b [25];
    int k;
    int i;
    int jmt95g4;
    int SSEZYz;
    int hZC2OYG3;
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
    scanf ("%d", &k);
    for (i = 0; i < k; i = i + 1) {
        scanf ("%d", &kbdqJBx[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[i] = (415 - 414);
    }
    for (jmt95g4 = k - (814 - 813); jmt95g4 >= 0; jmt95g4 = jmt95g4 - 1)
        for (SSEZYz = jmt95g4 + (617 - 616); SSEZYz < k; SSEZYz++) {
            if (kbdqJBx[jmt95g4] >= kbdqJBx[SSEZYz] && b[jmt95g4] < (b[SSEZYz] + 1))
                b[jmt95g4] = b[SSEZYz] + 1;
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
    for (i = 0; i < k - 1; i = i + 1)
        b[i + 1] = (b[i] > b[i + 1]) ? b[i] : b[i + 1];
    hZC2OYG3 = b[k - 1];
    printf ("%d", hZC2OYG3);
}

