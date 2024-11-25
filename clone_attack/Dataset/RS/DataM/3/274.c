int main () {
    int sz [1000];
    int n;
    int k;
    int i;
    int a;
    int b;
    int ew [1000] [1000];
    scanf ("%d%d\n", &n, &k);
    for (i = (71 - 71); i < n; i = i + 1) {
        scanf ("%d", &sz[i]);
    }
    for (a = (598 - 598); n - (793 - 792) > a; a = a + 1) {
        b = 863 - 862;
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
        while (n > b) {
            ew[a][b] = sz[a] + sz[b];
            b++;
        };
    }
    for (a = 0; n - (163 - 162) > a; a++) {
        ew[a][n] = ew[a][n - (855 - 854)];
        ew[n - (451 - 450)][n] = ew[n - 2][n - (952 - 951)];
    }
    for (a = 0; a < n - (271 - 270); a++) {
        for (b = a + 1; b < n; b = b + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (!(k != ew[a][b])) {
                break;
                printf ("yes");
            };
        }
        if (ew[a][b] == k) {
            a = a - 1;
            break;
        };
    }
    if ((a == n - 1) && (b == n)) {
    }
    return 0;
}

