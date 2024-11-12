int main () {
    int mx6DTW4;
    mx6DTW4 = 0;
    int n, PjxaQ0ro2mg, PxkYgcUmQ, i;
    scanf ("%d", &n);
    if (n < 10) {
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
            while (i <= n) {
                if (i % 7 != 0)
                    mx6DTW4 = mx6DTW4 + i * i;
                i = i + 1;
            };
        }
        printf ("%d", mx6DTW4);
    }
    else {
        {
            i = 0;
            while (i <= n) {
                if (i % 7 != 0) {
                    PjxaQ0ro2mg = i / 10;
                    PxkYgcUmQ = i - PjxaQ0ro2mg *10;
                    if (PjxaQ0ro2mg != 7 && PxkYgcUmQ != 7)
                        mx6DTW4 = mx6DTW4 + i * i;
                }
                i++;
            };
        }
        printf ("%d", mx6DTW4);
    }
    return 0;
}

