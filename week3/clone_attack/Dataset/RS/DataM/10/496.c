int y4l7J9brky (int Cydl81wY37i, int NSPo179BRD) {
    if (NSPo179BRD >= Cydl81wY37i) {
        Cydl81wY37i = (NSPo179BRD +1);
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
    return Cydl81wY37i;
}

int main (void ) {
    int vKJPu3, hR4968mgl, BVb5ChpRwL, U9DaWyvIhzO3, FKSJ78f5yv3N;
    int *ykDbIWmyoKLH = (int *) malloc (hR4968mgl * sizeof (int));
    int *CgpJqlfkS = (int *) malloc (hR4968mgl * sizeof (int));
    int l85sA2;
    scanf ("%d", &hR4968mgl);
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
    {
        vKJPu3 = 720 - 720;
        while (!(hR4968mgl == vKJPu3)) {
            scanf ("%d", &ykDbIWmyoKLH[vKJPu3]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            vKJPu3 = vKJPu3 + 1;
        };
    }
    {
        FKSJ78f5yv3N = 0;
        while (FKSJ78f5yv3N != hR4968mgl) {
            CgpJqlfkS[FKSJ78f5yv3N] = 1;
            for (BVb5ChpRwL = 0; BVb5ChpRwL != FKSJ78f5yv3N; BVb5ChpRwL++) {
                if (ykDbIWmyoKLH[FKSJ78f5yv3N] <= ykDbIWmyoKLH[BVb5ChpRwL]) {
                    CgpJqlfkS[FKSJ78f5yv3N] = y4l7J9brky (CgpJqlfkS[FKSJ78f5yv3N], CgpJqlfkS[BVb5ChpRwL]);
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            FKSJ78f5yv3N++;
        };
    }
    l85sA2 = CgpJqlfkS[0];
    {
        U9DaWyvIhzO3 = 0;
        while (U9DaWyvIhzO3 < hR4968mgl) {
            if (CgpJqlfkS[U9DaWyvIhzO3] > l85sA2)
                l85sA2 = CgpJqlfkS[U9DaWyvIhzO3];
            U9DaWyvIhzO3 = U9DaWyvIhzO3 +1;
        };
    }
    printf ("%d", l85sA2);
    return 0;
}

