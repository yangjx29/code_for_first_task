int time (int a, int b, int c, int Wxs9QbX3f, int e, int f);

int main () {
    int i;
    int a [1000];
    int b [1000];
    int c [1000];
    int Wxs9QbX3f [1000];
    int e [1000];
    int f [1000];
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
    int j;
    i = 0;
    while (1) {
        scanf ("%d%d%d%d%d%d", &(a[i]), &(b[i]), &(c[i]), &(Wxs9QbX3f[i]), &(e[i]), &(f[i]));
        i = i + 1;
        if (!(0 != a[i - 1]) && !(0 != b[i - 1]) && !(0 != c[i - 1]) && Wxs9QbX3f[i - 1] == 0 && e[i - 1] == 0 && f[i - 1] == 0) {
            break;
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
    {
        j = 0;
        while (j < i - 1) {
            printf ("%d\n", time (a[j], b[j], c[j], Wxs9QbX3f[j], e[j], f[j]));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    return 0;
}

int time (int a, int b, int c, int Wxs9QbX3f, int e, int f) {
    int total;
    total = 60 - c + f + (59 - b + e) * 60 + (Wxs9QbX3f -a + 11) * 3600;
    return total;
}

