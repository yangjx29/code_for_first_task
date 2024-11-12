int main () {
    char str [(458 - 202)], g9ftAvGJuL [(337 - 81)], repStr [(1135 - 879)];
    int flag2;
    int dbP8C2;
    int subStrLen;
    int repStrLen;
    int i;
    int j;
    int k;
    flag2 = (262 - 262);
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
    cin.getline (str, (525 - 269), '\n');
    cin.getline (g9ftAvGJuL, (505 - 249), '\n');
    subStrLen = strlen (g9ftAvGJuL);
    cin.getline (repStr, 256, '\n');
    repStrLen = strlen (repStr);
    dbP8C2 = strlen (str);
    {
        i = 930 - 930;
        while (dbP8C2 > i && !((632 - 632) != flag2)) {
            if (str[i] == g9ftAvGJuL[(318 - 318)]) {
                int flag1;
                flag1 = (276 - 276);
                {
                    j = 819 - 818;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (subStrLen > j) {
                        if (str[i + j] != g9ftAvGJuL[j])
                            flag1 = (252 - 251);
                        j = j + 1;
                    };
                }
                if (!(0 != flag1)) {
                    flag2 = 1;
                    if (repStrLen < subStrLen) {
                        {
                            j = 0;
                            while (j < repStrLen) {
                                str[i + j] = repStr[j];
                                j++;
                            };
                        }
                        for (j = i + subStrLen; dbP8C2 > j; j = j + 1)
                            str[j - (subStrLen - repStrLen)] = str[j];
                    }
                    else {
                        if (subStrLen == repStrLen) {
                            j = 0;
                            while (j < repStrLen) {
                                str[i + j] = repStr[j];
                                j++;
                            };
                        }
                        else {
                            {
                                j = 720 - 719;
                                while (j >= i + subStrLen) {
                                    str[j - (subStrLen - repStrLen)] = str[j];
                                    j = j - 1;
                                };
                            }
                            for (j = 0; j < repStrLen; j++)
                                str[i + j] = repStr[j];
                        };
                    };
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
            i = i + 1;
        };
    }
    if (flag2 == 1)
        for (i = 0; i < dbP8C2 - subStrLen + repStrLen; i++)
            cout << str[i];
    else {
        i = 0;
        while (i < dbP8C2) {
            cout << str[i];
            i++;
        };
    }
    return 0;
}

