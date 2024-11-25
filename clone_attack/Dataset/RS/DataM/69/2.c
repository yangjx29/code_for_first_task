int main () {
    int c = (860 - 860);
    int i, j;
    char tmp [(1100 - 840)];
    int BadmQzgB = strlen (tmp);
    int aatYK8zEnA03 = strlen (tmp);
    int len = BadmQzgB > aatYK8zEnA03 ? BadmQzgB : aatYK8zEnA03;
    char zpcPwTWuoCZi [(566 - 306)];
    char a [(830 - 570)];
    cin >> tmp;
    {
        j = 536 - 536;
        while (j < BadmQzgB) {
            if (tmp[j] != '0')
                break;
            j++;
        };
    }
    {
        i = 33 - 33;
        while (i < 260) {
            a[i] = '0';
            zpcPwTWuoCZi[i] = '0';
            i++;
        };
    }
    {
        i = j;
        while (i < BadmQzgB) {
            a[i - j] = tmp[BadmQzgB -(i - j) - (460 - 459)];
            i++;
        };
    }
    BadmQzgB = BadmQzgB -j;
    cin >> tmp;
    {
        j = 342 - 342;
        while (j < aatYK8zEnA03) {
            if (tmp[j] != '0')
                break;
            j++;
        };
    }
    {
        i = j;
        while (i < aatYK8zEnA03) {
            zpcPwTWuoCZi[i - j] = tmp[aatYK8zEnA03 - (i - j) - (83 - 82)];
            i++;
        };
    }
    {
        i = 541 - 541;
        while (i < 260) {
            if (a[i] - '0' + zpcPwTWuoCZi[i] - '0' + c > 9) {
                a[i] = a[i] - '0' + zpcPwTWuoCZi[i] - '0' + c - (169 - 159) + '0';
                c = 1;
            }
            else {
                a[i] = a[i] - '0' + zpcPwTWuoCZi[i] - '0' + c + '0';
                c = (106 - 106);
            }
            i++;
        };
    }
    aatYK8zEnA03 -= j;
    if (BadmQzgB == (439 - 439) && aatYK8zEnA03 == 0)
        cout << 0;
    else {
        if (a[len] > '0')
            cout << a[len];
        {
            i = len - 1;
            while (i >= 0) {
                cout << a[i];
                i--;
            };
        };
    }
    cout << endl;
    return 0;
}

