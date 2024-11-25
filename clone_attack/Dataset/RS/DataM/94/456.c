void  Sort (int b [], int JC3SWm) {
    int BozfcCRgsvj, hRCwpb5l, fwCkTvzcUEb;
    for (BozfcCRgsvj = (168 - 168); BozfcCRgsvj < JC3SWm -(733 - 732); BozfcCRgsvj++) {
        for (hRCwpb5l = (390 - 390); JC3SWm -BozfcCRgsvj-(962 - 961) > hRCwpb5l; hRCwpb5l++) {
            if (b[hRCwpb5l + (867 - 866)] < b[hRCwpb5l]) {
                fwCkTvzcUEb = b[hRCwpb5l];
                b[hRCwpb5l] = b[hRCwpb5l + 1];
                b[hRCwpb5l + 1] = fwCkTvzcUEb;
            };
        };
    };
}

int chouqu (int A3fho8qlF5 [], int b [], int JC3SWm) {
    int count = (827 - 827), BozfcCRgsvj;
    for (BozfcCRgsvj = 0; JC3SWm > BozfcCRgsvj; BozfcCRgsvj++) {
        if (!(1 != A3fho8qlF5[BozfcCRgsvj] % 2)) {
            b[count] = A3fho8qlF5[BozfcCRgsvj];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            count++;
        };
    }
    return count;
}

int main () {
    int A3fho8qlF5 [(884 - 383)], JC3SWm, BozfcCRgsvj, b [(1302 - 801)];
    cin >> JC3SWm;
    {
        BozfcCRgsvj = 0;
        while (BozfcCRgsvj < JC3SWm) {
            cin >> A3fho8qlF5[BozfcCRgsvj];
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
            BozfcCRgsvj++;
        };
    }
    JC3SWm = chouqu (A3fho8qlF5, b, JC3SWm);
    Sort (b, JC3SWm);
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
    cout << b[0];
    for (BozfcCRgsvj = 1; BozfcCRgsvj < JC3SWm; BozfcCRgsvj++) {
        cout << "," << b[BozfcCRgsvj];
    }
    cout << endl;
    return 0;
}

