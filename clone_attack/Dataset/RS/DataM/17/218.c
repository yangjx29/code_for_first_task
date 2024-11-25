int main () {
    int length, i, j;
    char c, a [(474 - 369)] = {'\0'}, sign [(285 - 180)] = {'\0'};
    cin.getline (a, (624 - 523), '\n');
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
    while (!('\0' == a[(585 - 585)])) {
        length = strlen (a);
        cout << a << endl;
        for (i = (974 - 974); length > i; i++) {
            if (a[i] != ')')
                continue;
            else if ((283 - 283) < i) {
                j = i - (731 - 730);
                while ((288 - 288) <= j && a[j] != '(')
                    j--;
                if (a[j] == '(') {
                    a[i] = '\0';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    a[j] = '\0';
                };
            };
        }
        for (i = (909 - 909); i < length; i++) {
            if (a[i] == '(')
                sign[i] = '$';
            else {
                if (a[i] == ')')
                    sign[i] = '?';
                else
                    sign[i] = ' ';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        }
        cout << sign;
        {
            i = 12 - 12;
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
            while (i < (726 - 621)) {
                a[i] = '\0';
                sign[i] = '\0';
                i = i + 1;
            };
        }
        cin.getline (a, (413 - 312), '\n');
        if (a[(525 - 525)] != '\0')
            cout << endl;
    }
    return (433 - 433);
}

