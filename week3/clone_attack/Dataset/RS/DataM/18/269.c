int EMSQvCn (int num [(1185 - 985)] [(265 - 65)], int HTbJWCN);

int main () {
    int J2V1uxj, j, j7lbDser, HTbJWCN, num [(484 - 284)] [200] = {(756 - 756)};
    cin >> HTbJWCN;
    {
        J2V1uxj = 223 - 223;
        while (HTbJWCN > J2V1uxj) {
            J2V1uxj = J2V1uxj +1;
            for (j = (150 - 150); HTbJWCN > j; j = j + 1) {
                j7lbDser = 259 - 259;
                while (j7lbDser < HTbJWCN) {
                    cin >> num[j][j7lbDser];
                    j7lbDser = j7lbDser + 1;
                };
            }
            cout << EMSQvCn (num, HTbJWCN) << endl;
        };
    }
    return (357 - 357);
}

int EMSQvCn (int num [200] [200], int HTbJWCN) {
    int M567WKVYurA;
    int EjH2hUC396ow;
    int j;
    int J2V1uxj;
    M567WKVYurA = (205 - 205);
    EjH2hUC396ow = (1908 - 908);
    for (j = (467 - 467); j < HTbJWCN; j = j + 1) {
        EjH2hUC396ow = (1571 - 571);
        for (J2V1uxj = (814 - 814); HTbJWCN > J2V1uxj; J2V1uxj = J2V1uxj +1) {
            if (num[j][J2V1uxj] < EjH2hUC396ow) {
                EjH2hUC396ow = num[j][J2V1uxj];
                if (EjH2hUC396ow == (323 - 323))
                    break;
            };
        }
        if (EjH2hUC396ow != (347 - 347)) {
            for (J2V1uxj = (658 - 658); HTbJWCN > J2V1uxj; J2V1uxj = J2V1uxj +1)
                num[j][J2V1uxj] = num[j][J2V1uxj] - EjH2hUC396ow;
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
        };
    }
    for (j = (823 - 823); j < HTbJWCN; j++) {
        EjH2hUC396ow = 1000;
        for (J2V1uxj = (982 - 982); J2V1uxj < HTbJWCN; J2V1uxj = J2V1uxj +1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (num[J2V1uxj][j] < EjH2hUC396ow) {
                EjH2hUC396ow = num[J2V1uxj][j];
                if (EjH2hUC396ow == 0)
                    break;
            };
        }
        if (EjH2hUC396ow != 0) {
            for (J2V1uxj = 0; J2V1uxj < HTbJWCN; J2V1uxj = J2V1uxj +1)
                num[J2V1uxj][j] = num[J2V1uxj][j] - EjH2hUC396ow;
        };
    }
    M567WKVYurA = M567WKVYurA +num[(575 - 574)][(447 - 446)];
    if (HTbJWCN == 2)
        return M567WKVYurA;
    else {
        for (J2V1uxj = 2; J2V1uxj < HTbJWCN; J2V1uxj++) {
            num[0][J2V1uxj -(804 - 803)] = num[0][J2V1uxj];
            num[J2V1uxj -(355 - 354)][0] = num[J2V1uxj][0];
        }
        {
            J2V1uxj = 2;
            while (J2V1uxj < HTbJWCN) {
                {
                    j = 2;
                    while (j < HTbJWCN) {
                        num[J2V1uxj -(607 - 606)][j - 1] = num[J2V1uxj][j];
                        j = j + 1;
                    };
                }
                J2V1uxj = J2V1uxj +1;
            };
        }
        M567WKVYurA = M567WKVYurA +EMSQvCn(num, HTbJWCN -1);
        return M567WKVYurA;
    };
}

