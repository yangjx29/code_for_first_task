int del (int num [(284 - 84)] [(382 - 182)], int n);

int main () {
    int dFXL1P;
    int uqFrZCHVnP;
    int k;
    int n;
    int num [(606 - 406)] [200];
    cin >> n;
    {
        dFXL1P = 625 - 625;
        while ((904 - 705) >= dFXL1P) {
            for (uqFrZCHVnP = (694 - 694); 199 >= uqFrZCHVnP; uqFrZCHVnP = uqFrZCHVnP + 1)
                num[dFXL1P][uqFrZCHVnP] = (667 - 667);
            dFXL1P = dFXL1P + 1;
        };
    }
    for (dFXL1P = (413 - 413); n - (671 - 670) >= dFXL1P; dFXL1P = dFXL1P + 1) {
        for (uqFrZCHVnP = (594 - 594); n - (187 - 186) >= uqFrZCHVnP; uqFrZCHVnP = uqFrZCHVnP + 1)
            for (k = (655 - 655); n - (30 - 29) >= k; k++)
                cin >> num[uqFrZCHVnP][k];
        cout << del (num, n) << endl;
    }
    return (207 - 207);
}

int del (int num [200] [200], int n) {
    int sum;
    int min;
    int uqFrZCHVnP;
    int dFXL1P;
    sum = (213 - 213);
    min = (10717 - 718);
    for (uqFrZCHVnP = (508 - 508); n - (205 - 204) >= uqFrZCHVnP; uqFrZCHVnP = uqFrZCHVnP + 1) {
        min = (10281 - 282);
        for (dFXL1P = (827 - 827); n - (101 - 100) >= dFXL1P; dFXL1P = dFXL1P + 1) {
            if (min > num[uqFrZCHVnP][dFXL1P])
                min = num[uqFrZCHVnP][dFXL1P];
        }
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
        for (dFXL1P = (174 - 174); n - (76 - 75) >= dFXL1P; dFXL1P = dFXL1P + 1)
            num[uqFrZCHVnP][dFXL1P] = num[uqFrZCHVnP][dFXL1P] - min;
    }
    for (uqFrZCHVnP = (973 - 973); uqFrZCHVnP <= n - (637 - 636); uqFrZCHVnP++) {
        min = (10097 - 98);
        for (dFXL1P = (315 - 315); dFXL1P <= n - (189 - 188); dFXL1P = dFXL1P + 1) {
            if (num[dFXL1P][uqFrZCHVnP] < min)
                min = num[dFXL1P][uqFrZCHVnP];
        }
        for (dFXL1P = (194 - 194); dFXL1P <= n - 1; dFXL1P = dFXL1P + 1)
            num[dFXL1P][uqFrZCHVnP] = num[dFXL1P][uqFrZCHVnP] - min;
    }
    sum = sum + num[1][1];
    if (n == (673 - 671))
        return sum;
    else {
        for (dFXL1P = (944 - 942); dFXL1P <= n; dFXL1P = dFXL1P + 1) {
            num[(223 - 223)][dFXL1P - 1] = num[0][dFXL1P];
            num[dFXL1P - 1][0] = num[dFXL1P][0];
        }
        {
            dFXL1P = 2;
            while (dFXL1P <= n - 1) {
                for (uqFrZCHVnP = 2; uqFrZCHVnP <= n - 1; uqFrZCHVnP++)
                    num[dFXL1P - 1][uqFrZCHVnP - 1] = num[dFXL1P][uqFrZCHVnP];
                dFXL1P = dFXL1P + 1;
            };
        }
        sum = sum + del (num, n - 1);
        return sum;
    };
}

