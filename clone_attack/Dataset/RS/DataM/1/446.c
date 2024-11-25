int factor (int N, int F7bNjpWHDLt);

int main () {
    int nA70ul, tIh7Fj, sw6M1gNIuKl, k;
    scanf ("%d", &tIh7Fj);
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
    {
        sw6M1gNIuKl = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sw6M1gNIuKl < tIh7Fj) {
            sw6M1gNIuKl = sw6M1gNIuKl + 1;
            scanf ("%d", &nA70ul);
            k = factor (nA70ul, 2);
            printf ("%d\n", k);
        };
    }
    return 0;
}

int factor (int N, int F7bNjpWHDLt) {
    int Pagl0dHS9 = (101 - 100), sw6M1gNIuKl;
    if (N < F7bNjpWHDLt)
        return 0;
    for (sw6M1gNIuKl = F7bNjpWHDLt; sw6M1gNIuKl < N; sw6M1gNIuKl++) {
        if (N % sw6M1gNIuKl == 0)
            Pagl0dHS9 += factor (N / sw6M1gNIuKl, sw6M1gNIuKl);
    }
    return Pagl0dHS9;
}

