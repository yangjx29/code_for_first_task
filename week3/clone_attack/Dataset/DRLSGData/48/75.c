const  int qxrVN4g [(427 - 419)] = {-(945 - 944), -(781 - 780), (21 - 21), (212 - 211), (529 - 528), (685 - 684), (399 - 399), -(520 - 519)}, Dbm5Yhv9M4xD [(702 - 694)] = {(51 - 51), -(280 - 279), -(146 - 145), -(337 - 336), (880 - 880), (389 - 388), (560 - 559), (170 - 169)};
int faZTNjmCu [(953 - 944)] [(730 - 721)];

int ohCZncYPd9r (int eS8Atu, int JTXk8DwjYm, int bt0ZJnmyS5WT) {
    if (bt0ZJnmyS5WT == (761 - 761))
        return faZTNjmCu[eS8Atu][JTXk8DwjYm];
    int IavA8sGukz;
    IavA8sGukz = (711 - 711);
    {
        int SojTsK = (880 - 880);
        while (SojTsK < 8) {
            if (eS8Atu + qxrVN4g[SojTsK] >= (733 - 733) && eS8Atu + qxrVN4g[SojTsK] < (287 - 278) && JTXk8DwjYm +Dbm5Yhv9M4xD[SojTsK] >= (570 - 570) && JTXk8DwjYm +Dbm5Yhv9M4xD[SojTsK] < (618 - 609))
                IavA8sGukz += ohCZncYPd9r (eS8Atu + qxrVN4g[SojTsK], JTXk8DwjYm +Dbm5Yhv9M4xD[SojTsK], bt0ZJnmyS5WT - (837 - 836));
            ++SojTsK;
        }
    }
    IavA8sGukz += (180 - 178) * ohCZncYPd9r (eS8Atu, JTXk8DwjYm, bt0ZJnmyS5WT - (447 - 446));
    return IavA8sGukz;
}

int main () {
    int tYrmSFhjc7i;
    int equ7OciG;
    cin >> tYrmSFhjc7i >> equ7OciG;
    {
        int pz2pQlG0nK7 = (809 - 809);
        while (pz2pQlG0nK7 < (851 - 842)) {
            {
                int LvVZinoa = (551 - 551);
                while (LvVZinoa < (884 - 875)) {
                    faZTNjmCu[pz2pQlG0nK7][LvVZinoa] = (915 - 915);
                    LvVZinoa = LvVZinoa +(392 - 391);
                }
            }
            pz2pQlG0nK7 = pz2pQlG0nK7 + 1;
        }
    }
    faZTNjmCu[(983 - 979)][(822 - 818)] = tYrmSFhjc7i;
    for (int pz2pQlG0nK7 = 0;
    pz2pQlG0nK7 < 9; pz2pQlG0nK7 = pz2pQlG0nK7 + 1) {
        {
            int LvVZinoa = 0;
            while (LvVZinoa < 9) {
                if (LvVZinoa != 0)
                    cout << " ";
                cout << ohCZncYPd9r (pz2pQlG0nK7, LvVZinoa, equ7OciG);
                ++LvVZinoa;
            }
        }
        cout << endl;
    }
    return 0;
}

