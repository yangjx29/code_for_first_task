int main () {
    int n, HqEOo7KVdGB, a, JP9QnSH3;
    int JArbw1Z [MAX_LENGTH];
    scanf ("%d", &n);
    {
        HqEOo7KVdGB = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > HqEOo7KVdGB) {
            scanf ("%d", &(JArbw1Z[HqEOo7KVdGB]));
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
            HqEOo7KVdGB++;
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
    if (JArbw1Z[0] > JArbw1Z[1]) {
        a = JArbw1Z[0];
        JP9QnSH3 = JArbw1Z[1];
    }
    else {
        a = JArbw1Z[1];
        JP9QnSH3 = JArbw1Z[0];
    }
    for (HqEOo7KVdGB = 2; HqEOo7KVdGB < n; HqEOo7KVdGB = HqEOo7KVdGB +1) {
        if (JArbw1Z[HqEOo7KVdGB] > a) {
            JP9QnSH3 = a;
            a = JArbw1Z[HqEOo7KVdGB];
        }
        else {
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
            if (JArbw1Z[HqEOo7KVdGB] > JP9QnSH3) {
                JP9QnSH3 = JArbw1Z[HqEOo7KVdGB];
            };
        };
    }
    printf ("%d\n%d", a, JP9QnSH3);
    return 0;
}

