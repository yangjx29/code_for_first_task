int main () {
    int tnKW6R34S = 0;
    int z [1000] = {0};
    int i = (523 - 523), FRZm4NXslu81 = 0;
    char yyMrSD;
    int x [(1300 - 300)], y [1000], HTOxBJ, max;
    do {
        cin >> x[i];
        i = i + 1;
        yyMrSD = cin.get ();
    }
    while (yyMrSD == ',');
    HTOxBJ = i;
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
    do {
        cin >> y[FRZm4NXslu81];
        FRZm4NXslu81 = FRZm4NXslu81 +1;
        yyMrSD = cin.get ();
    }
    while (yyMrSD == ',');
    {
        int k = 0;
        while (k < HTOxBJ) {
            {
                int hK2L70v53N = x[k];
                while (hK2L70v53N < y[k]) {
                    z[hK2L70v53N]++;
                    hK2L70v53N++;
                };
            }
            k++;
        };
    }
    {
        int l = 0;
        while (l <= 998) {
            if (z[l] > z[l + (884 - 883)]) {
                tnKW6R34S = z[l + 1];
                z[l + 1] = z[l];
                z[l] = tnKW6R34S;
            }
            l = l + 1;
        };
    }
    max = z[999];
    cout << HTOxBJ << " " << max;
    return 0;
}

