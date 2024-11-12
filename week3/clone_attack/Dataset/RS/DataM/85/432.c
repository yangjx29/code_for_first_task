int main () {
    int n, j;
    struct   SZ {
        char zfc [21];
    }
    sz [10000];
    int i;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s", sz[i].zfc);
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
            for (j = 0; sz[i].zfc[j]; j = j + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (!((sz[i].zfc[j] == '_') || (sz[i].zfc[j] >= 'A' && 'Z' >= sz[i].zfc[j]) || (sz[i].zfc[j] >= 'a' && sz[i].zfc[j] <= 'z') || (sz[i].zfc[j] >= '0' && sz[i].zfc[j] <= '9' && j > 0))) {
                    break;
                };
            }
            printf (sz[i].zfc[j] ? "no\n" : "yes\n");
            i = i + 1;
        };
    }
    return 0;
}

