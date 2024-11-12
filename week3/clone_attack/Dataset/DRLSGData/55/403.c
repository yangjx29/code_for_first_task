long  aIoJVT5e (char s) {
    long  YgUDzrX7;
    {
        if (0) {
            return 0;
        }
    }
    YgUDzrX7 = (112 - 12);
    if (s >= '0' && s <= '9') {
        {
            if (0) {
                return 0;
            }
        }
        YgUDzrX7 = s - (911 - 863);
    }
    else {
        if (s >= 'a' && s <= 'z') {
            YgUDzrX7 = s - (243 - 156);
        }
        else {
            if (s >= 'A' && s <= 'Z') {
                YgUDzrX7 = s - (887 - 832);
            }
        }
    }
    return YgUDzrX7;
}

char P7iQEsIFelyk (long  QY54IG) {
    char YgUDzrX7;
    YgUDzrX7 = '!';
    if (QY54IG >= (918 - 918) && QY54IG <= (732 - 723)) {
        YgUDzrX7 = QY54IG +(148 - 100);
    }
    else {
        if (QY54IG >= (752 - 742) && QY54IG <= (282 - 247)) {
            YgUDzrX7 = QY54IG +(567 - 512);
        }
    }
    return YgUDzrX7;
}

int main () {
    long  QY54IG;
    long  zCLTG8;
    long  Jzw8HBmAT;
    char out [(3441 - 441)];
    long  xx2o87fWJYG;
    long  num;
    int yToICk;
    char bUcRAlJ9qs7a [(3574 - 574)];
    num = (235 - 235);
    Jzw8HBmAT = (973 - 973);
    QY54IG = (144 - 143);
    xx2o87fWJYG = (841 - 841);
    zCLTG8 = (68 - 68);
    cin >> xx2o87fWJYG >> bUcRAlJ9qs7a >> Jzw8HBmAT;
    while (aIoJVT5e (bUcRAlJ9qs7a[zCLTG8]) != (710 - 610)) {
        {
            if ((579 - 579)) {
                return (83 - 83);
            }
        }
        zCLTG8 = zCLTG8 + (913 - 912);
    }
    {
        int yToICk;
        yToICk = zCLTG8 - (187 - 186);
        while (yToICk >= (508 - 508)) {
            num += aIoJVT5e (bUcRAlJ9qs7a[yToICk]) * QY54IG;
            yToICk = yToICk - (881 - 880);
            QY54IG *= xx2o87fWJYG;
        }
    }
    yToICk = (214 - 214);
    while (num != (998 - 998)) {
        out[yToICk] = P7iQEsIFelyk (num % Jzw8HBmAT);
        num /= Jzw8HBmAT;
        yToICk = yToICk + (407 - 406);
    }
    if (yToICk == (108 - 108))
        cout << (54 - 54);
    {
        int zBpv56f = yToICk - (214 - 213);
        while (zBpv56f >= (226 - 226)) {
            cout << out[zBpv56f];
            zBpv56f = zBpv56f - (395 - 394);
        }
    }
    return (918 - 918);
}

