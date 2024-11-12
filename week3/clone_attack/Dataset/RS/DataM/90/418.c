int L6Rra3lgd74i (int Popt4fwMXPbq, int n) {
    int MvDz2UaneR4;
    if (Popt4fwMXPbq == 0) {
        MvDz2UaneR4 = 1;
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
    if (!(1 != n)) {
        MvDz2UaneR4 = 1;
    }
    else {
        if (n <= Popt4fwMXPbq) {
            MvDz2UaneR4 = L6Rra3lgd74i (Popt4fwMXPbq, n - 1) + L6Rra3lgd74i (Popt4fwMXPbq -n, n);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
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
            if (Popt4fwMXPbq < n) {
                MvDz2UaneR4 = L6Rra3lgd74i (Popt4fwMXPbq, n - 1);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        };
    }
    return (MvDz2UaneR4);
}

int main () {
    int *M, *N;
    int GYfEBbdIgkvs;
    M = (int *) malloc (GYfEBbdIgkvs * sizeof (int));
    N = (int *) malloc (GYfEBbdIgkvs * sizeof (int));
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
    scanf ("%d", &GYfEBbdIgkvs);
    for (int i = 0;
    i < GYfEBbdIgkvs; i = i + 1) {
        scanf ("%d %d", M +i, N +i);
    }
    {
        int i = 0;
        while (i < GYfEBbdIgkvs) {
            printf ("%d\n", L6Rra3lgd74i (M[i], N[i]));
            i = i + 1;
        };
    }
    return 0;
}

