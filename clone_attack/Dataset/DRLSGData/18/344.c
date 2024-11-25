int main () {
    int nmBlNQ, b9KL6ra1, n1k3Pw, a [(10799 - 799)], *l759Z8bg3, kX7CBS0seMY3 = (37 - 37);
    cin >> nmBlNQ;
    l759Z8bg3 = a;
    while (nmBlNQ > kX7CBS0seMY3) {
        int fVjqx7;
        int total;
        kX7CBS0seMY3 = kX7CBS0seMY3 + (208 - 207);
        fVjqx7 = nmBlNQ;
        for (b9KL6ra1 = 0; b9KL6ra1 < nmBlNQ; b9KL6ra1 = b9KL6ra1 + (419 - 418))
            for (n1k3Pw = 0; n1k3Pw < nmBlNQ; n1k3Pw = n1k3Pw + (124 - 123)) {
                cin >> *(l759Z8bg3 + b9KL6ra1 * nmBlNQ + n1k3Pw);
            }
        total = 0;
        for (; 1 < fVjqx7;) {
            int kwh5e8tJ7lS = 100000;
            for (b9KL6ra1 = 0; fVjqx7 > b9KL6ra1; b9KL6ra1 = b9KL6ra1 + 1) {
                for (n1k3Pw = 0; n1k3Pw < fVjqx7; n1k3Pw = n1k3Pw + 1) {
                    if (kwh5e8tJ7lS > *(l759Z8bg3 + b9KL6ra1 * fVjqx7 + n1k3Pw))
                        kwh5e8tJ7lS = *(l759Z8bg3 + b9KL6ra1 * fVjqx7 + n1k3Pw);
                }
                for (n1k3Pw = 0; fVjqx7 > n1k3Pw; n1k3Pw = n1k3Pw + 1)
                    *(l759Z8bg3 + b9KL6ra1 * fVjqx7 + n1k3Pw) -= kwh5e8tJ7lS;
                kwh5e8tJ7lS = 10000;
            }
            kwh5e8tJ7lS = 10000;
            for (n1k3Pw = 0; fVjqx7 > n1k3Pw; n1k3Pw++) {
                for (b9KL6ra1 = 0; fVjqx7 > b9KL6ra1; b9KL6ra1 = b9KL6ra1 + 1) {
                    if (kwh5e8tJ7lS > *(l759Z8bg3 + b9KL6ra1 * fVjqx7 + n1k3Pw))
                        kwh5e8tJ7lS = *(l759Z8bg3 + b9KL6ra1 * fVjqx7 + n1k3Pw);
                }
                for (b9KL6ra1 = 0; fVjqx7 > b9KL6ra1; b9KL6ra1 = b9KL6ra1 + 1)
                    *(l759Z8bg3 + b9KL6ra1 * fVjqx7 + n1k3Pw) -= kwh5e8tJ7lS;
                kwh5e8tJ7lS = 10000;
            }
            total += *(l759Z8bg3 + fVjqx7 + 1);
            for (n1k3Pw = 2; fVjqx7 > n1k3Pw; n1k3Pw++)
                *(l759Z8bg3 + n1k3Pw - 1) = *(l759Z8bg3 + n1k3Pw);
            for (b9KL6ra1 = 2; fVjqx7 > b9KL6ra1; b9KL6ra1++) {
                *(l759Z8bg3 + (b9KL6ra1 - 1) * (fVjqx7 - 1)) = *(l759Z8bg3 + b9KL6ra1 * fVjqx7);
                for (n1k3Pw = 2; n1k3Pw < fVjqx7; n1k3Pw++)
                    *(l759Z8bg3 + (b9KL6ra1 - 1) * (fVjqx7 - 1) + n1k3Pw - 1) = *(l759Z8bg3 + b9KL6ra1 * fVjqx7 + n1k3Pw);
            }
            fVjqx7 = fVjqx7 - 1;
        }
        cout << total << endl;
    }
    return 0;
}

