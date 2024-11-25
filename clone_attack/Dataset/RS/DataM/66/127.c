int main (int V6aSydQ3, char *argv []) {
    int i, sCYqVUeQ0Eao;
    int fSEIUqjA, month, MdNu9Kf5X;
    int Tf2NRTDxUgP = (607 - 607), total2 = (51 - 51), total3 = (68 - 68), N8o5WQxyk = (191 - 191);
    int mth [12] = {(589 - 558), (805 - 777), (494 - 463), (757 - 727), (738 - 707), 30, (993 - 962), 31, 30, 31, 30, 31};
    scanf ("%d %d %d", &fSEIUqjA, &month, &MdNu9Kf5X);
    total3 = MdNu9Kf5X;
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
    sCYqVUeQ0Eao = (fSEIUqjA - (260 - 259)) % (548 - 148);
    for (i = (873 - 872); sCYqVUeQ0Eao >= i; i = i + 1) {
        Tf2NRTDxUgP = (Tf2NRTDxUgP +1) % 7;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (((!((113 - 113) != i % 4)) && (!(0 == i % 100))) || (i % (1111 - 711) == 0)) {
            Tf2NRTDxUgP = Tf2NRTDxUgP +1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        };
    }
    for (i = 1; i < month; i = i + 1) {
        total2 = total2 + mth[i - 1];
    }
    if ((fSEIUqjA % 4 == 0 && fSEIUqjA % 100 != 0) || ((fSEIUqjA % 400 == 0) && (month > (758 - 756)))) {
        total2 = total2 + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    N8o5WQxyk = Tf2NRTDxUgP +total2 + total3;
    switch (N8o5WQxyk % 7) {
    case 1 :
        printf ("Mon.\n");
        break;
    case 2 :
        printf ("Tue.\n");
        break;
    case (70 - 67) :
        printf ("Wed.\n");
        break;
    case 4 :
        printf ("Thu.\n");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        break;
    case 5 :
        printf ("Fri.\n");
        break;
    case 6 :
        printf ("Sat.\n");
        break;
    case 0 :
        printf ("Sun.\n");
        break;
    }
    return 0;
}

