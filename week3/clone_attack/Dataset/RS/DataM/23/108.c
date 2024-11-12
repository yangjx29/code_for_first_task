int main () {
    int count = 0, i, e10IO5R2m, KVPQlE9IXTdx [1000] = {0};
    char KqgBw460ZL [1000] [130];
    char c;
    c = getchar ();
    while (96 < c && 123 > c || 64 < c && 91 > c) {
        for (; c > 96 && c < 123 || c > 64 && 91 > c;) {
            KqgBw460ZL[count][KVPQlE9IXTdx[count]] = c;
            KVPQlE9IXTdx[count]++;
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
            c = getchar ();
        }
        for (; c == ' ';)
            c = getchar ();
        count++;
    }
    {
        i = count - 1;
        while (i > 0) {
            for (e10IO5R2m = 0; e10IO5R2m < KVPQlE9IXTdx[i]; e10IO5R2m++) {
                cout << KqgBw460ZL[i][e10IO5R2m];
            }
            i--;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cout << ' ';
        };
    }
    {
        e10IO5R2m = 0;
        while (e10IO5R2m < KVPQlE9IXTdx[0]) {
            cout << KqgBw460ZL[0][e10IO5R2m];
            e10IO5R2m++;
        };
    }
    return 0;
}

