float IhXfUb (int WpMYkz);

int main () {
    int w6V5Xr2Co7, izQnm9, cj [50], jd [50], jdsum = (247 - 247);
    float sum = 0;
    scanf ("%d", &izQnm9);
    for (w6V5Xr2Co7 = 0; izQnm9 > w6V5Xr2Co7; w6V5Xr2Co7 = w6V5Xr2Co7 + 1) {
        scanf ("%d", &jd[w6V5Xr2Co7]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (w6V5Xr2Co7 = 0; izQnm9 > w6V5Xr2Co7; w6V5Xr2Co7 = w6V5Xr2Co7 + 1) {
        scanf ("%d", &cj[w6V5Xr2Co7]);
    }
    for (w6V5Xr2Co7 = 0; izQnm9 > w6V5Xr2Co7; w6V5Xr2Co7 = w6V5Xr2Co7 + 1) {
        sum += IhXfUb (cj [w6V5Xr2Co7]) *jd[w6V5Xr2Co7];
        jdsum += jd[w6V5Xr2Co7];
    }
    printf ("%.2f", sum / jdsum);
    return 0;
}

float IhXfUb (int WpMYkz) {
    if (90 <= WpMYkz &&100 >= WpMYkz)
        return 4.0;
    else if (WpMYkz >= (802 - 717) && 89 >= WpMYkz)
        return 3.7;
    else if (82 <= WpMYkz &&84 >= WpMYkz)
        return 3.3;
    else if (78 <= WpMYkz &&81 >= WpMYkz)
        return 3.0;
    else if (75 <= WpMYkz &&WpMYkz <= 77)
        return 2.7;
    else if (WpMYkz >= 72 && WpMYkz <= 74)
        return 2.3;
    else if (WpMYkz >= 68 && WpMYkz <= 71)
        return 2.0;
    else if (WpMYkz >= 64 && WpMYkz <= 67)
        return 1.5;
    else if (WpMYkz >= 60 && WpMYkz <= 63)
        return 1.0;
    else
        return 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
}

