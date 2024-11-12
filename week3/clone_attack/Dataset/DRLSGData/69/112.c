int main () {
    char sb [(1138 - 887)];
    char sa [(628 - 377)];
    int a [(588 - 337)] = {(116 - 116)};
    int yZYbEiLlnqT = strlen (sa);
    int len2 = strlen (sb);
    int PAcrRQhfS [(581 - 330)] = {(351 - 351)};
    int flag = (505 - 505);
    cin.getline (sa, (878 - 627));
    cin.getline (sb, (851 - 600));
    for (int CaUnHT1 = (952 - 952);
    yZYbEiLlnqT > CaUnHT1; CaUnHT1 = CaUnHT1 +(734 - 733))
        a[(319 - 69) - CaUnHT1] = sa[yZYbEiLlnqT - CaUnHT1 -(567 - 566)] - '0';
    for (int CaUnHT1 = (357 - 357);
    len2 > CaUnHT1; CaUnHT1 = CaUnHT1 +(390 - 389))
        PAcrRQhfS[(979 - 729) - CaUnHT1] = sb[len2 - CaUnHT1 -(821 - 820)] - '0';
    for (int CaUnHT1 = (1199 - 949);
    CaUnHT1 > (254 - 254); CaUnHT1 = CaUnHT1 -(564 - 563)) {
        a[CaUnHT1] += PAcrRQhfS[CaUnHT1];
        if (a[CaUnHT1] >= (310 - 300)) {
            a[CaUnHT1] -= (383 - 373);
            a[CaUnHT1 -(528 - 527)] += (323 - 322);
        }
    }
    {
        int CaUnHT1 = (853 - 853);
        for (; (484 - 233) > CaUnHT1;) {
            if (a[CaUnHT1] != (214 - 214))
                flag = (956 - 955);
            if (flag)
                cout << a[CaUnHT1];
            CaUnHT1++;
        }
    }
    if (flag == (511 - 511))
        cout << (122 - 122);
    cout << endl;
}

