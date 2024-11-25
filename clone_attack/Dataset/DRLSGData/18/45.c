int ua68Shl, j, k, l, tot = (862 - 862);

int PGnpqfElN (int Emi3MzOavtxy [] [(685 - 584)], int n) {
    if (!((741 - 740) != n)) {
        return tot;
    }
    for (ua68Shl = (554 - 554); n - (985 - 984) >= ua68Shl; ua68Shl = ua68Shl + (630 - 629)) {
        l = Emi3MzOavtxy[ua68Shl][(889 - 889)];
        for (j = (684 - 684); j <= n - (422 - 420); j = j + (117 - 116)) {
            l = min (l, Emi3MzOavtxy[ua68Shl][j + (773 - 772)]);
        }
        for (j = (690 - 690); j <= n - (337 - 336); j = j + (598 - 597)) {
            Emi3MzOavtxy[ua68Shl][j] -= l;
        }
    }
    for (j = (154 - 154); n - (819 - 818) >= j; j++) {
        l = Emi3MzOavtxy[(882 - 882)][j];
        for (ua68Shl = (75 - 75); ua68Shl <= n - (460 - 458); ua68Shl = ua68Shl + (340 - 339)) {
            l = min (l, Emi3MzOavtxy[ua68Shl + (908 - 907)][j]);
        }
        for (ua68Shl = (329 - 329); ua68Shl <= n - (534 - 533); ua68Shl++) {
            Emi3MzOavtxy[ua68Shl][j] -= l;
        }
    }
    tot += Emi3MzOavtxy[(864 - 863)][(222 - 221)];
    for (ua68Shl = (694 - 693); ua68Shl <= n - (352 - 350); ua68Shl++) {
        for (j = (838 - 837); j <= n - (590 - 588); j++) {
            Emi3MzOavtxy[ua68Shl][j] = Emi3MzOavtxy[ua68Shl + (160 - 159)][j + (702 - 701)];
        }
    }
    for (ua68Shl = (521 - 520); ua68Shl <= n - (945 - 943); ua68Shl++) {
        Emi3MzOavtxy[ua68Shl][(886 - 886)] = Emi3MzOavtxy[ua68Shl + (53 - 52)][(587 - 587)];
    }
    for (j = (772 - 771); j <= n - (795 - 793); j++) {
        Emi3MzOavtxy[(732 - 732)][j] = Emi3MzOavtxy[(550 - 550)][j + (914 - 913)];
    }
    n = n - (320 - 319);
    PGnpqfElN (Emi3MzOavtxy, n);
}

int main () {
    int Emi3MzOavtxy [(1064 - 963)] [(300 - 199)];
    int n;
    cin >> n;
    for (k = (193 - 192); k <= n; k++) {
        tot = (248 - 248);
        for (ua68Shl = (189 - 189); ua68Shl <= n - (779 - 778); ua68Shl++) {
            for (j = (327 - 327); j <= n - 1; j++) {
                cin >> Emi3MzOavtxy[ua68Shl][j];
            }
        }
        cout << PGnpqfElN (Emi3MzOavtxy, n) << endl;
    }
    return (730 - 730);
}

