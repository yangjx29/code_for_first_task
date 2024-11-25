int main () {
    int B4JEQqrXFA [20] [20] = {0};
    int ZSC9pg0zKTa;
    int jq7IzCoGiB;
    cin >> ZSC9pg0zKTa >> jq7IzCoGiB;
    int bQV9IFsZ0;
    int f8PHsvL;
    for (bQV9IFsZ0 = 0; ZSC9pg0zKTa > bQV9IFsZ0; bQV9IFsZ0++) {
        f8PHsvL = 0;
        while (jq7IzCoGiB > f8PHsvL) {
            cin >> B4JEQqrXFA[bQV9IFsZ0][f8PHsvL];
            f8PHsvL++;
        }
    }
    int E5hu3K, rpjGYy;
    for (bQV9IFsZ0 = 0; ZSC9pg0zKTa > bQV9IFsZ0; bQV9IFsZ0++) {
        for (f8PHsvL = 0; jq7IzCoGiB > f8PHsvL; f8PHsvL++) {
            rpjGYy = 0;
            E5hu3K = 0;
            if (1 <= bQV9IFsZ0) {
                E5hu3K = E5hu3K +(B4JEQqrXFA[bQV9IFsZ0][f8PHsvL] >= B4JEQqrXFA[bQV9IFsZ0 - 1][f8PHsvL]);
                rpjGYy++;
            }
            if (ZSC9pg0zKTa -1 > bQV9IFsZ0) {
                E5hu3K = E5hu3K +(B4JEQqrXFA[bQV9IFsZ0 + 1][f8PHsvL] <= B4JEQqrXFA[bQV9IFsZ0][f8PHsvL]);
                rpjGYy++;
            }
            if (1 <= f8PHsvL) {
                E5hu3K = E5hu3K +(B4JEQqrXFA[bQV9IFsZ0][f8PHsvL] >= B4JEQqrXFA[bQV9IFsZ0][f8PHsvL - 1]);
                rpjGYy++;
            }
            if (f8PHsvL < jq7IzCoGiB - 1) {
                E5hu3K = E5hu3K +(B4JEQqrXFA[bQV9IFsZ0][f8PHsvL] >= B4JEQqrXFA[bQV9IFsZ0][f8PHsvL + 1]);
                rpjGYy++;
            }
            if (E5hu3K == rpjGYy) {
                cout << bQV9IFsZ0 << " " << f8PHsvL << endl;
            }
        }
    }
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

