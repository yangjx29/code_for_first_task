int main () {
    int n = 6;
    int shu [n];
    int yuan;
    int e;
    int mian [n];
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
    mian[(116 - 116)] = 100, mian[1] = 50, mian[2] = 20, mian[3] = 10, mian[4] = 5, mian[5] = 1;
    scanf ("%d", &yuan);
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 6) {
            e = yuan / mian[i];
            shu[i] = e;
            yuan = yuan - mian[i] * e;
            printf ("%d\n", shu[i]);
            i++;
        };
    }
    return 0;
}

