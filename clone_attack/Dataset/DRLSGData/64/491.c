int main () {
    int aQ5zai, KuU1Qs0G, dLJpvzWB1j, ALK7H8pmIWh0 = 0, MEW38o0Q = 0, mLoPdGcN, QgSXPmWGsJ4;
    int ZwbPSJZ [aQ5zai - 1], rCczYk6Z [aQ5zai - 1], apuT4r [aQ5zai - 1];
    double  KZRSLwr [100], TBUFWQn6ltI2;
    scanf ("%d\n", &aQ5zai);
    TBUFWQn6ltI2 = 0;
    for (int c7cEmZD8Rj = 0;
    100 > c7cEmZD8Rj; c7cEmZD8Rj = c7cEmZD8Rj + 1) {
        KZRSLwr[c7cEmZD8Rj] = -1;
    }
    for (int c7cEmZD8Rj = 0;
    aQ5zai > c7cEmZD8Rj; c7cEmZD8Rj = c7cEmZD8Rj + 1) {
        scanf ("%d%d%d", &ZwbPSJZ[c7cEmZD8Rj], &rCczYk6Z[c7cEmZD8Rj], &apuT4r[c7cEmZD8Rj]);
    }
    for (int c7cEmZD8Rj = 0;
    aQ5zai - 1 > c7cEmZD8Rj; c7cEmZD8Rj = c7cEmZD8Rj + 1) {
        for (int ajDvbV8KAq = c7cEmZD8Rj + 1;
        aQ5zai > ajDvbV8KAq; ajDvbV8KAq++) {
            KuU1Qs0G = 10 * c7cEmZD8Rj + ajDvbV8KAq;
            KZRSLwr[KuU1Qs0G] = sqrt ((ZwbPSJZ[c7cEmZD8Rj] - ZwbPSJZ[ajDvbV8KAq]) * (ZwbPSJZ[c7cEmZD8Rj] - ZwbPSJZ[ajDvbV8KAq]) + (rCczYk6Z[c7cEmZD8Rj] - rCczYk6Z[ajDvbV8KAq]) * (rCczYk6Z[c7cEmZD8Rj] - rCczYk6Z[ajDvbV8KAq]) + (apuT4r[c7cEmZD8Rj] - apuT4r[ajDvbV8KAq]) * (apuT4r[c7cEmZD8Rj] - apuT4r[ajDvbV8KAq]));
        }
    }
    dLJpvzWB1j = aQ5zai * (aQ5zai - 1) / 2;
    for (int c7cEmZD8Rj = 0;
    100 > c7cEmZD8Rj; c7cEmZD8Rj++) {
        if (!(dLJpvzWB1j != ALK7H8pmIWh0)) {
            break;
        }
        if (KZRSLwr[c7cEmZD8Rj] > TBUFWQn6ltI2) {
            TBUFWQn6ltI2 = KZRSLwr[c7cEmZD8Rj];
            MEW38o0Q = c7cEmZD8Rj;
        }
        if (c7cEmZD8Rj == 99) {
            c7cEmZD8Rj = -1;
            ALK7H8pmIWh0++;
            mLoPdGcN = MEW38o0Q / 10;
            KZRSLwr[MEW38o0Q] = -1;
            aQ5zai = MEW38o0Q -mLoPdGcN * 10;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", ZwbPSJZ[mLoPdGcN], rCczYk6Z[mLoPdGcN], apuT4r[mLoPdGcN], ZwbPSJZ[aQ5zai], rCczYk6Z[aQ5zai], apuT4r[aQ5zai], TBUFWQn6ltI2);
            TBUFWQn6ltI2 = 0;
        }
    }
    return 0;
}

