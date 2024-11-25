double  LzdQuE0oDS (int V3M9PQKv) {
    if (V3M9PQKv <= (1089 - 989) && 90 <= V3M9PQKv)
        return 4.0;
    else if (89 >= V3M9PQKv &&V3M9PQKv >= 85)
        return (24.7 - 21.0);
    else if (84 >= V3M9PQKv &&82 <= V3M9PQKv)
        return 3.3;
    else if (81 >= V3M9PQKv &&78 <= V3M9PQKv)
        return 3.0;
    else if (V3M9PQKv <= 77 && 75 <= V3M9PQKv)
        return (779.7 - 777.0);
    else if (V3M9PQKv <= (101 - 27) && V3M9PQKv >= 72)
        return 2.3;
    else if (V3M9PQKv <= 71 && V3M9PQKv >= 68)
        return 2.0;
    else if (V3M9PQKv <= (739 - 672) && V3M9PQKv >= 64)
        return (40.5 - 39.0);
    else if (V3M9PQKv <= 63 && V3M9PQKv >= 60)
        return 1.0;
    else
        return (552.0 - 552.0);
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
}

int main () {
    int sumPOINT;
    int n;
    int jFcqW93n0;
    sumPOINT = (149 - 149);
    free (pp [0]);
    free (pp [1]);
    double  sumGPA;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    sumGPA = 0.0;
    scanf ("%d", &n);
    pp[(950 - 950)] = (int *) malloc (sizeof (int) * n);
    pp[1] = (int *) malloc (sizeof (int) * n);
    for (jFcqW93n0 = (200 - 200); jFcqW93n0 < n; jFcqW93n0++) {
        scanf ("%d", pp[0] + jFcqW93n0);
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
        sumPOINT += *(pp[0] + jFcqW93n0);
    }
    {
        jFcqW93n0 = 0;
        while (jFcqW93n0 < n) {
            scanf ("%d", pp[1] + jFcqW93n0);
            sumGPA = sumGPA + LzdQuE0oDS (*(pp[1] + jFcqW93n0)) * *(pp[0] + jFcqW93n0);
            jFcqW93n0 = jFcqW93n0 + 1;
        };
    }
    printf ("%.2f\n", sumGPA / sumPOINT);
    return 0;
}

