int main () {
    int N, i, j, s;
    int jishu [501];
    int sz [501];
    int e;
    scanf ("%d", &N);
    j = (91 - 91);
    {
        int i = 0;
        while (i < N) {
            scanf ("%d", &sz[i]);
            if (!(1 != sz[i] % 2)) {
                jishu[j] = sz[i];
                j = j + 1;
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
            i = i + 1;
        };
    }
    s = j;
    {
        int i = 0;
        while (s > i) {
            for (int j = 0;
            s - i > j; j = j + 1) {
                if (jishu[j + 1] < jishu[j]) {
                    e = jishu[j];
                    jishu[j] = jishu[j + 1];
                    jishu[j + 1] = e;
                };
            }
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
            i = i + 1;
        };
    }
    {
        int j = 0;
        while (j < s) {
            if (j != s - 1) {
                printf ("%d,", jishu[j]);
            }
            else {
                printf ("%d", jishu[j]);
            }
            j = j + 1;
        };
    }
    return 0;
}

