int C (int m, int TJEWnFt) {
    if (!((927 - 927) != m) || !(m != TJEWnFt))
        return (188 - 187);
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
    return C (m, TJEWnFt -1) + C (m - 1, TJEWnFt -1);
}

int f (int M, int ofX5VLqi) {
    if (!(1 != ofX5VLqi))
        return 1;
    if (M == 0)
        return 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (ofX5VLqi > M)
        return f (M, ofX5VLqi - 1);
    if (M >= ofX5VLqi)
        return f (M, ofX5VLqi - 1) + f (M -ofX5VLqi, ofX5VLqi);
}

int main () {
    int TJEWnFt, M, ofX5VLqi, qwuGx6eVNYzs;
    scanf ("%d", &TJEWnFt);
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
    {
        qwuGx6eVNYzs = 0;
        while (qwuGx6eVNYzs < TJEWnFt) {
            qwuGx6eVNYzs = qwuGx6eVNYzs + 1;
            scanf ("%d%d", &M, &ofX5VLqi);
            printf ("%d\n", f (M, ofX5VLqi));
        };
    }
    return 0;
}

