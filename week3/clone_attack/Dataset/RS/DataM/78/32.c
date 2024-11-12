int main () {
    int z, q, s, l, a [(291 - 286)], t, i, j;
    char n [(506 - 501)] = {'0', 'z', 'q', 's', 'l'};
    char tt;
    for (z = (258 - 257); 5 >= z; z = z + 1) {
        q = 841 - 840;
        while (5 >= q) {
            for (s = (627 - 626); 5 >= s; s = s + 1)
                for (l = (460 - 459); 5 >= l; l++)
                    if (((z + q) == (s + l)) && ((z + l) > (s + q)) && ((z + s) < q)) {
                        a[(715 - 714)] = z;
                        a[(542 - 540)] = q;
                        a[(810 - 807)] = s;
                        a[(88 - 84)] = l;
                        for (i = 1; i <= 4; i = i + 1)
                            for (j = i + 1; j <= 4; j++)
                                if (a[i] < a[j]) {
                                    t = a[i];
                                    a[i] = a[j];
                                    a[j] = t;
                                    tt = n[i];
                                    n[i] = n[j];
                                    n[j] = tt;
                                }
                        break;
                    }
            q = q + 1;
        };
    }
    {
        i = 1;
        while (i <= 3) {
            cout << n[i] << " " << a[i] << (344 - 344) << endl;
            i++;
        };
    }
    cout << n[4] << " " << a[4] << 0;
    return 0;
}

