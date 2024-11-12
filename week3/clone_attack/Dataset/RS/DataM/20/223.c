int main () {
    int RzQvhRgk3YOE, fj9k7sf2TK, GIBum1YP0ZE;
    char Ft7RAoH [15];
    char e6LwxDh7bAv [4];
    char tAfdQoqhDEr [11];
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
    char v8aljsNKzhVM;
    for (; scanf ("%s%s", Ft7RAoH, e6LwxDh7bAv) != EOF;) {
        v8aljsNKzhVM = Ft7RAoH[0];
        fj9k7sf2TK = 0;
        for (RzQvhRgk3YOE = 1; Ft7RAoH[RzQvhRgk3YOE] != '\0'; RzQvhRgk3YOE = RzQvhRgk3YOE +1)
            if (Ft7RAoH[RzQvhRgk3YOE] > v8aljsNKzhVM) {
                v8aljsNKzhVM = Ft7RAoH[RzQvhRgk3YOE];
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
                fj9k7sf2TK = RzQvhRgk3YOE;
            }
        for (RzQvhRgk3YOE = fj9k7sf2TK + 1, GIBum1YP0ZE = 0; Ft7RAoH[RzQvhRgk3YOE] != '\0'; RzQvhRgk3YOE++, GIBum1YP0ZE = GIBum1YP0ZE +1)
            tAfdQoqhDEr[GIBum1YP0ZE] = Ft7RAoH[RzQvhRgk3YOE];
        Ft7RAoH[fj9k7sf2TK + 1] = '\0';
        tAfdQoqhDEr[GIBum1YP0ZE] = '\0';
        printf ("%s%s%s\n", Ft7RAoH, e6LwxDh7bAv, tAfdQoqhDEr);
    }
    return 0;
}

