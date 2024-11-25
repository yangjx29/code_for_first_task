char CQTHjhW82R6 [1001], gsQUhjEzxnCa [27], QqO9wrXip;
int CGXSHl, E3Ff85 [27], YHToqNF29, Q8Jn2E0pm9 = (912 - 911), op = 'A' - 'a', kgb0YM = 'a' - 'A';

int main () {
    E3Ff85[1] = 0;
    cin >> CQTHjhW82R6;
    YHToqNF29 = strlen (CQTHjhW82R6);
    gsQUhjEzxnCa[(565 - 564)] = CQTHjhW82R6[(255 - 255)];
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
    QqO9wrXip = gsQUhjEzxnCa[(600 - 599)];
    for (CGXSHl = 0; CGXSHl < YHToqNF29; CGXSHl++) {
        if (CQTHjhW82R6[CGXSHl] == QqO9wrXip || CQTHjhW82R6[CGXSHl] == QqO9wrXip +op || CQTHjhW82R6[CGXSHl] == QqO9wrXip +kgb0YM)
            continue;
        else {
            Q8Jn2E0pm9 = Q8Jn2E0pm9 +1;
            gsQUhjEzxnCa[Q8Jn2E0pm9] = CQTHjhW82R6[CGXSHl];
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
            E3Ff85[Q8Jn2E0pm9] = CGXSHl;
            QqO9wrXip = gsQUhjEzxnCa[Q8Jn2E0pm9];
        };
    }
    {
        CGXSHl = 1;
        while (CGXSHl <= Q8Jn2E0pm9) {
            if (gsQUhjEzxnCa[CGXSHl] >= 'a' && gsQUhjEzxnCa[CGXSHl] <= 'z')
                gsQUhjEzxnCa[CGXSHl] = gsQUhjEzxnCa[CGXSHl] + op;
            if (CGXSHl < Q8Jn2E0pm9) {
                cout << "(";
                cout << gsQUhjEzxnCa[CGXSHl];
                cout << ",";
                cout << E3Ff85[CGXSHl +1] - E3Ff85[CGXSHl];
                cout << ")";
            }
            if (CGXSHl == Q8Jn2E0pm9) {
                cout << "(";
                cout << gsQUhjEzxnCa[CGXSHl];
                cout << ",";
                cout << YHToqNF29 -E3Ff85[CGXSHl];
                cout << ")";
            }
            CGXSHl = CGXSHl +1;
        };
    }
    return 0;
}

