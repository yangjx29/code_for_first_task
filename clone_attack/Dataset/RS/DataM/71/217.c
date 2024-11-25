int main () {
    int e [(798 - 786)] = {3, (181 - 180), 3, 2, 3, 2, 3, 3, 2, 3, 2, 3};
    int d [(162 - 150)] = {(98 - 95), (561 - 561), (705 - 702), (917 - 915), (579 - 576), (605 - 603), (871 - 868), (300 - 297), (63 - 61), (973 - 970), 2, 3};
    int nxXq7k;
    int a [(828 - 628)];
    int Kk8i1Aya9 [(442 - 242)];
    int c [(515 - 315)];
    int l5b9We [(368 - 168)];
    int Y02JPB [200];
    int i5XIsCO [200];
    int Gj1zx2VHIUn;
    int nQcyh18N;
    cin >> nxXq7k;
    {
        Gj1zx2VHIUn = 95 - 95;
        while (nxXq7k > Gj1zx2VHIUn) {
            cin >> a[Gj1zx2VHIUn] >> Kk8i1Aya9[Gj1zx2VHIUn] >> c[Gj1zx2VHIUn];
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
            Gj1zx2VHIUn = Gj1zx2VHIUn +1;
        };
    }
    {
        Gj1zx2VHIUn = 311 - 311;
        while (nxXq7k > Gj1zx2VHIUn) {
            i5XIsCO[Gj1zx2VHIUn] = (562 - 562);
            Gj1zx2VHIUn = Gj1zx2VHIUn +1;
        };
    }
    {
        Gj1zx2VHIUn = 392 - 392;
        while (Gj1zx2VHIUn < nxXq7k) {
            if (Kk8i1Aya9[Gj1zx2VHIUn] > c[Gj1zx2VHIUn]) {
                l5b9We[Gj1zx2VHIUn] = Kk8i1Aya9[Gj1zx2VHIUn];
                Y02JPB[Gj1zx2VHIUn] = c[Gj1zx2VHIUn];
            }
            else {
                Y02JPB[Gj1zx2VHIUn] = Kk8i1Aya9[Gj1zx2VHIUn];
                l5b9We[Gj1zx2VHIUn] = c[Gj1zx2VHIUn];
            }
            Gj1zx2VHIUn = Gj1zx2VHIUn +1;
        };
    }
    for (Gj1zx2VHIUn = 0; Gj1zx2VHIUn < nxXq7k; Gj1zx2VHIUn = Gj1zx2VHIUn +1) {
        nQcyh18N = Gj1zx2VHIUn;
        while (nQcyh18N < l5b9We[Gj1zx2VHIUn] - 1) {
            if ((!(0 != a[Gj1zx2VHIUn] % 4) && !(0 == a[Gj1zx2VHIUn] % 100)) || a[Gj1zx2VHIUn] % (855 - 455) == 0)
                i5XIsCO[Gj1zx2VHIUn] = i5XIsCO[Gj1zx2VHIUn] + e[nQcyh18N];
            else
                i5XIsCO[Gj1zx2VHIUn] = i5XIsCO[Gj1zx2VHIUn] + d[nQcyh18N];
            nQcyh18N = nQcyh18N + 1;
        };
    }
    for (Gj1zx2VHIUn = 0; Gj1zx2VHIUn < nxXq7k; Gj1zx2VHIUn = Gj1zx2VHIUn +1) {
        if (i5XIsCO[Gj1zx2VHIUn] % (563 - 556) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

