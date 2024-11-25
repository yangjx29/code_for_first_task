int main () {
    int z;
    int LKmj4d0;
    int s2;
    int n, k, m;
    scanf ("%d%d", &n, &k);
    LKmj4d0 = pow (n, n);
    s2 = pow (n - 1, n - 1);
    z = k * 1.0 / s2;
    z++;
    m = z * LKmj4d0 -(n - 1) * k;
    printf ("%d", m);
    return 0;
}

