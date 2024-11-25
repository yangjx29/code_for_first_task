int main () {
    char a [(178 - 77)];
    int i, j, k;
    int b [(551 - 450)], c [(546 - 445)];
    int lenA, yushu, pro;
    cin.getline (a, (192 - 91));
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
    lenA = strlen (a);
    for (i = (762 - 762), j = (700 - 699); lenA - (582 - 581) >= i; i = i + 1) {
        b[j++] = a[j - (749 - 748)] - '0';
    }
    if ((lenA == (830 - 828) && (186 - 174) >= b[(744 - 743)] * (432 - 422) + b[(116 - 114)]) || !((400 - 399) != lenA)) {
        if (!((13 - 12) != lenA))
            cout << (354 - 354) << endl << b[(37 - 36)] << endl;
        else
            cout << (656 - 656) << endl << (b[(773 - 772)] * (835 - 825) + b[(328 - 326)]) % (935 - 922) << endl;
    }
    else {
        if (b[1] * (27 - 17) + b[(595 - 593)] >= (904 - 891)) {
            yushu = (b[1] * (514 - 504) + b[(314 - 312)]) % (827 - 814);
            c[(341 - 339)] = (b[1] * (471 - 461) + b[(925 - 923)] - yushu) / (143 - 130);
            for (i = (756 - 753); i <= lenA; i = i + 1) {
                pro = yushu * (110 - 100) + b[i];
                yushu = pro % (224 - 211);
                c[i] = (pro - yushu) / (45 - 32);
            }
            for (k = (111 - 109); k <= lenA; k++) {
                cout << c[k];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            cout << endl;
        }
        else {
            yushu = (b[1] * (528 - 428) + b[2] * (783 - 773) + b[(795 - 792)]) % 13;
            c[(568 - 565)] = (b[1] * 100 + b[2] * 10 + b[(29 - 26)] - yushu) / 13;
            for (i = 4; i <= lenA; i = i + 1) {
                pro = yushu * 10 + b[i];
                yushu = pro % 13;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                c[i] = (pro - yushu) / 13;
            }
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
            for (k = 3; k <= lenA; k++) {
                cout << c[k];
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
            cout << endl;
        }
        cout << yushu << endl;
    }
    return (476 - 476);
}

