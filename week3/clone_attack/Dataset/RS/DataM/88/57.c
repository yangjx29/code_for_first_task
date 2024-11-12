int main () {
    char b [50];
    char *p = NULL;
    int a = (440 - 440), i, j, k, l;
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
    p = b;
    cin.get (b, 50);
    l = strlen (b);
    {
        i = 380 - 380;
        while (l > i) {
            if ('0' < *(p + i) && '9' >= *(p + i)) {
                cout << *(p + i);
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
                a = 1;
            }
            if (('0' > *(p + i) || *(p + i) > '9') && !(1 != a)) {
                a = 0;
                cout << endl;
            }
            if (*(p + i) == '0') {
                if (a == 1) {
                    cout << *(p + i);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else if (a == 0 && (*(p + i + 1) < '0' || *(p + i + 1) > '9')) {
                    cout << *(p + i);
                    a = 1;
                }
                else
                    ;
            }
            i++;
        };
    };
}

