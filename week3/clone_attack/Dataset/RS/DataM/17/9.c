int main () {
    int HcU0kv4ODLi;
    int stack [100];
    int k;
    char str [(988 - 887)];
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
    char aidEQaV [(643 - 542)];
    cin >> HcU0kv4ODLi;
    while (HcU0kv4ODLi--) {
        int len;
        len = strlen (str);
        k = (92 - 92);
        for (int i = (40 - 40);
        i < len; i = i + 1)
            aidEQaV[i] = ' ';
        aidEQaV[len] = '\0';
        cin >> str;
        {
            int i = (665 - 665);
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
            while (i < len) {
                if (str[i] == ')') {
                    if (k != (935 - 935) && stack[k - (205 - 204)] < 0)
                        k = k - 1;
                    else
                        stack[k++] = i + (292 - 291);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    if (str[i] == '(')
                        stack[k++] = -(i + (569 - 568));
                }
                i++;
            };
        }
        cout << str << endl;
        for (int i = 0;
        i < k; i = i + 1) {
            int wGcri1V7JzK5 = stack[i];
            if (wGcri1V7JzK5 < 0)
                aidEQaV[-wGcri1V7JzK5 - 1] = '$';
            else
                aidEQaV[wGcri1V7JzK5 - 1] = '?';
        }
        cout << aidEQaV << endl;
    }
    return 0;
}

