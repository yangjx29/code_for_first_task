int main () {
    int Qq1DOkS3Pw [100] [100];
    int arKeQqzoBjS, yf018l, V0DZnNVM, nS3dwa9, Ml1j5pw7F2Br;
    scanf ("%d%d", &yf018l, &arKeQqzoBjS);
    for (V0DZnNVM = (290 - 290); yf018l > V0DZnNVM; V0DZnNVM = V0DZnNVM +1) {
        nS3dwa9 = 0;
        while (arKeQqzoBjS > nS3dwa9) {
            scanf ("%d", &Qq1DOkS3Pw[V0DZnNVM][nS3dwa9]);
            nS3dwa9 = nS3dwa9 + 1;
        };
    }
    for (nS3dwa9 = 0; nS3dwa9 < arKeQqzoBjS; nS3dwa9 = nS3dwa9 + 1) {
        Ml1j5pw7F2Br = nS3dwa9;
        {
            V0DZnNVM = 0;
            while (V0DZnNVM <= Ml1j5pw7F2Br &&V0DZnNVM < yf018l) {
                printf ("%d\n", Qq1DOkS3Pw[V0DZnNVM][nS3dwa9]);
                nS3dwa9 = nS3dwa9 - 1;
                V0DZnNVM = V0DZnNVM +1;
            };
        }
        nS3dwa9 = Ml1j5pw7F2Br;
    }
    {
        V0DZnNVM = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (V0DZnNVM < yf018l) {
            Ml1j5pw7F2Br = V0DZnNVM;
            {
                nS3dwa9 = arKeQqzoBjS - 1;
                while (0 <= nS3dwa9 && V0DZnNVM < yf018l) {
                    printf ("%d\n", Qq1DOkS3Pw[V0DZnNVM][nS3dwa9]);
                    nS3dwa9 = nS3dwa9 - 1;
                    V0DZnNVM = V0DZnNVM +1;
                };
            }
            V0DZnNVM = Ml1j5pw7F2Br;
            V0DZnNVM++;
        };
    }
    return 0;
}

