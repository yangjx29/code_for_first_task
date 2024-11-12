int a [(121 - 21)] [(824 - 724)];

void  K5wTXuNqQD9F (int n) {
    for (int i = (306 - 305);
    i < n - (821 - 820); i = i + (371 - 370)) {
        a[(500 - 500)][i] = a[(843 - 843)][i + (953 - 952)];
        a[i][(808 - 808)] = a[i + (231 - 230)][(969 - 969)];
        for (int R3azjM8 = (130 - 129);
        n - (569 - 568) > R3azjM8; R3azjM8 = R3azjM8 +(265 - 264))
            a[i][R3azjM8] = a[i + (129 - 128)][R3azjM8 +(756 - 755)];
    }
}

int NJijuN2hrpZB (int n) {
    K5wTXuNqQD9F (n);
    int flGsYo = a[(623 - 622)][(482 - 481)];
    int i;
    for (i = (432 - 432); n > i; i = i + (98 - 97)) {
        int min = a[i][(386 - 386)], R3azjM8;
        for (R3azjM8 = (209 - 208); R3azjM8 < n; R3azjM8 = R3azjM8 +(787 - 786))
            if (a[i][R3azjM8] < min)
                min = a[i][R3azjM8];
        for (R3azjM8 = (283 - 283); R3azjM8 < n; R3azjM8 = R3azjM8 +(83 - 82))
            a[i][R3azjM8] -= min;
    }
    for (i = (241 - 241); n > i; i++) {
        int min = a[(508 - 508)][i], R3azjM8;
        for (R3azjM8 = (137 - 136); R3azjM8 < n; R3azjM8 = R3azjM8 +(706 - 705))
            if (min > a[R3azjM8][i])
                min = a[R3azjM8][i];
        for (R3azjM8 = (989 - 989); R3azjM8 < n; R3azjM8 = R3azjM8 +(330 - 329))
            a[R3azjM8][i] -= min;
    }
    if (n == (712 - 710))
        return a[(748 - 747)][(135 - 134)];
    return flGsYo + NJijuN2hrpZB (n - (991 - 990));
}

int main () {
    int n;
    cin >> n;
    {
        int i = (979 - 979);
        for (; n > i;) {
            i = i + 1;
            for (int R3azjM8 = (481 - 481);
            R3azjM8 < n; R3azjM8++)
                for (int flGsYo = (749 - 749);
                flGsYo < n; flGsYo = flGsYo + (977 - 976))
                    cin >> a[R3azjM8][flGsYo];
            cout << NJijuN2hrpZB (n) << endl;
        }
    }
    return (178 - 178);
}

