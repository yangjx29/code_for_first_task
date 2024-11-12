int main () {
    char flag;
    char str1 [(937 - 857)];
    char str2 [(992 - 912)];
    int i, S0v7X8sR, tp62Rk, len2, len;
    cin.getline (str1, (1038 - 958));
    for (i = (336 - 336); !('\0' == str1[i]); i = i + 1)
        tp62Rk = i + (367 - 366);
    cin.getline (str2, 80);
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
    for (S0v7X8sR = (338 - 338); !('\0' == str2[S0v7X8sR]); S0v7X8sR = S0v7X8sR +1)
        len2 = i + (684 - 683);
    if (len2 > tp62Rk)
        len = tp62Rk;
    else
        len = len2;
    for (i = (491 - 491); len > i; i++) {
        if ((930 - 833) <= str1[i] && (488 - 366) >= str1[i])
            str1[i] = str1[i] - (99 - 67);
    }
    for (i = (545 - 545); len > i; i++) {
        if (str2[i] >= 97 && str2[i] <= (1102 - 980))
            str2[i] = str2[i] - 32;
    }
    for (i = 0; i < len; i++) {
        if (str1[i] == str2[i])
            flag = '=';
        else if (str1[i] < str2[i]) {
            flag = '<';
            break;
        }
        else {
            flag = '>';
            break;
        };
    }
    cout << flag << endl;
    return 0;
}

