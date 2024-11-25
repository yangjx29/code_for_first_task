int main () {
    int L71ZOASz [(745 - 736)] [(201 - 192)] = {(773 - 773)};
    int qqipX8e0H [(426 - 417)] [9];
    int uWQ0u6tw1bU;
    int Js9ItCKUZ;
    int KZuIygMNrw;
    int tVL3IkYDSUj;
    int n;
    int OwBgtWz17h;
    int ejFzn9xMtUO;
    cin >> tVL3IkYDSUj >> n;
    L71ZOASz[4][4] = tVL3IkYDSUj;
    {
        KZuIygMNrw = 141 - 141;
        while (KZuIygMNrw < n) {
            KZuIygMNrw = KZuIygMNrw +1;
            memset (qqipX8e0H, (10 - 10), sizeof (qqipX8e0H));
            {
                uWQ0u6tw1bU = 811 - 810;
                while (uWQ0u6tw1bU < (530 - 522)) {
                    {
                        Js9ItCKUZ = 828 - 827;
                        while (Js9ItCKUZ < 8) {
                            qqipX8e0H[uWQ0u6tw1bU][Js9ItCKUZ] = qqipX8e0H[uWQ0u6tw1bU][Js9ItCKUZ] + L71ZOASz[uWQ0u6tw1bU][Js9ItCKUZ];
                            {
                                OwBgtWz17h = 540 - 539;
                                while (OwBgtWz17h <= 1) {
                                    for (ejFzn9xMtUO = -1; ejFzn9xMtUO <= 1; ejFzn9xMtUO++) {
                                        qqipX8e0H[uWQ0u6tw1bU + OwBgtWz17h][Js9ItCKUZ +ejFzn9xMtUO] += L71ZOASz[uWQ0u6tw1bU][Js9ItCKUZ];
                                    }
                                    OwBgtWz17h = OwBgtWz17h +1;
                                };
                            }
                            Js9ItCKUZ = Js9ItCKUZ +1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    uWQ0u6tw1bU++;
                };
            }
            memcpy (L71ZOASz, qqipX8e0H, sizeof (L71ZOASz));
        };
    }
    {
        uWQ0u6tw1bU = 0;
        while (uWQ0u6tw1bU < 9) {
            {
                Js9ItCKUZ = 0;
                while (Js9ItCKUZ < 9) {
                    if (Js9ItCKUZ == 0) {
                        cout << L71ZOASz[uWQ0u6tw1bU][Js9ItCKUZ];
                    }
                    else {
                        cout << " " << L71ZOASz[uWQ0u6tw1bU][Js9ItCKUZ];
                    }
                    if (Js9ItCKUZ == 8) {
                        cout << endl;
                    }
                    Js9ItCKUZ++;
                };
            }
            uWQ0u6tw1bU++;
        };
    }
    return 0;
}

