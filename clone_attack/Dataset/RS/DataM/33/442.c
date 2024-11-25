int main () {
    int X9Vqh4XE3CJf;
    char zfc [X9Vqh4XE3CJf] [256];
    scanf ("%d", &X9Vqh4XE3CJf);
    {
        int axJbk9 = 0;
        while (axJbk9 < X9Vqh4XE3CJf) {
            scanf ("%s", zfc[axJbk9]);
            axJbk9 = axJbk9 + 1;
        };
    }
    {
        int axJbk9 = 0;
        while (axJbk9 < X9Vqh4XE3CJf) {
            for (int QKylSX5 = 0;
            256 > QKylSX5; QKylSX5++) {
                if (!('A' != zfc[axJbk9][QKylSX5])) {
                    zfc[axJbk9][QKylSX5] = 'T';
                }
                else {
                    if (zfc[axJbk9][QKylSX5] == 'T') {
                        zfc[axJbk9][QKylSX5] = 'A';
                    }
                    else {
                        if (zfc[axJbk9][QKylSX5] == 'C') {
                            zfc[axJbk9][QKylSX5] = 'G';
                        }
                        else {
                            if (zfc[axJbk9][QKylSX5] == 'G') {
                                zfc[axJbk9][QKylSX5] = 'C';
                            };
                        };
                    };
                };
            }
            axJbk9++;
        };
    }
    for (int axJbk9 = 0;
    axJbk9 < X9Vqh4XE3CJf; axJbk9++) {
        printf ("%s\n", zfc[axJbk9]);
    }
    return 0;
}

