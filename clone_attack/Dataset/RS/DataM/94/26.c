int main () {
    int O0obQ5u7P [500];
    int wb84Gy;
    int jLZBmblWT3sJ;
    int d1zNn4LuPMmI;
    int Q9tVZoB8;
    int k;
    int pzo4qwPL0;
    scanf ("%d", &d1zNn4LuPMmI);
    {
        wb84Gy = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        k = 264 - 264;
        while (d1zNn4LuPMmI > wb84Gy) {
            wb84Gy = wb84Gy + 1;
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
            scanf ("%d", &Q9tVZoB8);
            if (Q9tVZoB8 % 2 == 1) {
                O0obQ5u7P[k] = Q9tVZoB8;
                k++;
            };
        };
    }
    scanf ("%d", &d1zNn4LuPMmI);
    k = k - 1;
    {
        wb84Gy = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (wb84Gy < k) {
            {
                jLZBmblWT3sJ = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (jLZBmblWT3sJ < k - wb84Gy) {
                    if (O0obQ5u7P[jLZBmblWT3sJ] > O0obQ5u7P[jLZBmblWT3sJ + 1]) {
                        pzo4qwPL0 = O0obQ5u7P[jLZBmblWT3sJ + 1];
                        O0obQ5u7P[jLZBmblWT3sJ + 1] = O0obQ5u7P[jLZBmblWT3sJ];
                        O0obQ5u7P[jLZBmblWT3sJ] = pzo4qwPL0;
                    }
                    jLZBmblWT3sJ = jLZBmblWT3sJ + 1;
                };
            }
            wb84Gy = wb84Gy + 1;
        };
    }
    printf ("%d", O0obQ5u7P[0]);
    {
        wb84Gy = 1;
        while (wb84Gy <= k) {
            printf (",%d", O0obQ5u7P[wb84Gy]);
            wb84Gy++;
        };
    }
    return 0;
}

