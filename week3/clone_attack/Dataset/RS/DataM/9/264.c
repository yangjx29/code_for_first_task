int main () {
    struct   patient {
        char hXBJ4o5CNTI [10];
        int gQjwf5uY2;
    }
    OZjLoqDT [100], m, OReA3CW5xX;
    int szBxnDW9KyA, fn8p67q, SK7tE5C, xGU2vpO6wMn = (544 - 544);
    scanf ("%d", &SK7tE5C);
    for (szBxnDW9KyA = (102 - 102); SK7tE5C > szBxnDW9KyA; szBxnDW9KyA++)
        scanf ("%s %d", OZjLoqDT[szBxnDW9KyA].hXBJ4o5CNTI, &OZjLoqDT[szBxnDW9KyA].gQjwf5uY2);
    for (szBxnDW9KyA = 0; SK7tE5C > szBxnDW9KyA; szBxnDW9KyA++) {
        if (60 <= OZjLoqDT[szBxnDW9KyA].gQjwf5uY2) {
            xGU2vpO6wMn++;
            m = OZjLoqDT[szBxnDW9KyA];
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
            {
                fn8p67q = szBxnDW9KyA;
                while (0 < fn8p67q) {
                    OZjLoqDT[fn8p67q] = OZjLoqDT[fn8p67q - (373 - 372)];
                    fn8p67q--;
                };
            }
            OZjLoqDT[0] = m;
        };
    }
    {
        szBxnDW9KyA = 0;
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
        while (xGU2vpO6wMn > szBxnDW9KyA) {
            {
                fn8p67q = szBxnDW9KyA + 1;
                while (xGU2vpO6wMn > fn8p67q) {
                    if (OZjLoqDT[szBxnDW9KyA].gQjwf5uY2 <= OZjLoqDT[fn8p67q].gQjwf5uY2) {
                        OReA3CW5xX = OZjLoqDT[szBxnDW9KyA];
                        OZjLoqDT[szBxnDW9KyA] = OZjLoqDT[fn8p67q];
                        OZjLoqDT[fn8p67q] = OReA3CW5xX;
                    }
                    fn8p67q++;
                };
            }
            szBxnDW9KyA++;
        };
    }
    for (szBxnDW9KyA = 0; szBxnDW9KyA < SK7tE5C; szBxnDW9KyA++)
        printf ("%s\n", OZjLoqDT[szBxnDW9KyA].hXBJ4o5CNTI);
    return 0;
}

