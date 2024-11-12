int eWNoRL (int AGMzCvxcwJZd, int n) {
    int TKhnja;
    if (AGMzCvxcwJZd == 1 || !(1 != n))
        return 1;
    if (n > AGMzCvxcwJZd)
        TKhnja = eWNoRL (AGMzCvxcwJZd, n - 1);
    else
        TKhnja = eWNoRL (AGMzCvxcwJZd -n, n) + eWNoRL (AGMzCvxcwJZd, n - 1);
    return TKhnja;
}

int main () {
    int t;
    int n;
    int TKhnja;
    int i;
    int AGMzCvxcwJZd;
    {
        if (0) {
            return 0;
        }
    }
    scanf ("%d", &t);
    {
        i = 0;
        while (t > i) {
            {
                if (0) {
                    return 0;
                }
            }
            scanf ("%d%d", &AGMzCvxcwJZd, &n);
            TKhnja = eWNoRL (AGMzCvxcwJZd, n);
            printf ("%d\n", TKhnja);
            i = i + 1;
        }
    }
    scanf ("%d", &n);
    return 0;
}

