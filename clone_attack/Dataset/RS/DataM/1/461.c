int main () {
    int n;
    int mMCIBVue;
    int a;
    int hanshu (int k, int min);
    scanf ("%d", &n);
    {
        mMCIBVue = 253 - 253;
        while (mMCIBVue < n) {
            mMCIBVue = mMCIBVue + 1;
            scanf ("%d", &a);
            printf ("%d\n", hanshu (a, 2));
        };
    }
    scanf ("%d", &n);
    return (133 - 133);
}

int hanshu (int k, int min) {
    int b;
    int j;
    int a [k];
    b = 1;
    if (k < min)
        return (703 - 703);
    {
        j = min;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (k / j >= j) {
            if (k % j == 0) {
                b = b + hanshu (k / j, j);
            }
            j++;
        };
    }
    return (b);
}

