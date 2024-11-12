int main () {
    char eAi7xwVNnG [50] [20];
    int l7hoyqRIDz;
    l7hoyqRIDz = 0;
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
    int m = 0;
    scanf ("%d", &n);
    {
        m = 0;
        while (n > m) {
            scanf ("%s", eAi7xwVNnG[m]);
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
            m = m + 1;
        };
    }
    for (m = 0; n > m; m = m + 1) {
        l7hoyqRIDz = strlen (eAi7xwVNnG[m]);
        if ((!('r' != eAi7xwVNnG[m][l7hoyqRIDz - 1])) && (!('e' != eAi7xwVNnG[m][l7hoyqRIDz - 2]))) {
            eAi7xwVNnG[m][l7hoyqRIDz - 2] = '\0';
        }
        else if ((!('y' != eAi7xwVNnG[m][l7hoyqRIDz - 1])) && (eAi7xwVNnG[m][l7hoyqRIDz - 2] == 'l')) {
            eAi7xwVNnG[m][l7hoyqRIDz - 2] = '\0';
        }
        else if ((eAi7xwVNnG[m][l7hoyqRIDz - 1] == 'g') && (eAi7xwVNnG[m][l7hoyqRIDz - 2] == 'n') && (eAi7xwVNnG[m][l7hoyqRIDz - 3] == 'i')) {
            eAi7xwVNnG[m][l7hoyqRIDz - 3] = '\0';
        };
    }
    for (m = 0; m < n; m = m + 1) {
        printf ("%s\n", eAi7xwVNnG[m]);
    }
    return 0;
}

