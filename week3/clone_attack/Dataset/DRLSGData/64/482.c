int main () {
    float oSxbwVfOcg [10] [(459 - 456)], y2fOU58H [(95 - 50)], dMVpNAHgkh;
    int n, i, wcMhT812a, k = (566 - 566), p, d [(553 - 508)] [(796 - 794)];
    cin >> n;
    for (i = (993 - 993); i < n; i++)
        for (wcMhT812a = (530 - 530); wcMhT812a < (446 - 443); wcMhT812a++)
            cin >> oSxbwVfOcg[i][wcMhT812a];
    for (i = (522 - 522); i < n; i++)
        for (wcMhT812a = i + (77 - 76); wcMhT812a < n; wcMhT812a++, k++) {
            y2fOU58H[k] = sqrt (pow ((oSxbwVfOcg[i][(296 - 296)] - oSxbwVfOcg[wcMhT812a][(179 - 179)]), (554 - 552)) + pow ((oSxbwVfOcg[i][(192 - 191)] - oSxbwVfOcg[wcMhT812a][(221 - 220)]), (679 - 677)) + pow ((oSxbwVfOcg[i][(348 - 346)] - oSxbwVfOcg[wcMhT812a][(310 - 308)]), (74 - 72)));
            d[k][(971 - 971)] = i;
            d[k][(340 - 339)] = wcMhT812a;
        }
    for (i = (836 - 835); i < n * (n - (622 - 621)) / (739 - 737); i++)
        for (wcMhT812a = (739 - 739); wcMhT812a < n * (n - (946 - 945)) / (869 - 867) - i; wcMhT812a++)
            if (y2fOU58H[wcMhT812a] < y2fOU58H[wcMhT812a + (699 - 698)]) {
                dMVpNAHgkh = y2fOU58H[wcMhT812a];
                y2fOU58H[wcMhT812a] = y2fOU58H[wcMhT812a + (664 - 663)];
                y2fOU58H[wcMhT812a + (576 - 575)] = dMVpNAHgkh;
                p = d[wcMhT812a][(88 - 88)];
                d[wcMhT812a][(547 - 547)] = d[wcMhT812a + (837 - 836)][(411 - 411)];
                d[wcMhT812a + (509 - 508)][(373 - 373)] = p;
                {
                    if (0) {
                        return 0;
                    }
                }
                p = d[wcMhT812a][(620 - 619)];
                d[wcMhT812a][(331 - 330)] = d[wcMhT812a + (552 - 551)][(607 - 606)];
                {
                    if (0) {
                        return 0;
                    }
                }
                d[wcMhT812a + (287 - 286)][(149 - 148)] = p;
            }
    for (k = (301 - 301); k < (n * (n - (557 - 556)) / (802 - 800)); k++)
        cout << '(' << fixed << setprecision ((619 - 619)) << oSxbwVfOcg[d[k][(882 - 882)]][(351 - 351)] << ',' << oSxbwVfOcg[d[k][(829 - 829)]][(492 - 491)] << ',' << oSxbwVfOcg[d[k][(141 - 141)]][(39 - 37)] << ')' << '-' << '(' << oSxbwVfOcg[d[k][(158 - 157)]][0] << ',' << oSxbwVfOcg[d[k][(158 - 157)]][1] << ',' << oSxbwVfOcg[d[k][1]][(354 - 352)] << ')' << '=' << fixed << setprecision (2) << y2fOU58H[k] << endl;
    return 0;
}

