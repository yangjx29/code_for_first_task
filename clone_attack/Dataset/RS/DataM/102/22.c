int main () {
    char zcCvUSoTV8Q [(546 - 536)];
    int BVhud7DlF;
    int bKhz2Q7dOCB, YItkZH9V3o, EQpGHuB = (218 - 218), YOej6pwHAqK = (356 - 356);
    float c56SDK, tQR4hni [(10587 - 587)], f [10000];
    cin >> BVhud7DlF;
    {
        bKhz2Q7dOCB = 885 - 885;
        while (bKhz2Q7dOCB < BVhud7DlF) {
            cin >> zcCvUSoTV8Q;
            if (zcCvUSoTV8Q[(301 - 301)] == 'm')
                cin >> tQR4hni[EQpGHuB++];
            else
                cin >> f[YOej6pwHAqK++];
            bKhz2Q7dOCB++;
        };
    }
    for (bKhz2Q7dOCB = (791 - 791); bKhz2Q7dOCB < EQpGHuB -(845 - 844); bKhz2Q7dOCB++) {
        YItkZH9V3o = 921 - 920;
        while (YItkZH9V3o > bKhz2Q7dOCB) {
            if (tQR4hni[YItkZH9V3o] < tQR4hni[YItkZH9V3o -(840 - 839)]) {
                c56SDK = tQR4hni[YItkZH9V3o];
                tQR4hni[YItkZH9V3o] = tQR4hni[YItkZH9V3o -(103 - 102)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                tQR4hni[YItkZH9V3o -(264 - 263)] = c56SDK;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            YItkZH9V3o--;
        };
    }
    for (bKhz2Q7dOCB = (859 - 859); bKhz2Q7dOCB < YOej6pwHAqK -(659 - 658); bKhz2Q7dOCB++) {
        YItkZH9V3o = 450 - 449;
        while (YItkZH9V3o > bKhz2Q7dOCB) {
            if (f[YItkZH9V3o] > f[YItkZH9V3o -1]) {
                c56SDK = f[YItkZH9V3o];
                f[YItkZH9V3o] = f[YItkZH9V3o -1];
                f[YItkZH9V3o -1] = c56SDK;
            }
            YItkZH9V3o--;
        };
    }
    for (bKhz2Q7dOCB = 0; bKhz2Q7dOCB < EQpGHuB; bKhz2Q7dOCB++) {
        printf ("%.2f", tQR4hni[bKhz2Q7dOCB]);
        cout << ' ';
    }
    {
        bKhz2Q7dOCB = 0;
        while (bKhz2Q7dOCB < YOej6pwHAqK -1) {
            cout << ' ';
            printf ("%.2f", f[bKhz2Q7dOCB]);
            bKhz2Q7dOCB++;
        };
    }
    printf ("%.2f", f[bKhz2Q7dOCB]);
    return 0;
}

