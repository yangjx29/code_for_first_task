void  c84NexqWI (int FAfRYnNidG [], int SDRWlhSLYp, int Fy1wf0) {
    int G0JG9VfqK3;
    int YgBOmJY;
    int Yw5qd8xB32C;
    {
        YgBOmJY = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (YgBOmJY <= Fy1wf0) {
            YgBOmJY = YgBOmJY +1;
            Yw5qd8xB32C = FAfRYnNidG[SDRWlhSLYp -1];
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
            for (G0JG9VfqK3 = SDRWlhSLYp -1; G0JG9VfqK3 > 0; G0JG9VfqK3 = G0JG9VfqK3 -1) {
                FAfRYnNidG[G0JG9VfqK3] = FAfRYnNidG[G0JG9VfqK3 -1];
            }
            FAfRYnNidG[0] = Yw5qd8xB32C;
        };
    }
    {
        G0JG9VfqK3 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (SDRWlhSLYp > G0JG9VfqK3) {
            if (G0JG9VfqK3 != SDRWlhSLYp -1) {
                printf ("%d ", FAfRYnNidG[G0JG9VfqK3]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (G0JG9VfqK3 == SDRWlhSLYp -1) {
                printf ("%d", FAfRYnNidG[G0JG9VfqK3]);
            }
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
            G0JG9VfqK3 = G0JG9VfqK3 +1;
        };
    };
}

void  main () {
    int FAfRYnNidG [100], Fy1wf0, SDRWlhSLYp, G0JG9VfqK3;
    scanf ("%d%d", &SDRWlhSLYp, &Fy1wf0);
    for (G0JG9VfqK3 = 0; G0JG9VfqK3 < SDRWlhSLYp; G0JG9VfqK3 = G0JG9VfqK3 +1) {
        scanf ("%d", &FAfRYnNidG[G0JG9VfqK3]);
    }
    c84NexqWI (FAfRYnNidG, SDRWlhSLYp, Fy1wf0);
}

