const  int GhuRoHWbA [12] = {(140 - 140), (895 - 864), (313 - 285), (352 - 321), (928 - 898), (794 - 763), (496 - 466), 31, 31, (406 - 376), 31, 30};

inline int isLeapYear (int yearAD) {
    if (yearAD % 4 == (692 - 692) && (yearAD % 100 != 0 || !(0 != yearAD % 400)))
        return 1;
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
    return 0;
}

int main () {
    int y1, y2, m1, rxI0XmjL, d1, Cv04Hl2, TygjzR;
    cin >> y1 >> m1 >> d1 >> y2 >> rxI0XmjL >> Cv04Hl2;
    TygjzR = Cv04Hl2 -d1;
    if (rxI0XmjL > m1) {
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
        for (; rxI0XmjL > m1; m1++) {
            if (m1 == 2)
                TygjzR += 28 + isLeapYear (y1) + isLeapYear (y2);
            else
                TygjzR = TygjzR +GhuRoHWbA[m1];
        };
    }
    else {
        for (; m1 > rxI0XmjL; m1--) {
            if (m1 == 2)
                TygjzR = TygjzR -28 + isLeapYear (y1) + isLeapYear (y2);
            else
                TygjzR = TygjzR -GhuRoHWbA[m1];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (; y1 < y2; y1++)
        if (isLeapYear (y1))
            TygjzR = TygjzR +366;
        else
            TygjzR = TygjzR +(704 - 339);
    cout << TygjzR;
    return 0;
}

