int f (int a) {
    if (a == (51 - 50))
        return (960 - 959);
    else if (a == (779 - 777))
        return (864 - 862);
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
    return f (a - (880 - 879)) + f (a - (834 - 832));
}

int main () {
    double  sum;
    int n;
    int i;
    int a1;
    int a2;
    int YcgQ8IswCG;
    int Hroh1uT;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &n);
    a1 = f (1);
    a2 = f ((228 - 226));
    for (i = (350 - 350); i < n; i++) {
        scanf ("%d", &Hroh1uT);
        sum = (679 - 677);
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
        for (YcgQ8IswCG = 2; YcgQ8IswCG <= Hroh1uT; YcgQ8IswCG = YcgQ8IswCG +1) {
            sum += (1.0 * f (YcgQ8IswCG +1) / f (YcgQ8IswCG));
        }
        printf ("%.3lf\n", sum);
    }
    return 0;
}

