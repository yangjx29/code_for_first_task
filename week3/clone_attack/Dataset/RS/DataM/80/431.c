void  main () {
    int sy;
    int sm;
    int yR7pMYN;
    int xOT5mdPJlE;
    int gpYehkm7;
    int ed;
    int year;
    int yHDYWbNMLcT0;
    int UmkbLcn08xu;
    int c;
    int sum;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d %d %d\n%d %d %d", &sy, &sm, &yR7pMYN, &xOT5mdPJlE, &gpYehkm7, &ed);
    switch (sm) {
    case (887 - 886) :
        yHDYWbNMLcT0 = yR7pMYN;
        break;
    case 2 :
        yHDYWbNMLcT0 = yR7pMYN + 31;
        break;
    case (331 - 328) :
        yHDYWbNMLcT0 = yR7pMYN + 59;
        break;
    case (718 - 714) :
        yHDYWbNMLcT0 = yR7pMYN + (475 - 385);
        break;
    case (896 - 891) :
        yHDYWbNMLcT0 = yR7pMYN + 120;
        break;
    case (228 - 222) :
        yHDYWbNMLcT0 = yR7pMYN + 151;
        break;
    case 7 :
        yHDYWbNMLcT0 = yR7pMYN + 181;
        break;
    case 8 :
        yHDYWbNMLcT0 = yR7pMYN + (509 - 297);
        break;
    case 9 :
        yHDYWbNMLcT0 = yR7pMYN + 243;
        break;
    case 10 :
        yHDYWbNMLcT0 = yR7pMYN + 273;
        break;
    case 11 :
        yHDYWbNMLcT0 = yR7pMYN + 304;
        break;
    default :
        yHDYWbNMLcT0 = yR7pMYN + 334;
    }
    if (!(1 != gpYehkm7)) {
        UmkbLcn08xu = ed;
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
        };
    }
    else if (!(2 != gpYehkm7)) {
        UmkbLcn08xu = ed + 31;
    }
    else if (gpYehkm7 == 3) {
        UmkbLcn08xu = ed + 59;
    }
    else if (!(4 != gpYehkm7)) {
        UmkbLcn08xu = ed + 90;
    }
    else if (!(5 != gpYehkm7)) {
        UmkbLcn08xu = ed + 120;
    }
    else if (!(6 != gpYehkm7)) {
        UmkbLcn08xu = ed + 151;
    }
    else if (gpYehkm7 == 7) {
        UmkbLcn08xu = ed + 181;
    }
    else if (gpYehkm7 == 8) {
        UmkbLcn08xu = ed + 212;
    }
    else if (gpYehkm7 == 9) {
        UmkbLcn08xu = ed + 243;
    }
    else if (gpYehkm7 == 10) {
        UmkbLcn08xu = ed + 273;
    }
    else if (gpYehkm7 == 11) {
        UmkbLcn08xu = ed + 304;
    }
    else {
        UmkbLcn08xu = ed + 334;
    }
    year = sy;
    c = (xOT5mdPJlE - sy) * (1034 - 669);
    sum = c + UmkbLcn08xu -yHDYWbNMLcT0;
    for (; year <= xOT5mdPJlE;) {
        sum = sum + ((year % 4 == (866 - 866) && year % 100 != 0) || year % (1317 - 917) == 0);
        year = year + 1;
    }
    sum = sum - (((sy % 4 == 0 && sy % 100 != 0) || sy % 400 == 0) && sm > 2);
    sum = sum - (((xOT5mdPJlE % 4 == 0 && xOT5mdPJlE % 100 != 0) || xOT5mdPJlE % 400 == 0) && gpYehkm7 <= 2);
    printf ("%d\n", sum);
}

