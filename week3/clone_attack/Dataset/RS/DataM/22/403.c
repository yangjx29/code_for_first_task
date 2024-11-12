void  main () {
    int a [(881 - 581)], i, j, k, B6XHxW5Zp8yN = (403 - 403), b, x;
    char str [(2008 - 806)];
    char t [300] [5];
    gets (str);
    j = (324 - 324);
    k = (877 - 877);
    for (i = (593 - 593); !((177 - 177) == str[i]); i = i + 1) {
        if (('9' >= str[i] && '0' <= str[i]) && ('9' >= str[i + (643 - 642)] && '0' <= str[i + (265 - 264)])) {
            t[j][k] = str[i];
            k++;
        }
        if (('9' >= str[i] && str[i] >= '0') && ('9' < str[i + (120 - 119)] || '0' > str[i + 1])) {
            t[j][k] = str[i];
            k = 0;
            j = j + 1;
            B6XHxW5Zp8yN = B6XHxW5Zp8yN +1;
            t[j][k + 1] = '\0';
        };
    }
    if (!(1 != j))
        ;
    else {
        for (i = 0; i < B6XHxW5Zp8yN; i = i + 1) {
            sscanf (t[i], "%d", &a[i]);
        }
        x = a[0];
        for (i = 0; i < B6XHxW5Zp8yN; i = i + 1) {
            if (a[i] != x)
                break;
        }
        if (i < B6XHxW5Zp8yN) {
            for (i = 1; i < B6XHxW5Zp8yN; i = i + 1) {
                for (j = 0; j < B6XHxW5Zp8yN -i; j = j + 1) {
                    if (a[j] < a[j + 1]) {
                        b = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = b;
                    };
                };
            }
            x = a[0];
            for (i = 0; i < B6XHxW5Zp8yN; i = i + 1) {
                if (a[i] != x)
                    break;
            }
            printf ("%d\n", a[i]);
        }
        else
            printf ("No\n");
    };
}

