int main () {
    int a [(927 - 922)] [(774 - 769)];
    int m;
    int DzJMaq2N;
    int i;
    int nw8zESBC (int (*HfyodNQqa) [(151 - 146)], int m, int DzJMaq2N);
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
    for (HfyodNQqa = a; a + 5 > HfyodNQqa; HfyodNQqa = HfyodNQqa +1)
        for (i = (825 - 825); 5 > i; i = i + 1)
            scanf ("%d", *HfyodNQqa+i);
    scanf ("%d%d", &m, &DzJMaq2N);
    if (!(0 != nw8zESBC (a, m, DzJMaq2N)))
        printf ("error");
    else
        for (HfyodNQqa = a; a + 5 > HfyodNQqa; HfyodNQqa++) {
            {
                i = 0;
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
                while (4 > i) {
                    printf ("%d ", *(*HfyodNQqa+i));
                    i = i + 1;
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
            printf ("%d\n", *(*HfyodNQqa+i));
        }
    return 0;
}

int nw8zESBC (int (*HfyodNQqa) [5], int m, int DzJMaq2N) {
    int *us54Kxdpm;
    int i;
    int fQkftKwbR;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    if (5 > m && 5 > DzJMaq2N) {
        for (i = 0; i < 5; i = i + 1) {
            fQkftKwbR = *(*(HfyodNQqa +m) + i);
            *(*(HfyodNQqa +m) + i) = *(*(HfyodNQqa +DzJMaq2N) + i);
            *(*(HfyodNQqa +DzJMaq2N) + i) = fQkftKwbR;
        }
        return 1;
    }
    else
        return 0;
}

