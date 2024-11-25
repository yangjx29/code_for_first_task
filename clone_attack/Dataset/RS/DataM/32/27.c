int main () {
    int Tham58pEcuk4 [100], mEizAyl [100], mmMq6oBJYZ [100];
    char qtI5owpE7 [100], b [100];
    int qhMxU69IZ, DpAx1wjGh34, YdUo3T, l1, VZSF7vy;
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
    cin >> qhMxU69IZ;
    {
        DpAx1wjGh34 = 955 - 955;
        while (DpAx1wjGh34 < qhMxU69IZ) {
            DpAx1wjGh34++;
            cin >> qtI5owpE7 >> b;
            l1 = strlen (qtI5owpE7);
            {
                YdUo3T = 0;
                while (l1 > YdUo3T) {
                    mEizAyl[YdUo3T] = qtI5owpE7[l1 - YdUo3T -1] - '0';
                    YdUo3T++;
                };
            }
            VZSF7vy = strlen (b);
            {
                YdUo3T = 0;
                while (VZSF7vy > YdUo3T) {
                    mmMq6oBJYZ[YdUo3T] = b[VZSF7vy -YdUo3T-1] - '0';
                    YdUo3T++;
                };
            }
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
            if (l1 > VZSF7vy) {
                YdUo3T = VZSF7vy;
                while (YdUo3T < l1) {
                    mmMq6oBJYZ[YdUo3T] = 0;
                    YdUo3T++;
                };
            }
            {
                YdUo3T = 0;
                while (YdUo3T < l1) {
                    Tham58pEcuk4[YdUo3T] = mEizAyl[YdUo3T] - mmMq6oBJYZ[YdUo3T];
                    YdUo3T++;
                };
            }
            {
                YdUo3T = 0;
                while (YdUo3T < l1) {
                    if (Tham58pEcuk4[YdUo3T] < 0) {
                        Tham58pEcuk4[YdUo3T] = Tham58pEcuk4[YdUo3T] + 10;
                        Tham58pEcuk4[YdUo3T +1]--;
                    }
                    YdUo3T++;
                };
            }
            {
                YdUo3T = l1 - 1;
                while (YdUo3T > -1) {
                    cout << Tham58pEcuk4[YdUo3T];
                    YdUo3T--;
                };
            }
            cout << endl;
        };
    }
    return 0;
}

