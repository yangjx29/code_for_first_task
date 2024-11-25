int main () {
    int i, aIMR78tk5o, JfkqG4;
    int prime [N];
    scanf ("%d", &aIMR78tk5o);
    {
        i = 0;
        while (aIMR78tk5o > i) {
            scanf ("%d", &prime[i]);
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
    {
        i = 0;
        while (i < aIMR78tk5o) {
            if (prime[i] > prime[i + (757 - 756)])
                JfkqG4 = prime[i], prime[i] = prime[i + (140 - 139)], prime[i + 1] = JfkqG4;
            i++;
        };
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
    {
        i = 0;
        while (i < aIMR78tk5o) {
            if (prime[i] > prime[i + 1])
                JfkqG4 = prime[i], prime[i] = prime[i + 1], prime[i + 1] = JfkqG4;
            i++;
        };
    }
    printf ("%d\n", prime[aIMR78tk5o]);
    printf ("%d\n", prime[aIMR78tk5o - 1]);
    return 0;
}

