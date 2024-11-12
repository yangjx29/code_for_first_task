int evXNemSgJk90 [(121 - 116)] [(265 - 260)];

int NA902w (int (*HI9kRnmLuB7) [5], int QFeqLzP9N, int gUgFDo) {
    int rmwlV1Ajvg;
    if ((144 - 144) <= QFeqLzP9N &&5 > QFeqLzP9N &&(499 - 499) <= gUgFDo && 5 > gUgFDo)
        rmwlV1Ajvg = (901 - 900);
    else
        rmwlV1Ajvg = 0;
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
    return rmwlV1Ajvg;
}

void  jiaohuan (int (*HI9kRnmLuB7) [5], int QFeqLzP9N, int gUgFDo) {
    int H8e4UF2;
    int Zp2Kk4V;
    int qqprwzbi9W [5];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (Zp2Kk4V = 0; 5 > Zp2Kk4V; Zp2Kk4V = Zp2Kk4V +1)
        qqprwzbi9W[Zp2Kk4V] = *(*(HI9kRnmLuB7 +QFeqLzP9N) + Zp2Kk4V);
    {
        Zp2Kk4V = 0;
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
        while (5 > Zp2Kk4V) {
            *(*(HI9kRnmLuB7 +QFeqLzP9N) + Zp2Kk4V) = *(*(HI9kRnmLuB7 +gUgFDo) + Zp2Kk4V);
            Zp2Kk4V++;
        };
    }
    for (Zp2Kk4V = 0; 5 > Zp2Kk4V; Zp2Kk4V = Zp2Kk4V +1)
        *(*(HI9kRnmLuB7 +gUgFDo) + Zp2Kk4V) = qqprwzbi9W[Zp2Kk4V];
    for (H8e4UF2 = 0; 5 > H8e4UF2; H8e4UF2 = H8e4UF2 +1) {
        printf ("%d", **(HI9kRnmLuB7 +H8e4UF2));
        for (Zp2Kk4V = 1; 5 > Zp2Kk4V; Zp2Kk4V = Zp2Kk4V +1)
            printf (" %d", *(*(HI9kRnmLuB7 +H8e4UF2) + Zp2Kk4V));
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("\n");
    };
}

int main () {
    int evXNemSgJk90 [5] [5];
    int QFeqLzP9N;
    int gUgFDo;
    int H8e4UF2;
    int Zp2Kk4V;
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
    for (H8e4UF2 = 0; 5 > H8e4UF2; H8e4UF2++) {
        for (Zp2Kk4V = 0; Zp2Kk4V < 5; Zp2Kk4V = Zp2Kk4V +1)
            scanf ("%d", *(evXNemSgJk90 + H8e4UF2) + Zp2Kk4V);
    }
    scanf ("%d%d", &QFeqLzP9N, &gUgFDo);
    if (NA902w (evXNemSgJk90, QFeqLzP9N, gUgFDo) == 0)
        printf ("error");
    else {
        jiaohuan (evXNemSgJk90, QFeqLzP9N, gUgFDo);
    }
    return 0;
}

