void  sMdjF4alPf0 (char [], int, int);

int main () {
    char at4hjcqK [1000];
    int len;
    len = strlen (at4hjcqK);
    cin.getline (at4hjcqK, 1000);
    sMdjF4alPf0 (at4hjcqK, 1, len);
    return 0;
}

void  sMdjF4alPf0 (char at4hjcqK [1000], int z5co6iNmJI1, int len) {
    if (z5co6iNmJI1 > len / 2)
        return;
    else {
        for (int VaErGOg = 0;
        VaErGOg +2 * z5co6iNmJI1 - 1 < len; VaErGOg = VaErGOg +1) {
            int aaIKAmSDYo;
            aaIKAmSDYo = 1;
            {
                int DNS0Z6A9 = z5co6iNmJI1;
                while (0 < DNS0Z6A9) {
                    if (at4hjcqK[VaErGOg +z5co6iNmJI1 - DNS0Z6A9] != at4hjcqK[VaErGOg +DNS0Z6A9+z5co6iNmJI1 - 1]) {
                        aaIKAmSDYo = 0;
                        break;
                    }
                    DNS0Z6A9 = DNS0Z6A9 -1;
                };
            }
            if (aaIKAmSDYo) {
                for (int m = VaErGOg;
                m <= VaErGOg +2 * z5co6iNmJI1 - 1; m++)
                    cout << at4hjcqK[m];
                cout << endl;
            };
        }
        sMdjF4alPf0 (at4hjcqK, z5co6iNmJI1 + 1, len);
    };
}

