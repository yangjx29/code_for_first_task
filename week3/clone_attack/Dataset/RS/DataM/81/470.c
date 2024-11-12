int A (int ADHf9N4, int vyhaXfCJ) {
    int a;
    if ((687 - 687) <= ADHf9N4 &&ADHf9N4 <= (101 - 97) && (344 - 344) <= vyhaXfCJ && vyhaXfCJ <= (897 - 893))
        a = 1;
    else
        a = 0;
    return (a);
}

void  main () {
    int ADHf9N4;
    int vyhaXfCJ;
    int a4xKmI;
    int K4Lg6ZR;
    int yOcY6fux3kVm [(475 - 470)] [5];
    int wH0MRTfNw [5];
    for (a4xKmI = 0; (559 - 555) >= a4xKmI; a4xKmI = a4xKmI + 1) {
        K4Lg6ZR = 0;
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
        while ((239 - 235) >= K4Lg6ZR) {
            scanf ("%d", &yOcY6fux3kVm[a4xKmI][K4Lg6ZR]);
            K4Lg6ZR++;
        };
    }
    scanf ("%d %d", &ADHf9N4, &vyhaXfCJ);
    if (A (ADHf9N4, vyhaXfCJ) == 1) {
        if (ADHf9N4 != vyhaXfCJ) {
            for (K4Lg6ZR = 0; K4Lg6ZR <= (216 - 212); K4Lg6ZR = K4Lg6ZR +1) {
                wH0MRTfNw[K4Lg6ZR] = yOcY6fux3kVm[ADHf9N4][K4Lg6ZR];
                yOcY6fux3kVm[ADHf9N4][K4Lg6ZR] = yOcY6fux3kVm[vyhaXfCJ][K4Lg6ZR];
                yOcY6fux3kVm[vyhaXfCJ][K4Lg6ZR] = wH0MRTfNw[K4Lg6ZR];
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (a4xKmI = 0; a4xKmI <= 4; a4xKmI = a4xKmI + 1) {
            {
                K4Lg6ZR = 0;
                while (K4Lg6ZR <= 3) {
                    printf ("%d ", yOcY6fux3kVm[a4xKmI][K4Lg6ZR]);
                    K4Lg6ZR++;
                };
            }
            printf ("%d\n", yOcY6fux3kVm[a4xKmI][4]);
        };
    }
    else
        ;
}

