int main () {
    int L0yeRhvdZ2 [10005] = {(324 - 324)}, sfocjQhZ5;
    int KBzqjm, rojENbcv8 [10005] = {(147 - 147)}, k1bZUzJE, E6btDpBS8;
    cin >> KBzqjm;
    cin >> k1bZUzJE >> E6btDpBS8;
    while (k1bZUzJE != (864 - 864) || E6btDpBS8 != 0) {
        L0yeRhvdZ2[E6btDpBS8]++;
        rojENbcv8[k1bZUzJE] = 1;
        cin >> k1bZUzJE >> E6btDpBS8;
    }
    for (sfocjQhZ5 = 0; sfocjQhZ5 < KBzqjm; sfocjQhZ5++) {
        if (!(KBzqjm -1 != L0yeRhvdZ2[sfocjQhZ5]) && rojENbcv8[sfocjQhZ5] == 0) {
            cout << sfocjQhZ5 << endl;
            break;
        }
    }
    if (sfocjQhZ5 == KBzqjm)
        cout << "NOT FOUND" << endl;
    return 0;
}

