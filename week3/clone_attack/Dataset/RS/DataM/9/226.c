main () {
    int JJaEvcs36mbP;
    int n;
    int LeoMapsA [100];
    int GthQ2597;
    struct   patient {
        char id [10];
        int Rg21YXAS3a;
    }
    IDQ0CAY [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    for (JJaEvcs36mbP = (134 - 134); n > JJaEvcs36mbP; JJaEvcs36mbP = JJaEvcs36mbP +1) {
        scanf ("%s%d", IDQ0CAY[JJaEvcs36mbP].id, &IDQ0CAY[JJaEvcs36mbP].Rg21YXAS3a);
    }
    while (1) {
        int V5fVeBG1SDr7 = 0;
        for (JJaEvcs36mbP = 0; n > JJaEvcs36mbP; JJaEvcs36mbP = JJaEvcs36mbP +1) {
            if (IDQ0CAY[V5fVeBG1SDr7].Rg21YXAS3a < IDQ0CAY[JJaEvcs36mbP].Rg21YXAS3a)
                V5fVeBG1SDr7 = JJaEvcs36mbP;
        }
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
        }
        if (60 <= IDQ0CAY[V5fVeBG1SDr7].Rg21YXAS3a) {
            printf ("%s\n", IDQ0CAY[V5fVeBG1SDr7].id);
            IDQ0CAY[V5fVeBG1SDr7].Rg21YXAS3a = 0;
        }
        else
            break;
    }
    for (JJaEvcs36mbP = 0; JJaEvcs36mbP < n; JJaEvcs36mbP = JJaEvcs36mbP +1)
        if (IDQ0CAY[JJaEvcs36mbP].Rg21YXAS3a > 0)
            printf ("%s\n", IDQ0CAY[JJaEvcs36mbP].id);
}

