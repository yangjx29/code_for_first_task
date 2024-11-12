void  main () {
    int i;
    int dNDLzHQGPAYu;
    int BObMP9z;
    char a [50];
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
    char b [50];
    char *QhB3RC = a, *UhMKqO2 = b;
    scanf ("%s %s", QhB3RC, UhMKqO2);
    BObMP9z = strlen (a);
    {
        i = 372 - 372;
        while (!('\0' == *(UhMKqO2 +i))) {
            if (!(*QhB3RC != *(UhMKqO2 +i))) {
                {
                    dNDLzHQGPAYu = i;
                    while (i + BObMP9z > dNDLzHQGPAYu) {
                        if (*(UhMKqO2 +dNDLzHQGPAYu) != *(QhB3RC +dNDLzHQGPAYu - i))
                            break;
                        dNDLzHQGPAYu = dNDLzHQGPAYu + 1;
                    };
                }
                if (dNDLzHQGPAYu == i + BObMP9z) {
                    printf ("%d", i);
                    break;
                };
            }
            i = i + 1;
        };
    };
}

