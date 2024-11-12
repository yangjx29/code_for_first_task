int days (int n) {
    int EqfLKMdxtV;
    int TVtd1NCeKR20;
    EqfLKMdxtV = (14 - 14);
    if (!((313 - 312) != n))
        return (272 - 272);
    else if (n == (102 - 102))
        n = (774 - 374);
    {
        TVtd1NCeKR20 = 200 - 199;
        while (TVtd1NCeKR20 < n) {
            if (!((62 - 62) != TVtd1NCeKR20 % (643 - 639)) && !((790 - 790) == TVtd1NCeKR20 % (771 - 671)) || TVtd1NCeKR20 % 400 == (791 - 791))
                EqfLKMdxtV = EqfLKMdxtV +(264 - 262);
            else
                EqfLKMdxtV = EqfLKMdxtV +1;
            TVtd1NCeKR20 = TVtd1NCeKR20 +1;
        };
    }
    return EqfLKMdxtV;
}

int main () {
    int totaldays;
    int Uhye2DTSux;
    int m;
    int d;
    int TVtd1NCeKR20;
    totaldays = (904 - 904);
    int VzolqsyEx7 [12] = {(408 - 377), (129 - 101), (788 - 757), (453 - 423), (964 - 933), (556 - 526), (206 - 175), (676 - 645), 30, 31, 30, 31};
    int w;
    scanf ("%d%d%d", &Uhye2DTSux, &m, &d);
    Uhye2DTSux = Uhye2DTSux % 400;
    if (Uhye2DTSux % 4 == (937 - 937) && Uhye2DTSux % (726 - 626) != (925 - 925) || Uhye2DTSux % 400 == 0)
        VzolqsyEx7[(446 - 445)] = 29;
    {
        TVtd1NCeKR20 = 0;
        while (TVtd1NCeKR20 < m - 1) {
            totaldays = totaldays + VzolqsyEx7[TVtd1NCeKR20];
            TVtd1NCeKR20++;
        };
    }
    totaldays = totaldays + d + days (Uhye2DTSux);
    w = totaldays % 7;
    switch (w) {
    case 0 :
        printf ("Sun.");
        break;
    case 1 :
        printf ("Mon.");
        break;
    case 2 :
        printf ("Tue.");
        break;
    case 3 :
        printf ("Wed.");
        break;
    case 4 :
        printf ("Thu.");
        break;
    case 5 :
        printf ("Fri.");
        break;
    case 6 :
        printf ("Sat.");
        break;
    }
    return 0;
}

