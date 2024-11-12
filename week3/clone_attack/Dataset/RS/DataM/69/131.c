int main () {
    int rseJfDxgMjHN [251], bTOyDv68ugX [251] = {(308 - 308)};
    char ln97YH [251];
    char zNXwx7clb3n [251];
    int rsWbIUNJu;
    int fEu2od;
    int RTdEWmgkUS;
    cin >> ln97YH >> zNXwx7clb3n;
    fEu2od = strlen (ln97YH);
    RTdEWmgkUS = strlen (zNXwx7clb3n);
    for (rsWbIUNJu = 0; fEu2od > rsWbIUNJu; ++rsWbIUNJu)
        rseJfDxgMjHN[rsWbIUNJu] = ln97YH[fEu2od - rsWbIUNJu - 1] - '0';
    for (rsWbIUNJu = 0; RTdEWmgkUS > rsWbIUNJu; ++rsWbIUNJu)
        bTOyDv68ugX[rsWbIUNJu] = zNXwx7clb3n[RTdEWmgkUS -rsWbIUNJu - 1] - '0';
    for (rsWbIUNJu = 0; rsWbIUNJu < fEu2od; ++rsWbIUNJu)
        bTOyDv68ugX[rsWbIUNJu] += rseJfDxgMjHN[rsWbIUNJu];
    for (rsWbIUNJu = 0; 251 > rsWbIUNJu; ++rsWbIUNJu)
        if (9 < bTOyDv68ugX[rsWbIUNJu]) {
            bTOyDv68ugX[rsWbIUNJu] -= 10;
            bTOyDv68ugX[rsWbIUNJu + 1]++;
        }
    for (rsWbIUNJu = 250; 0 <= rsWbIUNJu; rsWbIUNJu = rsWbIUNJu - 1)
        if (bTOyDv68ugX[rsWbIUNJu] != 0)
            break;
    if (rsWbIUNJu == -1)
        cout << 0 << endl;
    else {
        for (; rsWbIUNJu >= 0; --rsWbIUNJu)
            cout << bTOyDv68ugX[rsWbIUNJu];
        cout << endl;
    }
    return 0;
}

