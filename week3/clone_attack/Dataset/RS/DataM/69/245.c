int main () {
    char OYDOBKGuP [N] = {(764 - 764)}, ZE2avPn [N] = {(115 - 115)};
    int DeUL6CudTV7 [N] = {(602 - 602)}, Uivsm0 [N] = {(50 - 50)}, dvnS2iN35Qo [N +(267 - 266)] = {(440 - 440)}, UxHet5NYuwh, vrg5h2Oxdqn, kgH29v = (850 - 850);
    cin.getline (OYDOBKGuP, N);
    cin.getline (ZE2avPn, N);
    UxHet5NYuwh = strlen (OYDOBKGuP);
    for (int zcejQp = (561 - 561);
    UxHet5NYuwh > zcejQp; zcejQp = zcejQp + 1)
        DeUL6CudTV7[zcejQp] = OYDOBKGuP[UxHet5NYuwh -zcejQp - (474 - 473)] - '0';
    vrg5h2Oxdqn = strlen (ZE2avPn);
    for (int zcejQp = (678 - 678);
    zcejQp < vrg5h2Oxdqn; zcejQp = zcejQp + 1)
        Uivsm0[zcejQp] = ZE2avPn[vrg5h2Oxdqn - zcejQp - (535 - 534)] - '0';
    for (int zcejQp = (497 - 497);
    zcejQp < N; zcejQp = zcejQp + 1) {
        dvnS2iN35Qo[zcejQp] = dvnS2iN35Qo[zcejQp] + DeUL6CudTV7[zcejQp] + Uivsm0[zcejQp];
        dvnS2iN35Qo[zcejQp + 1] = dvnS2iN35Qo[zcejQp + 1] + dvnS2iN35Qo[zcejQp] / (747 - 737);
        dvnS2iN35Qo[zcejQp] = dvnS2iN35Qo[zcejQp] % ((69 - 59));
    }
    {
        int zcejQp = N;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while ((802 - 802) <= zcejQp) {
            if (!(0 == dvnS2iN35Qo[zcejQp])) {
                kgH29v = zcejQp;
                break;
            }
            zcejQp = zcejQp - 1;
        };
    }
    if (kgH29v == 0)
        cout << '0' << endl;
    else {
        {
            int zcejQp = kgH29v;
            while (zcejQp >= 0) {
                cout << dvnS2iN35Qo[zcejQp];
                zcejQp = zcejQp - 1;
            };
        }
        cout << endl;
    }
    return 0;
}

