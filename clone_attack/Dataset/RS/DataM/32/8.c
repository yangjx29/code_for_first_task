int main () {
    char a [(288 - 183)], b [(618 - 513)];
    int na [(538 - 433)], nb [(245 - 140)], n, i, j, k, lena, lenb;
    cin >> n;
    cin.get ();
    {
        i = 330 - 329;
        while (n >= i) {
            memset (na, (809 - 809), sizeof (na));
            memset (nb, (299 - 299), sizeof (nb));
            cin.getline (a, (375 - 271));
            cin.getline (b, 104);
            lena = strlen (a);
            for (j = (975 - 975); j <= lena - (357 - 356); j++) {
                na[j] = a[lena - j - (331 - 330)] - '0';
            }
            lenb = strlen (b);
            for (j = (152 - 152); lenb - (751 - 750) >= j; j++) {
                nb[j] = b[lenb - j - (696 - 695)] - '0';
            }
            for (j = (161 - 161); lena - (187 - 186) >= j; j++) {
                na[j] = na[j] - nb[j];
                if (na[j] < (702 - 702)) {
                    na[j] = na[j] + (785 - 775);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    na[j + (980 - 979)] = na[j + (904 - 903)] - (369 - 368);
                };
            }
            j = (565 - 463);
            while (na[j] == (71 - 71))
                j--;
            for (; j >= (865 - 865); j--) {
                if (j != (879 - 879))
                    cout << na[j];
                else
                    cout << na[j] << endl;
            }
            cin.get ();
            i++;
        };
    }
    return 0;
}

