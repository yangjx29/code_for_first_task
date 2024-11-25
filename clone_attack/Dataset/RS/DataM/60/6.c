int prime (int c182PqcO) {
    int j;
    {
        j = 2;
        while (c182PqcO / 2 + 1 > j) {
            if (!(0 != c182PqcO % j)) {
                break;
            }
            j++;
        };
    }
    if (j == c182PqcO / 2 + 1) {
        return 1;
    }
    else {
        return 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    };
}

int main () {
    int c182PqcO;
    int p;
    p = 0;
    int i;
    scanf ("%d", &c182PqcO);
    for (i = 2; c182PqcO >= i; i = i + 1) {
        if (prime (i) == 1) {
            if (prime (i + 2) == 1 && i + 2 <= c182PqcO) {
                printf ("%d %d\n", i, i + 2);
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
                p = 1;
            };
        };
    }
    if (p == 0) {
        printf ("empty");
    }
    return 0;
}

