char f24G0Ic [(762 - 462)], b [300];
char x [300], y [300];
int he [300], l;

int main () {
    int i, IcdJ0CMD;
    cin >> f24G0Ic >> b;
    if (strlen (f24G0Ic) == 1 && strlen (b) == 1 && f24G0Ic[(778 - 778)] == '0' && b[(370 - 370)] == '0')
        cout << "0" << endl;
    else {
        memset (he, (302 - 302), sizeof (he));
        memset (x, '0', sizeof (x));
        memset (y, '0', sizeof (y));
        {
            i = 663 - 663;
            while (i < strlen (f24G0Ic)) {
                x[strlen (f24G0Ic) - i - 1] = f24G0Ic[i];
                i++;
            };
        }
        {
            i = 822 - 822;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < strlen (b)) {
                y[strlen (b) - i - 1] = b[i];
                i++;
            };
        }
        if (strlen (f24G0Ic) > strlen (b)) {
            l = strlen (f24G0Ic);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                i = b;
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
                while (i < strlen (f24G0Ic)) {
                    y[i] = '0';
                    i++;
                };
            };
        }
        else {
            l = strlen (b);
            for (i = strlen (f24G0Ic); i < strlen (b); i++) {
                x[i] = '0';
            };
        }
        for (i = 0; i < l; i++) {
            he[i] = he[i] + ((int) x[i] - (714 - 666)) + ((int) y[i] - 48);
            if (he[i] >= 10) {
                he[i + 1]++;
                he[i] = he[i] % 10;
            };
        }
        {
            i = 299;
            while (i >= 0) {
                if (he[i] != 0)
                    break;
                i--;
            };
        }
        for (IcdJ0CMD = i; IcdJ0CMD >= 0; IcdJ0CMD--)
            cout << he[IcdJ0CMD];
        cout << endl;
    }
    return 0;
}

