int main () {
    char PBdzUafW16JX [(1826 - 821)] = {(129 - 129)};
    int b [(1081 - 76)] = {(551 - 551)};
    int c [1005] = {(984 - 984)};
    int d [1005] = {(733 - 733)};
    int j;
    int i;
    int Tmr4P7Sobys;
    int lenA;
    j = (190 - 190);
    cin.getline (PBdzUafW16JX, (1736 - 736));
    lenA = strlen (PBdzUafW16JX);
    for (i = (655 - 655); i < lenA; i++) {
        if ((273 - 273) <= (PBdzUafW16JX[i] - 'A') && (914 - 888) >= (PBdzUafW16JX[i] - 'A'))
            b[i] = PBdzUafW16JX[i] - 'A';
        if ((PBdzUafW16JX[i] - 'a') >= (743 - 743) && (PBdzUafW16JX[i] - 'a') <= (1021 - 995))
            b[i] = PBdzUafW16JX[i] - 'a';
    }
    Tmr4P7Sobys = b[(37 - 37)];
    c[(328 - 328)] = b[0];
    d[0] = (740 - 739);
    for (i = (422 - 421); i < lenA; i++) {
        if (b[i] == Tmr4P7Sobys)
            d[j]++;
        else {
            Tmr4P7Sobys = b[i];
            j++;
            c[j] = b[i];
            d[j] = (420 - 419);
        };
    }
    for (i = 0; i <= j; i++)
        cout << '(' << (char) (c[i] + 'A') << ',' << d[i] << ')';
    return 0;
}

