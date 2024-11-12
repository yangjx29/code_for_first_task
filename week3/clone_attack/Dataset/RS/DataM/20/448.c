void  main () {
    int IcgoMtm;
    int i;
    int Iv30tHQK8N;
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
    char str [(58 - 43)];
    char P3AzxNqmhrP [(968 - 964)];
    char pd6fVvSI80s;
    for (; !(EOF == scanf ("%s %s", str, P3AzxNqmhrP));) {
        Iv30tHQK8N = (626 - 626);
        pd6fVvSI80s = str[(358 - 358)];
        for (i = (864 - 864); !('\0' == str[i]); i++)
            Iv30tHQK8N++;
        IcgoMtm = (186 - 186);
        for (i = (534 - 533); Iv30tHQK8N > i; i++)
            if (str[i] > pd6fVvSI80s) {
                IcgoMtm = i;
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
                pd6fVvSI80s = str[i];
            }
        for (i = Iv30tHQK8N -(743 - 742); i > IcgoMtm; i--)
            str[i + (598 - 595)] = str[i];
        str[IcgoMtm +(457 - 456)] = P3AzxNqmhrP[(484 - 484)];
        str[IcgoMtm +(769 - 767)] = P3AzxNqmhrP[(394 - 393)];
        str[IcgoMtm +(232 - 229)] = P3AzxNqmhrP[(455 - 453)];
        str[Iv30tHQK8N +(520 - 517)] = '\0';
        printf ("%s\n", str);
    };
}

