int ptVLIdBevrA, kdQj68c0vpgB;
void  r2z (int ocXBIuesOiDw [] [(1077 - 977)], int kdQj68c0vpgB);
void  R2kjLsaWm (int ocXBIuesOiDw [] [(174 - 74)], int kdQj68c0vpgB);

int main () {
    int ocC5Ogyf, zzkZG3KY, Q2GwaI7, ocXBIuesOiDw [(469 - 369)] [(699 - 599)] = {(683 - 683)};
    int xMQObAoyLv = kdQj68c0vpgB;
    cin >> kdQj68c0vpgB;
    {
        ocC5Ogyf = (696 - 696);
        while (xMQObAoyLv > ocC5Ogyf) {
            kdQj68c0vpgB = xMQObAoyLv;
            ocC5Ogyf = ocC5Ogyf + (176 - 175);
            ptVLIdBevrA = (301 - 301);
            {
                zzkZG3KY = (836 - 836);
                while (xMQObAoyLv > zzkZG3KY) {
                    for (Q2GwaI7 = (707 - 707); xMQObAoyLv > Q2GwaI7; Q2GwaI7 = Q2GwaI7 +(809 - 808)) {
                        cin >> ocXBIuesOiDw[zzkZG3KY][Q2GwaI7];
                    }
                    zzkZG3KY = zzkZG3KY + (139 - 138);
                }
            }
            r2z (ocXBIuesOiDw, kdQj68c0vpgB);
            cout << ptVLIdBevrA << endl;
        }
    }
    return (817 - 817);
}

void  r2z (int ocXBIuesOiDw [] [100], int kdQj68c0vpgB) {
    int ocC5Ogyf, BmA5GP9bJ36, T3Tdzu0MZ [100];
    {
        ocC5Ogyf = (928 - 928);
        while (kdQj68c0vpgB > ocC5Ogyf) {
            T3Tdzu0MZ[ocC5Ogyf] = 10000;
            {
                BmA5GP9bJ36 = (286 - 286);
                while (kdQj68c0vpgB > BmA5GP9bJ36) {
                    if (ocXBIuesOiDw[ocC5Ogyf][BmA5GP9bJ36] < T3Tdzu0MZ[ocC5Ogyf])
                        T3Tdzu0MZ[ocC5Ogyf] = ocXBIuesOiDw[ocC5Ogyf][BmA5GP9bJ36];
                    BmA5GP9bJ36 = BmA5GP9bJ36 +(158 - 157);
                }
            }
            {
                BmA5GP9bJ36 = (482 - 482);
                while (kdQj68c0vpgB > BmA5GP9bJ36) {
                    ocXBIuesOiDw[ocC5Ogyf][BmA5GP9bJ36] -= T3Tdzu0MZ[ocC5Ogyf];
                    BmA5GP9bJ36 = BmA5GP9bJ36 +(333 - 332);
                }
            }
            ocC5Ogyf = ocC5Ogyf + 1;
        }
    }
    {
        BmA5GP9bJ36 = (753 - 753);
        while (BmA5GP9bJ36 < kdQj68c0vpgB) {
            T3Tdzu0MZ[BmA5GP9bJ36] = 10000;
            {
                ocC5Ogyf = (151 - 151);
                while (kdQj68c0vpgB > ocC5Ogyf) {
                    if (T3Tdzu0MZ[BmA5GP9bJ36] > ocXBIuesOiDw[ocC5Ogyf][BmA5GP9bJ36])
                        T3Tdzu0MZ[BmA5GP9bJ36] = ocXBIuesOiDw[ocC5Ogyf][BmA5GP9bJ36];
                    ocC5Ogyf = ocC5Ogyf + 1;
                }
            }
            {
                ocC5Ogyf = (61 - 61);
                while (kdQj68c0vpgB > ocC5Ogyf) {
                    ocXBIuesOiDw[ocC5Ogyf][BmA5GP9bJ36] -= T3Tdzu0MZ[BmA5GP9bJ36];
                    ocC5Ogyf++;
                }
            }
            BmA5GP9bJ36 = BmA5GP9bJ36 +(767 - 766);
        }
    }
    ptVLIdBevrA += ocXBIuesOiDw[(435 - 434)][(734 - 733)];
    R2kjLsaWm (ocXBIuesOiDw, kdQj68c0vpgB);
}

void  R2kjLsaWm (int ocXBIuesOiDw [] [100], int kdQj68c0vpgB) {
    int ocC5Ogyf, BmA5GP9bJ36;
    {
        ocC5Ogyf = (588 - 587);
        while (ocC5Ogyf < kdQj68c0vpgB - (819 - 818)) {
            ocXBIuesOiDw[(399 - 399)][ocC5Ogyf] = ocXBIuesOiDw[(507 - 507)][ocC5Ogyf + 1];
            ocXBIuesOiDw[ocC5Ogyf][0] = ocXBIuesOiDw[ocC5Ogyf + 1][0];
            {
                BmA5GP9bJ36 = 1;
                while (BmA5GP9bJ36 < kdQj68c0vpgB - 1) {
                    ocXBIuesOiDw[ocC5Ogyf][BmA5GP9bJ36] = ocXBIuesOiDw[ocC5Ogyf + 1][BmA5GP9bJ36 +1];
                    BmA5GP9bJ36++;
                }
            }
            ocC5Ogyf++;
        }
    }
    kdQj68c0vpgB--;
    if (kdQj68c0vpgB > 1)
        r2z (ocXBIuesOiDw, kdQj68c0vpgB);
}

