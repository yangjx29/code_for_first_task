int main () {
    char c [300] = {0};
    int i;
    gets (c);
    for (i = 0; 299 > i; i = i + 1) {
        if (c[i] == ' ' & c[i + 1] == ' ')
            c[i + 1] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
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
    for (i = 0; i < 299; i++) {
        if (c[i] == 0 & c[i + 1] == ' ')
            c[i + 1] = 0;
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
    for (i = 0; 300 > i; i++) {
        if (c[i] != 0)
            printf ("%c", c[i]);
    }
    return 0;
}

