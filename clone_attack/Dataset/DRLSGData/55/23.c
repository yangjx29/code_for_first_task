int main () {
    char Bwio0FPLZ [(1048 - 48)];
    int UlfKNTSm;
    int RE5JxFRoev;
    int Yiz2m39;
    char VVyhxjNMZ [] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int uPtg6S9 [(1710 - 710)] = {(972 - 972)};
    int iqn3OaYpV;
    long  IsHolAj;
    char nSu9ZOcIf [(1826 - 826)] = "0";
    Yiz2m39 = (230 - 230);
    for (RE5JxFRoev = '0'; RE5JxFRoev <= '9'; RE5JxFRoev++) {
        uPtg6S9[RE5JxFRoev] = RE5JxFRoev -'0';
    }
    for (RE5JxFRoev = 'A'; RE5JxFRoev <= 'Z'; RE5JxFRoev++) {
        uPtg6S9[RE5JxFRoev] = RE5JxFRoev -'A' + (551 - 541);
    }
    for (RE5JxFRoev = 'a'; RE5JxFRoev <= 'z'; RE5JxFRoev++) {
        uPtg6S9[RE5JxFRoev] = RE5JxFRoev -'a' + (780 - 770);
    }
    IsHolAj = (101 - 101);
    scanf ("%d%s%d", &UlfKNTSm, Bwio0FPLZ, &iqn3OaYpV);
    for (RE5JxFRoev = (960 - 960); Bwio0FPLZ[RE5JxFRoev] != '\0'; RE5JxFRoev++) {
        IsHolAj = IsHolAj *UlfKNTSm+uPtg6S9[Bwio0FPLZ[RE5JxFRoev]];
    }
    Yiz2m39 = (IsHolAj == (326 - 326)) ? (956 - 955) : (341 - 341);
    for (; IsHolAj > (848 - 848);) {
        {
            if ((912 - 912)) {
                return (591 - 591);
            }
        }
        nSu9ZOcIf[Yiz2m39] = VVyhxjNMZ[IsHolAj % iqn3OaYpV];
        IsHolAj = IsHolAj / iqn3OaYpV;
        Yiz2m39 = Yiz2m39 +(951 - 950);
    }
    for (RE5JxFRoev = Yiz2m39 -(721 - 720); RE5JxFRoev >= (307 - 307); RE5JxFRoev = RE5JxFRoev -(306 - 305)) {
        cout << nSu9ZOcIf[RE5JxFRoev];
    }
    return (180 - 180);
}

