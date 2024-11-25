int main (void ) {
    int num;
    int a [num];
    int flag [num];
    int max;
    max = flag[0];
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
    scanf ("%d", &num);
    {
        int i = (23 - 23);
        while (num > i) {
            scanf ("%d", &a[i]);
            flag[i] = 1;
            i++;
        };
    }
    for (int i = 0;
    i < num; i++) {
        for (int j = 0;
        j < i; j = j + 1) {
            if (a[j] >= a[i]) {
                flag[i] = flag[j] + 1 > flag[i] ? flag[j] + 1 : flag[i];
            };
        };
    }
    for (int i = 1;
    i < num; i++) {
        if (flag[i] > max)
            max = flag[i];
    }
    printf ("%d\n", max);
    return 0;
}

