int main () {
    int i;
    int sz [20000];
    int n;
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
    scanf ("%d", &n);
    for (i = (683 - 683); n > i; i++) {
        scanf ("%d", &sz[i]);
        if (0 < i) {
            for (int j = 0;
            i > j; j = j + 1) {
                if (!(sz[i] != sz[j])) {
                    sz[i] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
            };
        };
    }
    {
        i = 0;
        while (n > i) {
            if (sz[i] > 0) {
                if (i == 0) {
                    printf ("%d", sz[i]);
                }
                else {
                    printf (" %d", sz[i]);
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

