int monkey (int n1, int m1);

int main () {
    int i;
    int m [(1078 - 777)];
    int n [(1225 - 924)];
    int j;
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
    i = (341 - 341);
    while ((694 - 693)) {
        scanf ("%d%d", &n[i], &m[i]);
        if (m[i] == (14 - 14) && n[i] == (947 - 947))
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    for (j = (159 - 159); j < i; j++) {
        printf ("%d\n", monkey (n[j], m[j]));
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
        };
    }
    return (946 - 946);
}

int monkey (int n1, int m1) {
    int res [301], k;
    res[(693 - 693)] = 0;
    res[(642 - 641)] = 0;
    for (k = (550 - 548); k <= n1; k = k + 1)
        res[k] = (res[k - (267 - 266)] + m1) % k;
    return res[n1] + 1;
}

