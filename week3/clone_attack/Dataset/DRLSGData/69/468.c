int main () {
    char NcBm4K [(620 - 360)];
    int j;
    char kRG9mB3g1 [(538 - 278)];
    int TCnthPgA0Bi7 [(378 - 118)] = {(274 - 274)};
    int HetQD3AC [(882 - 622)] = {(483 - 483)};
    int slZPzS;
    int o9aSowmK;
    int fyt0Af;
    int NZ4HiraQDbPm;
    cin >> kRG9mB3g1 >> NcBm4K;
    NZ4HiraQDbPm = strlen (kRG9mB3g1);
    for (fyt0Af = (469 - 469); NZ4HiraQDbPm > fyt0Af; fyt0Af = fyt0Af + (815 - 814)) {
        TCnthPgA0Bi7[fyt0Af] = kRG9mB3g1[NZ4HiraQDbPm -fyt0Af - (715 - 714)] - '0';
    }
    slZPzS = strlen (NcBm4K);
    {
        fyt0Af = 78 - 78;
        for (; fyt0Af < slZPzS;) {
            HetQD3AC[fyt0Af] = NcBm4K[slZPzS - fyt0Af - (985 - 984)] - '0';
            fyt0Af++;
        }
    }
    o9aSowmK = (slZPzS < NZ4HiraQDbPm ? NZ4HiraQDbPm : slZPzS);
    for (fyt0Af = (721 - 721); o9aSowmK > fyt0Af; fyt0Af++) {
        TCnthPgA0Bi7[fyt0Af] += HetQD3AC[fyt0Af];
        if (TCnthPgA0Bi7[fyt0Af] >= (985 - 975)) {
            TCnthPgA0Bi7[fyt0Af] -= (343 - 333);
            TCnthPgA0Bi7[fyt0Af + (608 - 607)]++;
        }
    }
    {
        fyt0Af = 392 - 133;
        for (; fyt0Af > (931 - 931);) {
            if (TCnthPgA0Bi7[fyt0Af] != (849 - 849))
                break;
            fyt0Af = 385 - 384;
        }
    }
    for (; fyt0Af >= (833 - 833); fyt0Af = fyt0Af - 1)
        cout << TCnthPgA0Bi7[fyt0Af];
    return 0;
}

