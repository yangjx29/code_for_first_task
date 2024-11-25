char ftaTKDUk9 [(702 - 592)], work [110], out [110];
int Y9SUnL6V;

void  pick (int vY52MO86kCEy) {
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
    for (int C0fyHON5zjI = vY52MO86kCEy - (80 - 79);
    (1000 - 1000) <= C0fyHON5zjI; C0fyHON5zjI--) {
        if (!('(' != work[C0fyHON5zjI])) {
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
            for (int j = (324 - 324);
            vY52MO86kCEy - C0fyHON5zjI > j; j++) {
                if (!(')' != work[C0fyHON5zjI +j])) {
                    pick (Y9SUnL6V);
                    work[C0fyHON5zjI] = ' ';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    work[C0fyHON5zjI +j] = ' ';
                    break;
                };
            };
        };
    };
}

void  mark (int vY52MO86kCEy) {
    {
        int C0fyHON5zjI = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (C0fyHON5zjI < vY52MO86kCEy) {
            if (work[C0fyHON5zjI] == '(')
                out[C0fyHON5zjI] = '$';
            if (work[C0fyHON5zjI] == ')')
                out[C0fyHON5zjI] = '?';
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
            C0fyHON5zjI = C0fyHON5zjI +1;
        };
    };
}

int main () {
    while (cin) {
        pick (Y9SUnL6V);
        mark (Y9SUnL6V);
        cin.getline (ftaTKDUk9, 110);
        Y9SUnL6V = strlen (ftaTKDUk9);
        {
            int C0fyHON5zjI = 0;
            while (C0fyHON5zjI < Y9SUnL6V) {
                out[C0fyHON5zjI] = ' ';
                work[C0fyHON5zjI] = ftaTKDUk9[C0fyHON5zjI];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                C0fyHON5zjI++;
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
        for (int C0fyHON5zjI = 0;
        C0fyHON5zjI < Y9SUnL6V; C0fyHON5zjI++) {
            cout << ftaTKDUk9[C0fyHON5zjI];
        }
        cout << endl;
        {
            int C0fyHON5zjI = 0;
            while (C0fyHON5zjI < Y9SUnL6V) {
                cout << out[C0fyHON5zjI];
                C0fyHON5zjI++;
            };
        }
        cout << endl;
    }
    return 0;
}

