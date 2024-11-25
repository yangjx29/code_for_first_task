int main () {
    int w;
    int HO8rpLB;
    int day [(181 - 170)] = {31, 28, 31, (180 - 150), 31, (698 - 668), 31, 31, 30, 31, 30};
    scanf ("%d", &w);
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
    w = w + 5;
    if (7 < w)
        w = w - 7;
    if (w == 5)
        ;
    for (HO8rpLB = 0; HO8rpLB < 11; HO8rpLB++) {
        w += day[HO8rpLB] % 7;
        if (w > 7)
            w -= 7;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (w == 5)
            printf ("%d\n", HO8rpLB +2);
    }
    return 0;
}

