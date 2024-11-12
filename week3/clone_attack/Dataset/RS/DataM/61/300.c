int f (int a) {
    if (!(1 != a) || a == 2)
        return 1;
    else
        return (f (a - 1) + f (a - 2));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int uydXkz1Ih, BWCvaY;
    int a [uydXkz1Ih];
    scanf ("%d", &uydXkz1Ih);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        BWCvaY = 0;
        while (BWCvaY < uydXkz1Ih) {
            scanf ("%d", &a[BWCvaY]);
            printf ("%d\n", f (a[BWCvaY]));
            BWCvaY = BWCvaY +1;
        };
    }
    getchar ();
    getchar ();
}

