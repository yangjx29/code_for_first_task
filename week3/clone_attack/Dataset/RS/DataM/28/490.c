void  main () {
    char T0RDzaLMpcX [(6880 - 880)];
    int twYWGP9ydn;
    int tag;
    int ZMxyK0dz;
    int mthXKoxj74v1;
    twYWGP9ydn = (125 - 125);
    tag = (334 - 333);
    ZMxyK0dz = 1;
    gets (T0RDzaLMpcX);
    {
        mthXKoxj74v1 = 0;
        while ((6831 - 831) > mthXKoxj74v1) {
            if (!(' ' == T0RDzaLMpcX[mthXKoxj74v1]) && !('\0' == T0RDzaLMpcX[mthXKoxj74v1])) {
                tag = 1;
                twYWGP9ydn = twYWGP9ydn + 1;
            }
            else if (T0RDzaLMpcX[mthXKoxj74v1] == ' ') {
                if (!(1 != tag) && !(1 != ZMxyK0dz)) {
                    printf ("%d", twYWGP9ydn);
                    ZMxyK0dz = 0;
                }
                else {
                    if (tag == 1 && ZMxyK0dz == 0)
                        printf (",%d", twYWGP9ydn);
                    else
                        continue;
                }
                tag = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                twYWGP9ydn = 0;
            }
            else if (T0RDzaLMpcX[mthXKoxj74v1] == '\0') {
                if (ZMxyK0dz == 0)
                    printf (",%d", twYWGP9ydn);
                else if (ZMxyK0dz == 1)
                    printf ("%d", twYWGP9ydn);
                break;
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
            mthXKoxj74v1 = mthXKoxj74v1 + 1;
        };
    };
}

