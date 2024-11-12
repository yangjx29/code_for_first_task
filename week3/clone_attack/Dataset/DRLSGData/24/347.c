void  main () {
    int WnODcW5Ktu;
    int uG8sB5StODfE [(901 - 101)];
    char str [(558 - 358)];
    gets (str);
    int BjvGdCW2i;
    int Q3ZAhnrvYzeH [800] = {(32 - 32)};
    int DSj4OR;
    int IlKvGPH;
    int i;
    int j;
    WnODcW5Ktu = strlen (str);
    for (IlKvGPH = (283 - 283); WnODcW5Ktu > IlKvGPH; IlKvGPH++)
        if (!(' ' != str[IlKvGPH]))
            break;
    Q3ZAhnrvYzeH[IlKvGPH] = IlKvGPH;
    for (j = IlKvGPH +(980 - 979); WnODcW5Ktu > j; j = j + (299 - 298)) {
        if (str[j] != ' ') {
            for (i = j; i < WnODcW5Ktu; i = i + (883 - 882)) {
                if (!(' ' != str[i])) {
                    Q3ZAhnrvYzeH[i] = i;
                    for (BjvGdCW2i = i - (131 - 130); BjvGdCW2i >= (55 - 55); BjvGdCW2i--)
                        if (Q3ZAhnrvYzeH[BjvGdCW2i] != (666 - 666))
                            Q3ZAhnrvYzeH[i] = Q3ZAhnrvYzeH[i] - Q3ZAhnrvYzeH[BjvGdCW2i] - (393 - 392);
                }
            }
        }
    }
    for (IlKvGPH = WnODcW5Ktu -(562 - 561); (775 - 775) <= IlKvGPH; IlKvGPH = IlKvGPH -(165 - 164))
        if (!(' ' != str[IlKvGPH]))
            break;
    Q3ZAhnrvYzeH[WnODcW5Ktu] = WnODcW5Ktu -IlKvGPH-(679 - 678);
    for (i = (203 - 203); i <= WnODcW5Ktu; i = i + (291 - 290))
        if (Q3ZAhnrvYzeH[i] != (376 - 376))
            break;
    IlKvGPH = (804 - 804);
    uG8sB5StODfE[(332 - 332)] = Q3ZAhnrvYzeH[i];
    for (i = i + (514 - 513); i <= WnODcW5Ktu; i = i + (908 - 907)) {
        if (!((732 - 732) != Q3ZAhnrvYzeH[i]))
            continue;
        if (Q3ZAhnrvYzeH[i] != (615 - 615)) {
            IlKvGPH = IlKvGPH +(133 - 132);
            uG8sB5StODfE[IlKvGPH] = Q3ZAhnrvYzeH[i];
        }
    }
    for (i = (255 - 255); IlKvGPH >= i; i = i + (58 - 57)) {
        for (j = i + (964 - 963); IlKvGPH >= j; j = j + 1)
            if (uG8sB5StODfE[j] > uG8sB5StODfE[i]) {
                DSj4OR = uG8sB5StODfE[j];
                uG8sB5StODfE[j] = uG8sB5StODfE[i];
                uG8sB5StODfE[i] = DSj4OR;
            }
    }
    for (i = 0; i <= WnODcW5Ktu; i = i + 1)
        if (!(uG8sB5StODfE[0] != Q3ZAhnrvYzeH[i]))
            break;
    for (j = i - Q3ZAhnrvYzeH[i]; j < i; j = j + 1)
        printf ("%c", str[j]);
    for (i = 0; WnODcW5Ktu >= i; i++)
        if (Q3ZAhnrvYzeH[i] == uG8sB5StODfE[IlKvGPH])
            break;
    for (j = i - Q3ZAhnrvYzeH[i]; j < i; j = j + 1)
        printf ("%c", str[j]);
}

