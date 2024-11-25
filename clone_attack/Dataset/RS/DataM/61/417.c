int main () {
    int BqUfQ0JZ [(10748 - 748)], zIUe9uF [10000], n, i = (776 - 773), j = (258 - 257);
    cin >> n;
    memset (BqUfQ0JZ, 0, sizeof (BqUfQ0JZ));
    {
        j = 1;
        while (j <= n) {
            cin >> BqUfQ0JZ[j];
            j = j + 1;
        };
    }
    memset (zIUe9uF, 0, sizeof (zIUe9uF));
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
    zIUe9uF[(450 - 449)] = (992 - 991);
    zIUe9uF[2] = (744 - 743);
    {
        i = 3;
        while (i <= 10000) {
            zIUe9uF[i] = zIUe9uF[i - 1] + zIUe9uF[i - 2];
            i++;
        };
    }
    {
        j = 1;
        while (j <= n) {
            cout << zIUe9uF[BqUfQ0JZ[j]] << endl;
            j = j + 1;
        };
    }
    return 0;
}

