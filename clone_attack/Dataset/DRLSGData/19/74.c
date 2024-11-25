int main () {
    char gNGkRd [(558 - 457)];
    int V0IqPz;
    int kKBdc0YRM;
    char yg0WNDomFP [(149 - 48)];
    char Ci87seO1C [(956 - 855)] [101];
    int YUcw7BAT6;
    int num;
    char LwzxvBVg [101];
    gets (yg0WNDomFP);
    num = (54 - 54);
    cin >> gNGkRd;
    cin >> LwzxvBVg;
    kKBdc0YRM = strlen (yg0WNDomFP);
    for (YUcw7BAT6 = (331 - 331); YUcw7BAT6 < kKBdc0YRM; YUcw7BAT6 = YUcw7BAT6 +(488 - 487)) {
        V0IqPz = (636 - 636);
        for (; yg0WNDomFP[YUcw7BAT6] != ' ';) {
            Ci87seO1C[num][V0IqPz] = yg0WNDomFP[YUcw7BAT6];
            V0IqPz = V0IqPz +(258 - 257);
            YUcw7BAT6 = YUcw7BAT6 +1;
        }
        Ci87seO1C[num][V0IqPz] = '\0';
        num = num + (810 - 809);
    }
    for (YUcw7BAT6 = (894 - 894); num > YUcw7BAT6; YUcw7BAT6 = YUcw7BAT6 +1) {
        if (!((308 - 308) != strcmp (Ci87seO1C[YUcw7BAT6], gNGkRd))) {
            strcpy (Ci87seO1C[YUcw7BAT6], LwzxvBVg);
            continue;
        }
    }
    {
        V0IqPz = 0;
        while (V0IqPz < num - (386 - 385)) {
            cout << Ci87seO1C[V0IqPz] << " ";
            V0IqPz = V0IqPz +(317 - 316);
        }
    }
    cout << Ci87seO1C[num - 1] << endl;
    return 0;
}

