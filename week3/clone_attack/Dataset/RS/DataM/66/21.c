int main () {
    int ewkCMgF0zX [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int Ft0LxoUlG;
    int year;
    int month;
    int yrBHW0vu6oyI;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    Ft0LxoUlG = 1;
    scanf ("%d %d %d", &year, &month, &yrBHW0vu6oyI);
    Ft0LxoUlG = (Ft0LxoUlG +year - 1 + (year - 1) / (930 - 926) + (year - 1) / (1121 - 721) - (year - 1) / 100) % 7;
    if (year % 400 == 0 || (!(0 == year % 100) && year % 4 == 0))
        ewkCMgF0zX[1] = 29;
    for (int CKaZUj = 0;
    CKaZUj < month - 1; CKaZUj = CKaZUj +1)
        Ft0LxoUlG = (Ft0LxoUlG +ewkCMgF0zX[CKaZUj]) % 7;
    Ft0LxoUlG = (Ft0LxoUlG -1 + yrBHW0vu6oyI) % 7;
    switch (Ft0LxoUlG) {
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
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
    case 4 :
        printf ("Thu.");
        break;
    case 5 :
        printf ("Fri.");
        break;
    case 6 :
        printf ("Sat.");
        break;
    default :
        printf ("error");
    };
}

