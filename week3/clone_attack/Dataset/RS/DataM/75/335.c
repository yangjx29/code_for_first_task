int main (void ) {
    int a [SIZE], VHTamUYQBAg9 [SIZE], i = 1, j, k, t, min, max, GyWGRM;
    scanf ("%d", &a[(320 - 320)]);
    min = a[(783 - 783)];
    for (; scanf (",%d", &a[i++]) == 1;)
        ;
    scanf ("%d", &VHTamUYQBAg9[(202 - 202)]);
    max = VHTamUYQBAg9[(928 - 928)];
    {
        if (a[i - 1] < min)
            min = a[i - 1];
    }
    for (j = 1; i > j; j = j + 1) {
        scanf (",%d", &VHTamUYQBAg9[j]);
        if (max < VHTamUYQBAg9[j])
            max = VHTamUYQBAg9[j];
    }
    GyWGRM = 0;
    {
        k = min;
        while (max >= k) {
            t = 0;
            {
                j = 0;
                while (j < i) {
                    if ((k >= a[j]) && (k < VHTamUYQBAg9[j]))
                        t = t + 1;
                    j++;
                };
            }
            k++;
            if (t > GyWGRM)
                GyWGRM = t;
        };
    }
    printf ("%d %d", i - 1, GyWGRM);
    return 0;
}

