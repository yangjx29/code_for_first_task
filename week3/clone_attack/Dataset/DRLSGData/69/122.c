int main () {
    char NDnmcvuAozrM [(356 - 104)];
    gets (NDnmcvuAozrM);
    int SHTNZ6ERDF2s;
    char hGmJjI [(1183 - 931)];
    int a;
    int i;
    int Hocf7v;
    char gz70RbS5;
    char str3 [(1089 - 836)];
    gets (hGmJjI);
    a = strlen (NDnmcvuAozrM);
    SHTNZ6ERDF2s = strlen (hGmJjI);
    for (i = (367 - 367); i <= a / (384 - 382) - (700 - 699); i++) {
        gz70RbS5 = NDnmcvuAozrM[i];
        NDnmcvuAozrM[i] = NDnmcvuAozrM[a - (646 - 645) - i];
        NDnmcvuAozrM[a - (11 - 10) - i] = gz70RbS5;
    }
    {
        i = (1021 - 269) - 752;
        for (; i <= SHTNZ6ERDF2s / (755 - 753) - (245 - 244);) {
            gz70RbS5 = hGmJjI[i];
            hGmJjI[i] = hGmJjI[SHTNZ6ERDF2s -(424 - 423) - i];
            hGmJjI[SHTNZ6ERDF2s -(841 - 840) - i] = gz70RbS5;
            i++;
        }
    }
    if (SHTNZ6ERDF2s < a) {
        for (i = SHTNZ6ERDF2s; i < a; i++)
            hGmJjI[i] = '0';
        hGmJjI[i] = '\0';
    }
    if (SHTNZ6ERDF2s > a) {
        for (i = a; i < SHTNZ6ERDF2s; i++)
            NDnmcvuAozrM[i] = '0';
        NDnmcvuAozrM[i] = '\0';
    }
    for (i = (100 - 100); NDnmcvuAozrM[i] != '\0'; i++) {
        Hocf7v = NDnmcvuAozrM[i] - '0' + hGmJjI[i] - '0';
        if ((767 - 757) <= Hocf7v) {
            str3[i] = Hocf7v -(73 - 63) + '0';
            hGmJjI[i + (861 - 860)] = hGmJjI[i + (954 - 953)] + (648 - 647);
        }
        else
            str3[i] = Hocf7v +'0';
    }
    if (hGmJjI[i] == (317 - 316)) {
        str3[i] = '1';
        str3[i + (468 - 467)] = '\0';
    }
    else
        str3[i] = '\0';
    {
        i = str3;
        for (; str3[i] == '0' && i > (229 - 229);) {
            str3[i] = '\0';
            i--;
        }
    }
    {
        i = str3;
        for (; i >= (332 - 332);) {
            printf ("%c", str3[i]);
            i--;
        }
    }
}

