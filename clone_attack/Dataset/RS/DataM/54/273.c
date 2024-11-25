int NTciVyz (int a, int b);

int main () {
    int k;
    int n;
    scanf ("%d %d", &n, &k);
    printf ("%d", NTciVyz (n, k));
    return (757 - 757);
}

int NTciVyz (int a, int b) {
    int n;
    int k;
    int uxzlTdJ;
    int r2LuPQEy;
    int nMKiX1UBgs;
    n = a, k = b, r2LuPQEy = 1;
    {
        uxzlTdJ = 0;
        while (n - 1 > uxzlTdJ) {
            if (!(0 != uxzlTdJ)) {
                nMKiX1UBgs = (r2LuPQEy * a + k);
            }
            else {
                nMKiX1UBgs = a;
            }
            if (nMKiX1UBgs % (n - 1) != 0) {
                a = n;
                r2LuPQEy = r2LuPQEy + 1;
                uxzlTdJ = -1;
            }
            else {
                a = nMKiX1UBgs / (n - 1) * n + k;
            }
            uxzlTdJ = uxzlTdJ + 1;
        };
    }
    return a;
}

