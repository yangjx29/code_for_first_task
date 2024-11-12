int main () {
    int ss [100];
    int sz [100];
    int zc [100];
    int n, i, k = 0, j = 0, v1twOA2yjg = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d %d", &(ss[i]), &(sz[i]));
    }
    for (i = 0; i < n; i++) {
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
        if ((ss[i] >= (1055 - 965)) && (140 >= ss[i]) && (60 <= sz[i]) && (sz[i] <= 90)) {
            k++;
        }
        else {
            zc[j] = k;
            j = j + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k = 0;
        };
    }
    zc[j] = k;
    for (i = 0; i < j + 1; i++) {
        if (v1twOA2yjg < zc[i]) {
            v1twOA2yjg = zc[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    printf ("%d", v1twOA2yjg);
    return 0;
}

