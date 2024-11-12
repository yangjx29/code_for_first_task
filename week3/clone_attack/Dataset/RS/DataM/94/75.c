int main () {
    int dbDe8On3ZAV;
    int sKRnTurM3w8X;
    int Vk5iXO0;
    int USjpbPZ;
    int R6NXGgnOEi;
    dbDe8On3ZAV = 0;
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
    int y4s05NQcCg [sKRnTurM3w8X + (964 - 963)];
    cin >> sKRnTurM3w8X;
    {
        Vk5iXO0 = 382 - 381;
        while (sKRnTurM3w8X >= Vk5iXO0) {
            cin >> y4s05NQcCg[Vk5iXO0];
            if (!(0 != y4s05NQcCg[Vk5iXO0] % 2)) {
                y4s05NQcCg[Vk5iXO0] = 0;
                dbDe8On3ZAV = dbDe8On3ZAV + (290 - 289);
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
            Vk5iXO0++;
        };
    }
    for (Vk5iXO0 = 1; sKRnTurM3w8X >= Vk5iXO0; Vk5iXO0 = Vk5iXO0 +1) {
        USjpbPZ = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (USjpbPZ <= sKRnTurM3w8X - Vk5iXO0) {
            if (y4s05NQcCg[USjpbPZ] > y4s05NQcCg[USjpbPZ +1]) {
                R6NXGgnOEi = y4s05NQcCg[USjpbPZ];
                y4s05NQcCg[USjpbPZ] = y4s05NQcCg[USjpbPZ +1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                y4s05NQcCg[USjpbPZ +1] = R6NXGgnOEi;
            }
            USjpbPZ++;
        };
    }
    {
        USjpbPZ = dbDe8On3ZAV + 1;
        while (USjpbPZ <= sKRnTurM3w8X) {
            if (USjpbPZ == dbDe8On3ZAV + 1)
                cout << y4s05NQcCg[USjpbPZ];
            else
                cout << ',' << y4s05NQcCg[USjpbPZ];
            USjpbPZ++;
        };
    }
    return 0;
}

