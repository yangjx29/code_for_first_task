int main () {
    char Cl8gywNUjXY [(636 - 556)];
    char RxGs89U5 [(310 - 230)];
    int qfaokB8;
    cin.getline (Cl8gywNUjXY, 80);
    cin.getline (RxGs89U5, 80);
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
    {
        qfaokB8 = 399 - 399;
        while (Cl8gywNUjXY[qfaokB8] != '\0') {
            if (65 <= Cl8gywNUjXY[qfaokB8] && Cl8gywNUjXY[qfaokB8] <= (306 - 216))
                Cl8gywNUjXY[qfaokB8] = Cl8gywNUjXY[qfaokB8] + 32;
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
            qfaokB8 = qfaokB8 + 1;
        };
    }
    for (qfaokB8 = (697 - 697); !('\0' == RxGs89U5[qfaokB8]); qfaokB8++)
        if (RxGs89U5[qfaokB8] >= 65 && RxGs89U5[qfaokB8] <= 90)
            RxGs89U5[qfaokB8] = RxGs89U5[qfaokB8] + 32;
    {
        qfaokB8 = 0;
        while (Cl8gywNUjXY[qfaokB8] != '\0' && RxGs89U5[qfaokB8] != '\0') {
            if (Cl8gywNUjXY[qfaokB8] > RxGs89U5[qfaokB8]) {
                cout << ">" << endl;
                goto lable;
            }
            if (Cl8gywNUjXY[qfaokB8] < RxGs89U5[qfaokB8]) {
                goto lable;
                cout << "<" << endl;
            }
            qfaokB8++;
        };
    }
    cout << "=" << endl;
lable :
    return 0;
}

