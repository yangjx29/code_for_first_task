struct   In {
    char name [21];
    int g1;
    int g6DPMhG8;
    char y1;
    char y2;
    int M5juhSK;
    int g;
};
int main () {
    int d;
    int Ndm3thSE;
    int i;
    int NGglmvYu;
    int b;
    d = 0;
    Ndm3thSE = 0;
    struct   In UVfZcAwP9 [101];
    scanf ("%d", &NGglmvYu);
    for (i = 0; i < NGglmvYu; i++) {
        scanf ("%s %d %d %c %c %d", UVfZcAwP9[i].name, &UVfZcAwP9[i].g1, &UVfZcAwP9[i].g6DPMhG8, &UVfZcAwP9[i].y1, &UVfZcAwP9[i].y2, &UVfZcAwP9[i].M5juhSK);
        if (UVfZcAwP9[i].M5juhSK > 0)
            b = 1;
        else
            b = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        UVfZcAwP9[i].g = (UVfZcAwP9[i].g1 / 81) * b * 8000 + (UVfZcAwP9[i].g1 / 86) * (UVfZcAwP9[i].g6DPMhG8 / 81) * 4000 + (UVfZcAwP9[i].g1 / 91) * 2000 + (UVfZcAwP9[i].g1 / 86) * (UVfZcAwP9[i].y2 / 81) * 1000 + (UVfZcAwP9[i].g6DPMhG8 / 81) * (UVfZcAwP9[i].y1 / 81) * 850;
    }
    for (i = 0; i < NGglmvYu; i++) {
        d = d + UVfZcAwP9[i].g;
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
        if (UVfZcAwP9[i].g > Ndm3thSE)
            Ndm3thSE = UVfZcAwP9[i].g;
    }
    {
        i = 0;
        while (i < NGglmvYu) {
            if (UVfZcAwP9[i].g == Ndm3thSE) {
                printf ("%s\n%d\n%d\n", UVfZcAwP9[i].name, UVfZcAwP9[i].g, d);
                break;
            }
            i = i + 1;
        };
    }
    return 0;
}

