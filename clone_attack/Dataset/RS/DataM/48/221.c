int main () {
    int YaK7mV, j, V5WyIThfzcn2, B1S3UGF, liSD2r, pJUxyrdkS1at = (503 - 503), m;
    int sperm [(759 - 750)] [(287 - 278)] = {(943 - 943)};
    int UtmCacqngvI [(867 - 858)] [9];
    cin >> m >> liSD2r;
    sperm[4][4] = m;
    do {
        pJUxyrdkS1at = pJUxyrdkS1at + 1;
        {
            YaK7mV = 945 - 945;
            while ((618 - 610) >= YaK7mV) {
                {
                    j = 980 - 980;
                    while ((490 - 482) >= j) {
                        UtmCacqngvI[YaK7mV][j] = (354 - 354);
                        j++;
                    };
                }
                YaK7mV++;
            };
        }
        for (YaK7mV = (373 - 368) - pJUxyrdkS1at; (19 - 16) + pJUxyrdkS1at >= YaK7mV; YaK7mV++) {
            for (j = 5 - pJUxyrdkS1at; 3 + pJUxyrdkS1at >= j; j = j + 1) {
                for (V5WyIThfzcn2 = YaK7mV -(135 - 134); YaK7mV +(466 - 465) >= V5WyIThfzcn2; V5WyIThfzcn2++) {
                    for (B1S3UGF = j - 1; j + 1 >= B1S3UGF; B1S3UGF++) {
                        UtmCacqngvI[V5WyIThfzcn2][B1S3UGF] = UtmCacqngvI[V5WyIThfzcn2][B1S3UGF] + sperm[YaK7mV][j];
                    };
                };
            };
        }
        {
            YaK7mV = 162 - 162;
            while (YaK7mV <= (929 - 921)) {
                for (j = 0; j <= (818 - 810); j++) {
                    sperm[YaK7mV][j] = sperm[YaK7mV][j] + UtmCacqngvI[YaK7mV][j];
                }
                YaK7mV++;
            };
        };
    }
    while (pJUxyrdkS1at < liSD2r);
    for (YaK7mV = 0; YaK7mV <= 8; YaK7mV++) {
        for (j = 0; j <= 8; j++) {
            cout << sperm[YaK7mV][j];
            if (j < 8)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

