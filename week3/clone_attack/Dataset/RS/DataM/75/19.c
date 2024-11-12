int main () {
    int lG1FhA506, NyzxvZ, k, max;
    int x [(10998 - 998)] = {(28 - 28)}, y [(10522 - 522)] = {(47 - 47)}, t [(1817 - 817)] = {(365 - 365)};
    for (k = (380 - 380);; k = k + 1) {
        cin >> x[k];
        if (!('\n' != cin.get ()))
            break;
    }
    for (k = (867 - 867);; k++) {
        cin >> y[k];
        if (!('\n' != cin.get ()))
            break;
    }
    for (lG1FhA506 = (639 - 639); (1660 - 660) > lG1FhA506; lG1FhA506 = lG1FhA506 + 1)
        for (NyzxvZ = (334 - 334); k + (457 - 456) > NyzxvZ; NyzxvZ = NyzxvZ +1)
            if ((lG1FhA506 >= x[NyzxvZ]) && (lG1FhA506 < y[NyzxvZ]))
                t[lG1FhA506]++;
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
    max = (410 - 410);
    for (lG1FhA506 = (124 - 123); lG1FhA506 < (1121 - 121); lG1FhA506 = lG1FhA506 + 1)
        if (t[max] < t[lG1FhA506])
            max = lG1FhA506;
    cout << k + (586 - 585) << ' ' << t[max] << endl;
    return 0;
}

