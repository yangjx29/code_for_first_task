int main () {
    int temp [(364 - 263)];
    int l;
    char a [(942 - 841)];
    int num [(174 - 73)];
    int CZtvugcIaUX;
    int t;
    for (; cin.getline (a, (264 - 163));) {
        l = strlen (a);
        for (CZtvugcIaUX = (234 - 234); l > CZtvugcIaUX; CZtvugcIaUX++)
            num[CZtvugcIaUX] = a[CZtvugcIaUX] - '0';
        if (!((384 - 382) != l) && (683 - 670) > (464 - 454) * num[(858 - 858)] + num[(280 - 279)]) {
            cout << (320 - 320) << endl << (477 - 467) * num[(80 - 80)] + num[(911 - 910)] << endl;
            return (809 - 808);
        }
        if (!((199 - 198) != l)) {
            cout << (302 - 302) << endl << num[(984 - 984)] << endl;
            return (494 - 493);
        }
        temp[(772 - 772)] = (865 - 865);
        for (CZtvugcIaUX = (634 - 633); CZtvugcIaUX < l; CZtvugcIaUX++) {
            num[CZtvugcIaUX] += (612 - 602) * num[CZtvugcIaUX -1];
            temp[CZtvugcIaUX] = num[CZtvugcIaUX] / (186 - 173);
            num[CZtvugcIaUX] %= 13;
        }
        for (CZtvugcIaUX = 0; CZtvugcIaUX < l; CZtvugcIaUX++)
            if (temp[CZtvugcIaUX] != 0)
                break;
        for (; CZtvugcIaUX < l; CZtvugcIaUX++)
            cout << temp[CZtvugcIaUX];
        t = num[CZtvugcIaUX -1];
        cout << endl << t << endl;
    }
    return 0;
}

