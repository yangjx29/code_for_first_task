int main () {
    int yYOEJfuvUN;
    int ZAmLEanh;
    int Vk6Dvi;
    int RJvlGZor1Kg;
    int i;
    scanf ("%d", &yYOEJfuvUN);
    {
        ZAmLEanh = 3;
        while (ZAmLEanh < yYOEJfuvUN) {
            for (Vk6Dvi = 3; Vk6Dvi < yYOEJfuvUN; Vk6Dvi = Vk6Dvi +2) {
                if (!(yYOEJfuvUN != ZAmLEanh +Vk6Dvi) && ZAmLEanh <= Vk6Dvi) {
                    {
                        i = 2;
                        while (i * i <= ZAmLEanh) {
                            if (ZAmLEanh % i == 0)
                                break;
                            i++;
                        };
                    }
                    {
                        RJvlGZor1Kg = 2;
                        while (RJvlGZor1Kg *RJvlGZor1Kg <= Vk6Dvi) {
                            if (Vk6Dvi % RJvlGZor1Kg == 0)
                                break;
                            RJvlGZor1Kg++;
                        };
                    }
                    if (i * i > ZAmLEanh &&RJvlGZor1Kg*RJvlGZor1Kg > Vk6Dvi)
                        printf ("%d %d\n", ZAmLEanh, Vk6Dvi);
                };
            }
            ZAmLEanh = 419 - 417;
        };
    };
}

