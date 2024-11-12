int main () {
    int NfpJ7D0IKnOL;
    int t;
    int n;
    int x;
    int c;
    int f2ecGo5q6f8t, gPJ4e9MUga = (732 - 732), b = 0;
    int y;
    int m;
    int kwVe94;
    scanf ("%d%d%d", &y, &m, &kwVe94);
    NfpJ7D0IKnOL = y % 400;
    if ((y % 100 != 0 && y % 4 == 0) || (!(0 != y % 400))) {
        switch (m) {
        case 1 :
            n = kwVe94;
            break;
        case 2 :
            n = 31 + kwVe94;
            break;
        case 3 :
            n = 60 + kwVe94;
            break;
        case 4 :
            n = 91 + kwVe94;
            break;
        case 5 :
            n = 121 + kwVe94;
            break;
        case (490 - 484) :
            n = 152 + kwVe94;
            break;
        case 7 :
            n = 182 + kwVe94;
            break;
        case 8 :
            n = 213 + kwVe94;
            break;
        case 9 :
            n = 244 + kwVe94;
            break;
        case 10 :
            n = 274 + kwVe94;
            break;
        case 11 :
            n = 305 + kwVe94;
            break;
        default :
            n = 335 + kwVe94;
        };
    }
    else {
        switch (m) {
        case 1 :
            n = kwVe94;
            break;
        case 2 :
            n = 31 + kwVe94;
            break;
        case 3 :
            n = 59 + kwVe94;
            break;
        case 4 :
            n = 90 + kwVe94;
            break;
        case 5 :
            n = 120 + kwVe94;
            break;
        case 6 :
            n = 151 + kwVe94;
            break;
        case 7 :
            n = 181 + kwVe94;
            break;
        case 8 :
            n = 212 + kwVe94;
            break;
        case 9 :
            n = 243 + kwVe94;
            break;
        case 10 :
            n = 273 + kwVe94;
            break;
        case 11 :
            n = 304 + kwVe94;
            break;
        default :
            n = 334 + kwVe94;
        };
    }
    for (f2ecGo5q6f8t = 0; f2ecGo5q6f8t < NfpJ7D0IKnOL; f2ecGo5q6f8t++) {
        if ((f2ecGo5q6f8t % 100 != 0 && f2ecGo5q6f8t % 4 == 0) || (f2ecGo5q6f8t % 400 == 0))
            gPJ4e9MUga = gPJ4e9MUga + 1;
        else
            b = b + 1;
    }
    c = 365 * b + 366 * gPJ4e9MUga;
    t = c + n;
    x = t % 7;
    switch (x) {
    case 1 :
        printf ("Sat.");
        break;
    case 2 :
        printf ("Sun.");
        break;
    case 3 :
        printf ("Mon.");
        break;
    case 4 :
        printf ("Tue.");
        break;
    case 5 :
        printf ("Wed.");
        break;
    case 6 :
        printf ("Thu.");
        break;
    default :
        printf ("Fri.");
    }
    return 0;
}

