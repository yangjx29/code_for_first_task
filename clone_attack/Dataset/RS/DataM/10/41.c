int main (void ) {
    int num, max = 0;
    int a [num], flag [num];
    scanf ("%d", &num);
    {
        int i = 0;
        while (num > i) {
            scanf ("%d", &a[i]);
            flag[i] = 1;
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
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (int i = 0;
    i < num; i = i + 1) {
        for (int j = 0;
        i > j; j = j + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[i] <= a[j]) {
                flag[i] = flag[j] + 1 > flag[i] ? flag[j] + 1 : flag[i];
            };
        }
        if (flag[i] > max)
            max = flag[i];
    }
    printf ("%d\n", max);
    return 0;
}

