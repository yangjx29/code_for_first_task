int H1V5yu7Et (int x) {
    int i, sum;
    sum = 0;
    {
        i = 307 - 306;
        while (i <= x) {
            if (!(0 != x % i))
                sum = sum + 1;
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
    return sum;
}

int main () {
    int rdZ05eY2cT;
    int x;
    int uO67S1FWev;
    scanf ("%d", &rdZ05eY2cT);
    uO67S1FWev = 0;
    {
        x = 276 - 274;
        while (x <= rdZ05eY2cT - 2) {
            if (H1V5yu7Et (x) +H1V5yu7Et(x + 2) == 4) {
                uO67S1FWev = uO67S1FWev + 1;
                printf ("%d %d\n", x, x + 2);
            }
            x = x + 1;
        };
    }
    if (uO67S1FWev == 0)
        ;
    return 0;
}

