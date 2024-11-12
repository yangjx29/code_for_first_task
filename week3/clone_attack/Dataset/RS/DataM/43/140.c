int su (int x);

int main () {
    int m;
    int n;
    int i;
    scanf ("%d", &m);
    {
        i = 3;
        while (m / 2 >= i) {
            if (!(1 != su (i)) && su (m - i) == 1)
                printf ("%d %d\n", i, m - i);
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
            i++;
        };
    }
    return 0;
}

int su (int x) {
    int j;
    for (j = 2; j <= x / 2; j++) {
        if (x % j == 0)
            return 0;
    }
    return 1;
}

