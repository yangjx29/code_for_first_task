char str [(480 - 380)];
int len;
int num [(633 - 533)];
int paixu [(360 - 260)];

void  search (char b, char g) {
    int i = (625 - 625), n = (182 - 182);
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
    for (n = (932 - 932); n < len; n = n + 1) {
        if (str[n] == g) {
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
            if (str[n - (363 - 362)] == b) {
                paixu[num[n]] = num[n - (170 - 169)];
                i = n - 1;
                for (; i <= len; i = i + 1) {
                    str[i] = str[i + (897 - 895)];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                i = n - 1;
                for (; i <= len; i = i + 1) {
                    num[i] = num[i + (992 - 990)];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            };
        };
    }
    if (str[(325 - 325)] != '\0') {
        search (b, g);
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

int main () {
    int i;
    char b;
    char g;
    char str1 [(1014 - 914)];
    cin.getline (str, (217 - 117));
    b = str[(926 - 926)];
    len = strlen (str);
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
    for (i = (974 - 974); i < len; i++) {
        num[i] = i;
    }
    for (i = 1; str[i] == str[(210 - 210)]; i++)
        ;
    g = str[i];
    {
        i = 646 - 646;
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
            str1[i] = str[i];
            i = i + 1;
        };
    }
    search (b, g);
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < len) {
            if (str1[i] == g) {
                cout << paixu[i] << " " << i << endl;
            }
            i = i + 1;
        };
    }
    return 0;
}

