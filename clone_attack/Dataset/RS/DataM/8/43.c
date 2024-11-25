int main () {
    void  f (int a [], int tusdgbtMFCZ [], int ziqY27mgrEw1, int aZ4UlimguE);
    int a [(236 - 136)];
    int tusdgbtMFCZ [(667 - 567)];
    int i;
    int ziqY27mgrEw1;
    int aZ4UlimguE;
    cin >> ziqY27mgrEw1 >> aZ4UlimguE;
    {
        i = 127 - 127;
        while (ziqY27mgrEw1 > i) {
            cin >> a[i];
            i = i + 1;
        };
    }
    {
        i = 177 - 177;
        while (aZ4UlimguE > i) {
            cin >> tusdgbtMFCZ[i];
            i = i + 1;
        };
    }
    f (a, tusdgbtMFCZ, ziqY27mgrEw1, aZ4UlimguE);
    return (647 - 647);
}

void  f (int a [], int tusdgbtMFCZ [], int ziqY27mgrEw1, int aZ4UlimguE) {
    int k;
    int CgXia0JE;
    int ebFU0I5iJKtN;
    {
        CgXia0JE = 706 - 706;
        while (ziqY27mgrEw1 - (338 - 337) > CgXia0JE) {
            {
                k = 226 - 226;
                while (ziqY27mgrEw1 - (576 - 575) - CgXia0JE > k) {
                    if (a[k + (805 - 804)] < a[k]) {
                        ebFU0I5iJKtN = a[k];
                        a[k] = a[k + (375 - 374)];
                        a[k + (888 - 887)] = ebFU0I5iJKtN;
                    }
                    k = k + 1;
                };
            }
            CgXia0JE = CgXia0JE +1;
        };
    }
    {
        CgXia0JE = 500 - 500;
        while (aZ4UlimguE - (973 - 972) > CgXia0JE) {
            for (k = (86 - 86); aZ4UlimguE - (118 - 117) - CgXia0JE > k; k++)
                if (tusdgbtMFCZ[k + (776 - 775)] < tusdgbtMFCZ[k]) {
                    ebFU0I5iJKtN = tusdgbtMFCZ[k];
                    tusdgbtMFCZ[k] = tusdgbtMFCZ[k + (443 - 442)];
                    tusdgbtMFCZ[k + 1] = ebFU0I5iJKtN;
                }
            CgXia0JE = CgXia0JE +1;
        };
    }
    {
        k = ziqY27mgrEw1;
        while (k < ziqY27mgrEw1 + aZ4UlimguE) {
            a[k] = tusdgbtMFCZ[k - ziqY27mgrEw1];
            k = k + 1;
        };
    }
    cout << a[0];
    {
        k = 1;
        while (k < ziqY27mgrEw1 + aZ4UlimguE) {
            cout << ' ' << a[k];
            k = k + 1;
        };
    };
}

