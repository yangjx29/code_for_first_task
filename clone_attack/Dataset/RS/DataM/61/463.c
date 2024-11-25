int main () {
    int wOcSZK [10000] = {0, 1};
    int Fa1SjF;
    int ntJrifhA4Mn;
    int a;
    int j;
    int ZRIyKCA [10000] = {0};
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
    scanf ("%d", &ntJrifhA4Mn);
    for (Fa1SjF = 1; ntJrifhA4Mn >= Fa1SjF; Fa1SjF = Fa1SjF +1) {
        scanf ("%d", &a);
        for (j = (119 - 117); j <= a; j++) {
            wOcSZK[j] = wOcSZK[j - 1] + wOcSZK[j - 2];
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
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ZRIyKCA[Fa1SjF] = wOcSZK[a];
    }
    for (Fa1SjF = 1; Fa1SjF <= ntJrifhA4Mn; Fa1SjF++) {
        printf ("%d\n", ZRIyKCA[Fa1SjF]);
    }
    return 0;
}

