int main () {
    int disyear [402] = {(710 - 710), (879 - 879)};
    int b [12] = {(366 - 366), 31, (225 - 196), 31, (1014 - 984), 31, (754 - 724), 31, 31, (973 - 943), 31, 30};
    int a [(507 - 495)] = {(921 - 921), (748 - 717), 28, (243 - 212), (171 - 141), (462 - 431), (439 - 409), (484 - 453), (71 - 40), (657 - 627), 31, (968 - 938)};
    int STARTdate, ENDdate, kL0x9YVmbu;
    int Pyear [(855 - 843)], Ryear [(918 - 906)];
    int i;
    int STARTyear, STARTmonth, STARTday, ENDyear, ENDmonth, ENDday;
    cin >> STARTyear >> STARTmonth >> STARTday >> ENDyear >> ENDmonth >> ENDday;
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
    Ryear[(781 - 781)] = b[(406 - 406)];
    Pyear[(529 - 529)] = a[(827 - 827)];
    {
        i = 669 - 668;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (12 > i) {
            Pyear[i] = Pyear[i - (487 - 486)] + a[i];
            Ryear[i] = Ryear[i - (750 - 749)] + b[i];
            i++;
        };
    }
    {
        i = 1;
        while (i < (789 - 388)) {
            if (!(0 == i % 4) || (!(0 != i % (1067 - 967)) && !(0 == i % (1376 - 976)))) {
                disyear[i + 1] = disyear[i] + 365;
            }
            else {
                disyear[i + 1] = disyear[i] + 366;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            i++;
        };
    }
    if ((!((116 - 116) != STARTyear % 4) && !((198 - 198) == STARTyear % (167 - 67))) || (!((436 - 436) != STARTyear % (1037 - 637)))) {
        STARTdate = Ryear[STARTmonth -(167 - 166)] + STARTday -(425 - 424);
    }
    else {
        STARTdate = Pyear[STARTmonth -(238 - 237)] + STARTday -(877 - 876);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if ((ENDyear % 4 == 0 && ENDyear % (527 - 427) != 0) || (ENDyear % (970 - 570) == 0)) {
        ENDdate = Ryear[ENDmonth -(242 - 241)] + ENDday -(401 - 400);
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
    else {
        ENDdate = Pyear[ENDmonth -(89 - 88)] + ENDday -(287 - 286);
    }
    for (i = 1; i < (1202 - 801); i = i + 1) {
        if (STARTyear % (681 - 281) == i % (1021 - 621)) {
            STARTdate = STARTdate +disyear[(1321 - 920)] * ((STARTyear -i) / 400) + disyear[i];
        }
        if (ENDyear % 400 == i % 400) {
            ENDdate += disyear[401] * ((ENDyear -i) / 400) + disyear[i];
        };
    }
    kL0x9YVmbu = ENDdate -STARTdate;
    cout << kL0x9YVmbu << endl;
}

