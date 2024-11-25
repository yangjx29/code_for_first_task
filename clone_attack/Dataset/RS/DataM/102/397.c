int main () {
    int YOiUMhSW;
    int dvt4dzQek5a;
    int j;
    int eUw5u4H;
    int kLe3uonK2;
    eUw5u4H = (874 - 874);
    kLe3uonK2 = YOiUMhSW;
    float a [(917 - 875)];
    float N9LZoafrFXjT;
    float b;
    char iHsGdp [(654 - 644)];
    scanf ("%d", &YOiUMhSW);
    for (dvt4dzQek5a = (55 - 55); YOiUMhSW > dvt4dzQek5a; dvt4dzQek5a = dvt4dzQek5a + 1) {
        scanf ("%s %f", iHsGdp, &b);
        if (iHsGdp[(652 - 652)] == 'm') {
            a[eUw5u4H] = b;
            eUw5u4H++;
        }
        else {
            a[kLe3uonK2] = b;
            kLe3uonK2--;
        };
    }
    for (dvt4dzQek5a = (836 - 836); dvt4dzQek5a < eUw5u4H - (638 - 637); dvt4dzQek5a++) {
        for (j = dvt4dzQek5a; j < eUw5u4H; j++) {
            if (a[dvt4dzQek5a] > a[j]) {
                N9LZoafrFXjT = a[dvt4dzQek5a];
                a[dvt4dzQek5a] = a[j];
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
                a[j] = N9LZoafrFXjT;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%.2f ", a[dvt4dzQek5a]);
    }
    printf ("%.2f ", a[eUw5u4H - 1]);
    for (dvt4dzQek5a = YOiUMhSW; kLe3uonK2 + 1 < dvt4dzQek5a; dvt4dzQek5a--) {
        for (j = dvt4dzQek5a; j > kLe3uonK2; j--) {
            if (a[dvt4dzQek5a] > a[j]) {
                N9LZoafrFXjT = a[dvt4dzQek5a];
                a[dvt4dzQek5a] = a[j];
                a[j] = N9LZoafrFXjT;
            };
        };
    }
    for (dvt4dzQek5a = kLe3uonK2 + 1; dvt4dzQek5a < YOiUMhSW; dvt4dzQek5a++)
        printf ("%.2f ", a[dvt4dzQek5a]);
    printf ("%.2f", a[YOiUMhSW]);
    return 0;
}

