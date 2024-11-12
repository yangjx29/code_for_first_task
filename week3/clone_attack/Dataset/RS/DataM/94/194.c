int main () {
    int i;
    int j;
    int qAo0aysNi1b;
    int s;
    int W1JSjnsX;
    int N;
    int iP2S5MmsFtx;
    int oUYjbzFlfA;
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
    int gb0lQPm [500];
    scanf ("%d", &N);
    {
        i = 192 - 192;
        while (i < N) {
            scanf ("%d", &(gb0lQPm[i]));
            i++;
        };
    }
    for (qAo0aysNi1b = (212 - 211); N >= qAo0aysNi1b; qAo0aysNi1b++) {
        W1JSjnsX = 0;
        for (j = 0; j <= N -qAo0aysNi1b; j = j + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (gb0lQPm[W1JSjnsX] < gb0lQPm[j]) {
                W1JSjnsX = j;
            };
        }
        if (!(N -qAo0aysNi1b == W1JSjnsX)) {
            iP2S5MmsFtx = gb0lQPm[W1JSjnsX];
            gb0lQPm[W1JSjnsX] = gb0lQPm[N -qAo0aysNi1b];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            gb0lQPm[N -qAo0aysNi1b] = iP2S5MmsFtx;
        };
    }
    {
        s = 0;
        while (s < N) {
            if (gb0lQPm[s] % 2 != 0) {
                printf ("%d", gb0lQPm[s]);
                break;
            }
            s++;
        };
    }
    for (oUYjbzFlfA = s + 1; oUYjbzFlfA < N; oUYjbzFlfA++) {
        if (gb0lQPm[oUYjbzFlfA] % 2 != 0) {
            printf (",%d", gb0lQPm[oUYjbzFlfA]);
        };
    }
    return 0;
}

