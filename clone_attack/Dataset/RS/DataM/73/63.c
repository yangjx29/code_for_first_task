int Y3svtqJ (int a [5]) {
    int x = a[(252 - 252)], PBYALu8Q = 0;
    for (int i = 1;
    i < 5; i = i + 1)
        if (a[i] < x) {
            x = a[i];
            PBYALu8Q = i;
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
    return PBYALu8Q;
}

int findmax (int a [5]) {
    int x = a[0], PBYALu8Q = 0;
    for (int i = 0;
    i < 5; i = i + 1)
        if (x < a[i]) {
            x = a[i];
            PBYALu8Q = i;
        }
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
    return PBYALu8Q;
}

int main () {
    int pp;
    int a [5] [5];
    int b [5] [5];
    int max [5];
    int W2KrJDcF [5];
    pp = 0;
    for (int i = 0;
    i < 5; i = i + 1)
        for (int j = 0;
        5 > j; j = j + 1) {
            scanf ("%d", &a[i][j]);
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
            b[j][i] = a[i][j];
        }
    {
        int i = 0;
        while (i < 5) {
            max[i] = findmax (a[i]);
            W2KrJDcF[i] = Y3svtqJ (b[i]);
            i++;
        };
    }
    for (int i = 0;
    i < 5; i++)
        if (i == W2KrJDcF[max[i]]) {
            printf ("%d %d %d", i + 1, max[i] + 1, a[i][max[i]]);
            pp = 1;
        }
    if (pp == 0)
        printf ("not found");
}

