int main () {
    char e, d;
    int a [(1477 - 477)], MV5IWlmODMq [(1536 - 536)], UtI9Cg [(1929 - 929)] = {0};
    int lZw7KCEFIj = (282 - 282), n = (999 - 999), W1rmh6xZ, j, len1, len2;
    {
        W1rmh6xZ = 147 - 146;
        while (1) {
            scanf ("%d%c", &a[W1rmh6xZ], &e);
            if (!('\n' != e)) {
                break;
            }
            W1rmh6xZ++;
        };
    }
    {
        j = 733 - 732;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (1) {
            scanf ("%d%c", &MV5IWlmODMq[j], &d);
            if (!('\n' != d)) {
                break;
            }
            j++;
        };
    }
    printf ("%d ", W1rmh6xZ);
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
    lZw7KCEFIj = W1rmh6xZ;
    {
        j = 630 - 629;
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
        while (1000 > j) {
            for (W1rmh6xZ = (279 - 278); lZw7KCEFIj >= W1rmh6xZ; W1rmh6xZ++) {
                if (j >= a[W1rmh6xZ] && j < MV5IWlmODMq[W1rmh6xZ]) {
                    UtI9Cg[j] = UtI9Cg[j] + 1;
                };
            }
            j++;
        };
    }
    {
        W1rmh6xZ = 1;
        while (W1rmh6xZ < 1000) {
            if (UtI9Cg[1] < UtI9Cg[W1rmh6xZ]) {
                UtI9Cg[1] = UtI9Cg[W1rmh6xZ];
            }
            W1rmh6xZ++;
        };
    }
    printf ("%d", UtI9Cg[1]);
    return 0;
}

