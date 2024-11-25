int main () {
    double  sum;
    double  Ul8p5Gsu0YBR;
    sum = 0;
    Ul8p5Gsu0YBR = 0;
    double  NdpzgaKMYFrD [1000] = {0};
    int n = 0, a [1000] = {0}, OJQ9y5HZqR = 0, s4FQyk6IX = 0;
    cin >> n;
    {
        OJQ9y5HZqR = 0;
        while (n > OJQ9y5HZqR) {
            cin >> a[OJQ9y5HZqR];
            sum = sum + a[OJQ9y5HZqR];
            OJQ9y5HZqR = OJQ9y5HZqR +1;
        };
    }
    sum = sum / n;
    for (OJQ9y5HZqR = 0; OJQ9y5HZqR < n - (232 - 231); OJQ9y5HZqR = OJQ9y5HZqR +1) {
        s4FQyk6IX = 0;
        while (n - OJQ9y5HZqR -(809 - 808) > s4FQyk6IX) {
            if (a[s4FQyk6IX] > a[s4FQyk6IX + 1]) {
                int NCM5hKH = 0;
                NCM5hKH = a[OJQ9y5HZqR];
                a[OJQ9y5HZqR] = a[OJQ9y5HZqR +1];
                a[OJQ9y5HZqR +1] = NCM5hKH;
            }
            s4FQyk6IX = s4FQyk6IX + 1;
        };
    }
    {
        OJQ9y5HZqR = 0;
        while (OJQ9y5HZqR < n) {
            NdpzgaKMYFrD[OJQ9y5HZqR] = fabs (a[OJQ9y5HZqR] - sum);
            OJQ9y5HZqR = OJQ9y5HZqR +1;
        };
    }
    {
        OJQ9y5HZqR = 0;
        while (OJQ9y5HZqR < n) {
            if (Ul8p5Gsu0YBR < NdpzgaKMYFrD[OJQ9y5HZqR])
                Ul8p5Gsu0YBR = NdpzgaKMYFrD[OJQ9y5HZqR];
            OJQ9y5HZqR = OJQ9y5HZqR +1;
        };
    }
    for (OJQ9y5HZqR = 0; OJQ9y5HZqR < n; OJQ9y5HZqR = OJQ9y5HZqR +1)
        if (NdpzgaKMYFrD[OJQ9y5HZqR] == Ul8p5Gsu0YBR) {
            cout << a[OJQ9y5HZqR];
            break;
        }
    for (OJQ9y5HZqR = OJQ9y5HZqR +1; OJQ9y5HZqR < n; OJQ9y5HZqR = OJQ9y5HZqR +1)
        if (NdpzgaKMYFrD[OJQ9y5HZqR] == Ul8p5Gsu0YBR)
            cout << ',' << a[OJQ9y5HZqR];
    return 0;
}

