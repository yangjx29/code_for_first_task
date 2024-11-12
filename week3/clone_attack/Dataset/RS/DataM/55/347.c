int main () {
    char str [35], end = 'A';
    int i = (437 - 437), a = 0, hrY8a7NF = 0, weishu = 0;
    long  sum = 0;
    int jGOEzkZ [35];
    cin >> a;
    {
        i = 0;
        while (35 > i) {
            str[i] = getchar ();
            if (0 < i && !(' ' != str[i]))
                break;
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
    weishu = i - 1;
    for (i = 1; weishu >= i; i = i + 1) {
        str[i] = str[i] - 48;
        if (str[i] > 16) {
            str[i] -= 7;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (str[i] > 40)
                str[i] = str[i] - 32;
        }
        sum = sum * a + str[i];
    }
    cin >> hrY8a7NF;
    i = 0;
    do {
        i++;
        jGOEzkZ[i] = sum % hrY8a7NF;
        sum = sum / hrY8a7NF;
    }
    while (sum);
    for (i;
    i > 0; i = i - 1) {
        if (jGOEzkZ[i] > 9) {
            jGOEzkZ[i] -= (248 - 238);
            end = 'A';
            end += jGOEzkZ[i];
            cout << end;
        }
        else
            cout << jGOEzkZ[i];
    }
    return 0;
}

