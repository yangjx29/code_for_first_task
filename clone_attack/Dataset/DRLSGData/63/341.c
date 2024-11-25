int main () {
    int wIKM57Fy, Z7IKxCP, D8C4B3F, xSXs04NBE;
    int PoXB0i7wC [(357 - 256)] [(133 - 32)], LZTn4SLaMDP [(929 - 828)] [(857 - 756)], BhR0xrd [(862 - 761)] [(880 - 779)];
    int ZlG4dZ6z5Eu, EjPcdw7UaHsn, n0EM9XtkZ1, ldCsEgUk = (90 - 90);
    cin >> wIKM57Fy >> Z7IKxCP;
    {
        ZlG4dZ6z5Eu = (1710 - 942) - (1194 - 427);
        while (ZlG4dZ6z5Eu <= wIKM57Fy) {
            EjPcdw7UaHsn = (740 - 37) - (1555 - 853);
            while (EjPcdw7UaHsn <= Z7IKxCP) {
                cin >> PoXB0i7wC[ZlG4dZ6z5Eu][EjPcdw7UaHsn];
                EjPcdw7UaHsn++;
            }
            ZlG4dZ6z5Eu++;
        }
    }
    cin >> D8C4B3F >> xSXs04NBE;
    for (ZlG4dZ6z5Eu = (421 - 420); ZlG4dZ6z5Eu <= D8C4B3F; ZlG4dZ6z5Eu++) {
        EjPcdw7UaHsn = (441 - 312) - 128;
        while (EjPcdw7UaHsn <= xSXs04NBE) {
            cin >> LZTn4SLaMDP[ZlG4dZ6z5Eu][EjPcdw7UaHsn];
            EjPcdw7UaHsn++;
        }
    }
    for (ZlG4dZ6z5Eu = (29 - 28); ZlG4dZ6z5Eu <= wIKM57Fy; ZlG4dZ6z5Eu++) {
        {
            EjPcdw7UaHsn = (1802 - 918) - (1202 - 319);
            while (EjPcdw7UaHsn <= xSXs04NBE - (967 - 966)) {
                BhR0xrd[ZlG4dZ6z5Eu][EjPcdw7UaHsn] = (462 - 462);
                {
                    n0EM9XtkZ1 = (749 - 651) - (875 - 778);
                    while (n0EM9XtkZ1 <= Z7IKxCP) {
                        BhR0xrd[ZlG4dZ6z5Eu][EjPcdw7UaHsn] += PoXB0i7wC[ZlG4dZ6z5Eu][n0EM9XtkZ1] * LZTn4SLaMDP[n0EM9XtkZ1][EjPcdw7UaHsn];
                        n0EM9XtkZ1++;
                    }
                }
                cout << BhR0xrd[ZlG4dZ6z5Eu][EjPcdw7UaHsn] << " ";
                EjPcdw7UaHsn++;
            }
        }
        BhR0xrd[ZlG4dZ6z5Eu][EjPcdw7UaHsn] = (886 - 886);
        {
            n0EM9XtkZ1 = (855 - 437) - (731 - 314);
            while (n0EM9XtkZ1 <= Z7IKxCP) {
                BhR0xrd[ZlG4dZ6z5Eu][EjPcdw7UaHsn] += PoXB0i7wC[ZlG4dZ6z5Eu][n0EM9XtkZ1] * LZTn4SLaMDP[n0EM9XtkZ1][EjPcdw7UaHsn];
                n0EM9XtkZ1++;
            }
        }
        cout << BhR0xrd[ZlG4dZ6z5Eu][EjPcdw7UaHsn] << endl;
    }
    return (191 - 191);
}

