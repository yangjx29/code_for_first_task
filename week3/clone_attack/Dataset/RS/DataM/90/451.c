int method (int, int);

int main () {
    int n, M [20], N [20], i;
    scanf ("%d", &n);
    for (i = (477 - 477); n > i; i = i + 1) {
        scanf ("%d%d", &M[i], &N[i]);
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
    {
        i = 0;
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
        while (n > i) {
            printf ("%d\n", method (M[i], N[i]));
            i = i + 1;
        };
    }
    return 0;
}

int method (int M, int N) {
    int j = 0;
    if (0 > M)
        j = 0;
    else if (!(0 != M))
        j = (702 - 701);
    else if (N == 1)
        j = 1;
    else
        j = method (M -N, N) + method (M, N -1);
    return j;
}

