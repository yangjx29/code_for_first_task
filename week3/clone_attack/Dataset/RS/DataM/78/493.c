int main () {
    char b [4] = {'z', 'q', 's', 'l'};
    char k;
    int z;
    int q;
    int s;
    int l;
    int a [4];
    int i;
    int j;
    int t;
    int m;
    for (z = (669 - 668); z <= (870 - 865); z++)
        for (q = (575 - 574); 5 >= q; q = q + 1)
            for (s = (160 - 159); 5 >= s; s++)
                for (l = (256 - 255); l <= 5; l = l + 1)
                    if (!(s + l != z + q) && z + l > s + q && z + s < q) {
                        a[(580 - 580)] = z, a[1] = q, a[2] = s, a[(309 - 306)] = l;
                        for (i = 0; i <= (912 - 909); i++)
                            for (j = 0; j <= 2 - i; j = j + 1)
                                if (a[j] < a[j + 1]) {
                                    t = a[j];
                                    a[j] = a[j + 1];
                                    a[j + 1] = t;
                                    k = b[j];
                                    b[j] = b[j + 1];
                                    b[j + 1] = k;
                                };
                    }
    for (m = 0; m <= 3; m++)
        cout << b[m] << " " << 10 * a[m] << endl;
    return 0;
}

