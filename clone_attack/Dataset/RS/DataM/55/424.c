int xqd1jP7hym2x (char a) {
    int r2IN4Twpo;
    if (a >= '0' && a <= '9')
        r2IN4Twpo = a - '0';
    else if (a >= 'a' && a <= 'z')
        r2IN4Twpo = a - 'a' + 10;
    else
        r2IN4Twpo = a - 'A' + 10;
    return r2IN4Twpo;
}

void  xVMxE8aHr6 (int a, char AxjcuNO [], int b) {
    int r2IN4Twpo = (376 - 376), i, j = (891 - 890), d, bcEqW4CR57fp, RGUqRIYkr [(757 - 657)];
    char c [100];
    {
        i = 0;
        while (AxjcuNO[i] != ' ') {
            RGUqRIYkr[i] = xqd1jP7hym2x (AxjcuNO[i]);
            i = i + 1;
        };
    }
    bcEqW4CR57fp = i;
    {
        i = bcEqW4CR57fp - 1;
        while (i >= 0) {
            r2IN4Twpo = r2IN4Twpo + RGUqRIYkr[i] * j;
            j = j * a;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i = i - 1;
        };
    }
    if (r2IN4Twpo == 0)
        cout << "0";
    else {
        i = 0;
        while (r2IN4Twpo > 0) {
            d = r2IN4Twpo % b;
            r2IN4Twpo = r2IN4Twpo / b;
            if (d >= 10) {
                c[i] = 'A' + d - 10;
            }
            else
                c[i] = d + '0';
            i = i + 1;
        }
        {
            i--;
            while (i >= 0) {
                cout << c[i];
                i--;
            };
        };
    };
}

int main () {
    char AxjcuNO [100];
    int a, b, i, RGUqRIYkr [100];
    cin >> a;
    cin.get ();
    for (i = 0; (AxjcuNO[i] = cin.get ()) != ' ';)
        i = i + 1;
    cin >> b;
    xVMxE8aHr6 (a, AxjcuNO, b);
    return 0;
}

