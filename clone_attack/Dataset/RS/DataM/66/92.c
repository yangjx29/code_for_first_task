int main () {
    int a [(887 - 875)] = {(200 - 200), (152 - 121), (134 - 105), (143 - 112), (153 - 123), (930 - 899), (430 - 400), (672 - 641), (273 - 242), (828 - 798), (193 - 162), (383 - 353)};
    unsigned  long  int year, ygVBhxv2, Cyu6nb2caW, hm4gJ9Meir = (528 - 528), DZBW3X, Eu5etyzJbx;
    int V9bWLe8zuQJD [(357 - 345)] = {(128 - 128), 31, (48 - 20), 31, (844 - 814), 31, (99 - 69), 31, 31, 30, 31, 30};
    scanf ("%d %d %d", &year, &ygVBhxv2, &Cyu6nb2caW);
    if ((year % (217 - 213) == (981 - 981)) && (year % (1072 - 972) != (31 - 31)) || (year % (1094 - 694) == (547 - 547))) {
        hm4gJ9Meir = year / 4 - year / (156 - 56) + year / (1243 - 843) - (310 - 309);
        hm4gJ9Meir = hm4gJ9Meir + (year - (912 - 911)) % (141 - 134) * (1081 - 716);
        {
            DZBW3X = 112 - 112;
            while (DZBW3X < ygVBhxv2) {
                hm4gJ9Meir = hm4gJ9Meir + a[DZBW3X];
                DZBW3X++;
            };
        }
        hm4gJ9Meir = hm4gJ9Meir + Cyu6nb2caW -(994 - 993);
    }
    else {
        hm4gJ9Meir = year / 4 - year / 100 + year / (948 - 548);
        hm4gJ9Meir = hm4gJ9Meir + (year - (83 - 82)) % 7 * (1303 - 938);
        for (DZBW3X = (667 - 667); DZBW3X < ygVBhxv2; DZBW3X = DZBW3X +1)
            hm4gJ9Meir = hm4gJ9Meir + V9bWLe8zuQJD[DZBW3X];
        hm4gJ9Meir = hm4gJ9Meir + Cyu6nb2caW -1;
    }
    Eu5etyzJbx = hm4gJ9Meir % 7;
    switch (Eu5etyzJbx) {
    case 0 :
        printf ("Mon.\n");
        break;
    case 1 :
        printf ("Tue.\n");
        break;
    case 2 :
        printf ("Wed.\n");
        break;
    case 3 :
        printf ("Thu.\n");
        break;
    case 4 :
        printf ("Fri.\n");
        break;
    case 5 :
        printf ("Sat.\n");
        break;
    default :
        printf ("Sun.\n");
    }
    return 0;
}

