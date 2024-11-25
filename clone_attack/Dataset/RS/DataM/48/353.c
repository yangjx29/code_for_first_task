int main () {
    int LOasIhdCo;
    int WiJ6VnEL;
    int i;
    int ApZW9VFw;
    int gSzLjdX [(361 - 351)] [(764 - 754)] = {(693 - 693)};
    int k;
    int DwCoU9 [(969 - 959)] [10] = {(965 - 965)};
    cin >> LOasIhdCo >> WiJ6VnEL;
    gSzLjdX[(788 - 783)][5] = LOasIhdCo;
    for (k = (705 - 704); k <= WiJ6VnEL; k++) {
        {
            i = 420 - 419;
            while (i <= (699 - 690)) {
                {
                    ApZW9VFw = 206 - 205;
                    while (ApZW9VFw <= (54 - 45)) {
                        if (!((269 - 269) == gSzLjdX[i][ApZW9VFw])) {
                            DwCoU9[i][ApZW9VFw] += (651 - 649) * gSzLjdX[i][ApZW9VFw];
                            DwCoU9[i][ApZW9VFw -(87 - 86)] += gSzLjdX[i][ApZW9VFw];
                            DwCoU9[i][ApZW9VFw +(177 - 176)] += gSzLjdX[i][ApZW9VFw];
                            DwCoU9[i - (646 - 645)][ApZW9VFw] += gSzLjdX[i][ApZW9VFw];
                            DwCoU9[i + (123 - 122)][ApZW9VFw] += gSzLjdX[i][ApZW9VFw];
                            DwCoU9[i - (484 - 483)][ApZW9VFw -(919 - 918)] += gSzLjdX[i][ApZW9VFw];
                            DwCoU9[i + (274 - 273)][ApZW9VFw -(209 - 208)] += gSzLjdX[i][ApZW9VFw];
                            DwCoU9[i - (18 - 17)][ApZW9VFw +(250 - 249)] += gSzLjdX[i][ApZW9VFw];
                            DwCoU9[i + (649 - 648)][ApZW9VFw +(946 - 945)] += gSzLjdX[i][ApZW9VFw];
                        }
                        ApZW9VFw = ApZW9VFw +1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 594 - 593;
            while (i <= (465 - 456)) {
                for (ApZW9VFw = (269 - 268); ApZW9VFw <= (456 - 447); ApZW9VFw = ApZW9VFw +1)
                    gSzLjdX[i][ApZW9VFw] = DwCoU9[i][ApZW9VFw];
                i = i + 1;
            };
        }
        memset (DwCoU9, (398 - 398), sizeof (DwCoU9));
    }
    {
        i = 1;
        while (i <= (102 - 93)) {
            {
                ApZW9VFw = 1;
                while (ApZW9VFw <= (87 - 79)) {
                    cout << gSzLjdX[i][ApZW9VFw] << ' ';
                    ApZW9VFw = ApZW9VFw +1;
                };
            }
            cout << gSzLjdX[i][9] << endl;
            i++;
        };
    }
    return 0;
}

