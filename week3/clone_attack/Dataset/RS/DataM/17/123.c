int vjWJc3EmA9t;

void  FgUtLVwQ (char k3oWVStlCMK []) {
    int P0ReiwFBQyI, gdYUJ9w;
    vjWJc3EmA9t = strlen (k3oWVStlCMK);
    {
        P0ReiwFBQyI = 573 - 572;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (P0ReiwFBQyI >= (47 - 47)) {
            if (k3oWVStlCMK[P0ReiwFBQyI] == '(') {
                FgUtLVwQ (k3oWVStlCMK);
                {
                    gdYUJ9w = P0ReiwFBQyI +1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (gdYUJ9w < vjWJc3EmA9t) {
                        if (k3oWVStlCMK[gdYUJ9w] == ')') {
                            k3oWVStlCMK[P0ReiwFBQyI] = k3oWVStlCMK[gdYUJ9w] = ' ';
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            break;
                        }
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
                        gdYUJ9w++;
                    };
                }
                if (k3oWVStlCMK[gdYUJ9w] == '\0') {
                    k3oWVStlCMK[P0ReiwFBQyI] = '$';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    };
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
            P0ReiwFBQyI--;
        };
    };
}

int main () {
    int P0ReiwFBQyI;
    char kNGflwLZy [(699 - 589)] = {'\0'};
    while (cin.getline (kNGflwLZy, (837 - 736))) {
        FgUtLVwQ (kNGflwLZy);
        cout << kNGflwLZy << endl;
        {
            P0ReiwFBQyI = 141 - 141;
            while (kNGflwLZy[P0ReiwFBQyI] != '\0') {
                if (kNGflwLZy[P0ReiwFBQyI] != '(' && kNGflwLZy[P0ReiwFBQyI] != ')')
                    kNGflwLZy[P0ReiwFBQyI] = ' ';
                P0ReiwFBQyI++;
            };
        }
        {
            P0ReiwFBQyI = 248 - 248;
            while (kNGflwLZy[P0ReiwFBQyI] != '\0') {
                if (kNGflwLZy[P0ReiwFBQyI] == ')')
                    kNGflwLZy[P0ReiwFBQyI] = '?';
                P0ReiwFBQyI++;
            };
        }
        cout << kNGflwLZy << endl;
    }
    return 0;
}

