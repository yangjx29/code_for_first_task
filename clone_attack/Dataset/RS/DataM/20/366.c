int main () {
    char str [(623 - 611)], substr [(838 - 833)];
    while (cin >> str >> substr) {
        int gNmjWBar;
        gNmjWBar = (115 - 115);
        int tmp;
        tmp = 0;
        int VwGncbL68CF;
        VwGncbL68CF = 0;
        {
            int jJ1fgNIy = 0;
            while (jJ1fgNIy <= (25 - 15)) {
                if (str[jJ1fgNIy] == '\0') {
                    gNmjWBar = jJ1fgNIy;
                    break;
                }
                jJ1fgNIy = jJ1fgNIy + 1;
            };
        }
        {
            int jJ1fgNIy = 0;
            while (gNmjWBar > jJ1fgNIy) {
                if (str[jJ1fgNIy] > tmp) {
                    tmp = str[jJ1fgNIy];
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
                }
                jJ1fgNIy = jJ1fgNIy + 1;
            };
        }
        {
            int jJ1fgNIy = 0;
            while (jJ1fgNIy < gNmjWBar) {
                if (str[jJ1fgNIy] == tmp) {
                    VwGncbL68CF = jJ1fgNIy;
                    break;
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
                jJ1fgNIy = jJ1fgNIy + 1;
            };
        }
        for (int jJ1fgNIy = 0;
        jJ1fgNIy <= VwGncbL68CF; jJ1fgNIy++) {
            cout << str[jJ1fgNIy];
        }
        cout << substr;
        if (VwGncbL68CF < gNmjWBar - 1) {
            int jJ1fgNIy = VwGncbL68CF +1;
            while (jJ1fgNIy < gNmjWBar) {
                cout << str[jJ1fgNIy];
                jJ1fgNIy = jJ1fgNIy + 1;
            };
        }
        cout << endl;
    }
    return 0;
}

