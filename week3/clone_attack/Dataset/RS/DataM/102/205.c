int main () {
    int Mm6CM5HOzgk, fFy8UvdH = (488 - 488), DOfkJgh8Fj3 = 0;
    char Hb9gDW5ZoKxw [(635 - 595)] [7];
    char f9UQuVsIH3;
    double  FE76hY [40];
    int UQEva5FY;
    int EaCtqQL3RBdn;
    int KFQXCP;
    int e2ZkmCDV;
    double  TbHpQDZutx;
    double  cEhzwX;
    TbHpQDZutx = (16.0 - 16.0);
    cEhzwX = 0.0;
    DOfkJgh8Fj3 = Mm6CM5HOzgk -(437 - 436);
    scanf ("%d%c", &Mm6CM5HOzgk, &f9UQuVsIH3);
    {
        int BL6EZ1Ow = 0;
        while (BL6EZ1Ow < Mm6CM5HOzgk) {
            int xeXVnD9 = strlen (Hb9gDW5ZoKxw[BL6EZ1Ow]);
            scanf ("%s", Hb9gDW5ZoKxw[BL6EZ1Ow]);
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
            BL6EZ1Ow++;
            if (xeXVnD9 == (469 - 465)) {
                scanf ("%lf", &FE76hY[fFy8UvdH]);
                fFy8UvdH++;
            }
            else {
                scanf ("%lf", &FE76hY[DOfkJgh8Fj3]);
                DOfkJgh8Fj3--;
            };
        };
    }
    {
        UQEva5FY = 0;
        while (UQEva5FY < fFy8UvdH - (930 - 929)) {
            {
                EaCtqQL3RBdn = UQEva5FY +1;
                while (fFy8UvdH > EaCtqQL3RBdn) {
                    if (FE76hY[EaCtqQL3RBdn] < FE76hY[UQEva5FY]) {
                        TbHpQDZutx = FE76hY[UQEva5FY];
                        FE76hY[UQEva5FY] = FE76hY[EaCtqQL3RBdn];
                        FE76hY[EaCtqQL3RBdn] = TbHpQDZutx;
                    }
                    EaCtqQL3RBdn++;
                };
            }
            UQEva5FY = UQEva5FY +1;
        };
    }
    {
        KFQXCP = DOfkJgh8Fj3 +1;
        while (KFQXCP < Mm6CM5HOzgk) {
            {
                e2ZkmCDV = UQEva5FY +1;
                while (Mm6CM5HOzgk > e2ZkmCDV) {
                    if (FE76hY[e2ZkmCDV] < FE76hY[KFQXCP]) {
                        cEhzwX = FE76hY[KFQXCP];
                        FE76hY[KFQXCP] = FE76hY[e2ZkmCDV];
                        FE76hY[e2ZkmCDV] = cEhzwX;
                    }
                    e2ZkmCDV++;
                };
            }
            KFQXCP++;
        };
    }
    printf ("%.2lf", FE76hY[0]);
    {
        int BKE3tA = 1;
        while (BKE3tA < Mm6CM5HOzgk) {
            printf (" %.2lf", FE76hY[BKE3tA]);
            BKE3tA++;
        };
    }
    return 0;
}

