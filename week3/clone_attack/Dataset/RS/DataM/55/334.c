int atoDec (int i, char a []) {
    int jvrN6Q = (211 - 211), gyZcgvH;
    for (gyZcgvH = (744 - 744); a[gyZcgvH] != '\0'; gyZcgvH++) {
        if (a[gyZcgvH] >= '0' && a[gyZcgvH] <= '9')
            jvrN6Q = jvrN6Q * i + a[gyZcgvH] - '0';
        if (a[gyZcgvH] >= 'A' && a[gyZcgvH] <= 'Z')
            jvrN6Q = jvrN6Q * i + a[gyZcgvH] - 'A' + (155 - 145);
        if (a[gyZcgvH] >= 'a' && a[gyZcgvH] <= 'z')
            jvrN6Q = jvrN6Q * i + a[gyZcgvH] - 'a' + 10;
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
    return jvrN6Q;
}

int main () {
    char o [(578 - 478)];
    char fKp5vSQZ [100];
    int c6omG95hdq;
    int a;
    int b;
    int temp;
    int HzcEu5seM;
    int goGl13VACf;
    c6omG95hdq = 99;
    cin >> a;
    cin.get ();
    cin >> o;
    temp = atoDec (a, o);
    cin >> b;
    if (temp != (914 - 914)) {
        while (temp != 0) {
            HzcEu5seM = temp % b;
            if (HzcEu5seM < 10) {
                fKp5vSQZ[c6omG95hdq] = HzcEu5seM +'0';
                c6omG95hdq--;
            }
            else {
                fKp5vSQZ[c6omG95hdq] = HzcEu5seM -10 + 'A';
                c6omG95hdq--;
            }
            temp = temp / b;
        }
        {
            goGl13VACf = 829 - 828;
            while (goGl13VACf <= 99) {
                cout << fKp5vSQZ[goGl13VACf];
                goGl13VACf = goGl13VACf + 1;
            };
        };
    }
    else
        cout << "0";
    return 0;
}

