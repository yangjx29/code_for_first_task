int main () {
    int BY2D6OedQFX, tSHyP4a, PsU7zGI;
    double  smYRig7An [BY2D6OedQFX];
    double  XgivyW [BY2D6OedQFX];
    double  distance [BY2D6OedQFX] [BY2D6OedQFX];
    double  pW690Ts;
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
    pW690Ts = 0.0;
    cin >> BY2D6OedQFX;
    {
        tSHyP4a = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (BY2D6OedQFX >= tSHyP4a) {
            cin >> smYRig7An[tSHyP4a];
            cin >> XgivyW[tSHyP4a];
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
            tSHyP4a++;
        };
    }
    for (PsU7zGI = 1; BY2D6OedQFX >= PsU7zGI; PsU7zGI = PsU7zGI +1) {
        for (tSHyP4a = 1; tSHyP4a <= BY2D6OedQFX; tSHyP4a = tSHyP4a + 1) {
            distance[PsU7zGI][tSHyP4a] = sqrt ((double ) (smYRig7An[tSHyP4a] - smYRig7An[PsU7zGI]) * (smYRig7An[tSHyP4a] - smYRig7An[PsU7zGI]) + (XgivyW[tSHyP4a] - XgivyW[PsU7zGI]) * (XgivyW[tSHyP4a] - XgivyW[PsU7zGI]));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    {
        PsU7zGI = 1;
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
        while (PsU7zGI <= BY2D6OedQFX) {
            for (tSHyP4a = 1; tSHyP4a <= BY2D6OedQFX; tSHyP4a++) {
                if (distance[PsU7zGI][tSHyP4a] > pW690Ts)
                    pW690Ts = distance[PsU7zGI][tSHyP4a];
            }
            PsU7zGI++;
        };
    }
    printf ("%.4f\n", pW690Ts);
    return 0;
}

