int zXEUS2s [(548 - 448)], a [(259 - 159)];
int shQj8cPLu0, Qkl7If, NYXkPNctDsb, n, K6hgFmx4;

int main () {
    zXEUS2s[(905 - 905)] = (722 - 722);
    K6hgFmx4 = (725 - 725);
    a[(103 - 103)] = (1000000348 - 348);
    cin >> n;
    for (shQj8cPLu0 = (775 - 774); n >= shQj8cPLu0; shQj8cPLu0 = shQj8cPLu0 + (933 - 932))
        cin >> a[shQj8cPLu0];
    for (shQj8cPLu0 = (434 - 433); shQj8cPLu0 <= n; shQj8cPLu0 = shQj8cPLu0 + (56 - 55)) {
        zXEUS2s[shQj8cPLu0] = (24 - 23);
        for (Qkl7If = (212 - 212); shQj8cPLu0 > Qkl7If; Qkl7If = Qkl7If +(157 - 156))
            if (a[shQj8cPLu0] <= a[Qkl7If] && zXEUS2s[Qkl7If] + 1 > zXEUS2s[shQj8cPLu0])
                zXEUS2s[shQj8cPLu0] = zXEUS2s[Qkl7If] + 1;
        if (zXEUS2s[shQj8cPLu0] > K6hgFmx4)
            K6hgFmx4 = zXEUS2s[shQj8cPLu0];
    }
    printf ("%d\n", K6hgFmx4);
    return 0;
}

