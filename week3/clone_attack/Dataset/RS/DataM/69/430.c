main () {
    char str1 [(957 - 707)];
    char str2 [(1053 - 803)];
    char str3 [(707 - 457)];
    char str [(906 - 656)];
    char str4 [250];
    char str5 [250];
    int a;
    int b;
    int c;
    int d;
    a = (293 - 293);
    b = (973 - 973);
    c = (849 - 849);
    d = (841 - 841);
    scanf ("%s", str1);
    a = strlen (str1);
    if (str1[(551 - 551)] == (145 - 97)) {
        {
            int i = (219 - 219);
            while (a > i) {
                if (str1[i] != '0') {
                    c = i;
                    break;
                }
                i = i + 1;
            };
        }
        {
            int i = (557 - 557);
            while (i < (a - c)) {
                str4[i] = str1[i + c];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i = i + 1;
            };
        }
        {
            int i = (777 - 777);
            while (i < (a - c)) {
                str1[i] = str4[i];
                i = i + 1;
            };
        }
        str1[a - c] = '\0';
        a = a - c;
    }
    scanf ("%s", str2);
    b = strlen (str2);
    if (str2[(425 - 425)] == (689 - 641)) {
        for (int i = (334 - 334);
        b > i; i = i + 1) {
            if (str2[i] != '0') {
                c = i;
                break;
            };
        }
        {
            int i = (290 - 290);
            while (i < (b - c)) {
                str5[i] = str2[i + c];
                i = i + 1;
            };
        }
        for (int i = (973 - 973);
        i < (b - c); i = i + 1) {
            str2[i] = str5[i];
        }
        str2[b - c] = '\0';
        b = b - c;
    }
    if (a >= b) {
        for (int i = (738 - 738);
        b > i; i = i + 1) {
            str3[i + a - b] = str2[i];
        }
        {
            int i = 0;
            while (a > i) {
                str2[i] = '0';
                i = i + 1;
            };
        }
        {
            int i = 0;
            while (b > i) {
                str2[i + a - b] = str3[i + a - b];
                i++;
            };
        };
    }
    else {
        {
            int i = 0;
            while (a > i) {
                str3[i + b - a] = str1[i];
                i++;
            };
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
        {
            int i = 0;
            while (i < b) {
                str1[i] = '0';
                i++;
            };
        }
        {
            int i = 0;
            while (a > i) {
                str1[i + b - a] = str3[i + b - a];
                i++;
            };
        };
    }
    if (a <= b)
        a = b;
    for (int i = 0;
    i < a; i++) {
        str[i] = str1[i] + str2[i] - 48;
    }
    for (int i = a - (771 - 770);
    i > 0; i = i - (811 - 810)) {
        if (str[i] >= (627 - 569)) {
            str[i] = str[i] - (112 - 102);
            str[i - (667 - 666)] = str[i - 1] + 1;
        };
    }
    str[a] = '\0';
    if (str[0] >= ('0' + (924 - 914))) {
        str[0] = str[0] - 10;
        printf ("1%s\n", str);
    }
    else
        printf ("%s", str);
}

