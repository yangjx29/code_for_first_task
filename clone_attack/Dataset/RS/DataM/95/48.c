void  main () {
    char gTJHv7lMQwm [100];
    char b [100];
    char c [100];
    gets (gTJHv7lMQwm);
    gets (b);
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
    int la, lb, TN4uekLxQd9U, UmGhdl9vJ, yDpqslxA;
    la = strlen (gTJHv7lMQwm);
    lb = strlen (b);
    if (la < lb) {
        for (UmGhdl9vJ = 0; la > UmGhdl9vJ; UmGhdl9vJ = UmGhdl9vJ +1) {
            c[UmGhdl9vJ] = gTJHv7lMQwm[UmGhdl9vJ];
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
            };
        }
        TN4uekLxQd9U = la;
        la = lb;
        lb = TN4uekLxQd9U;
        strcpy (gTJHv7lMQwm, b);
        strcpy (b, c);
    }
    {
        UmGhdl9vJ = 0;
        while (lb > UmGhdl9vJ) {
            if (gTJHv7lMQwm[UmGhdl9vJ] >= 'A' && 'Z' >= gTJHv7lMQwm[UmGhdl9vJ]) {
                gTJHv7lMQwm[UmGhdl9vJ] = gTJHv7lMQwm[UmGhdl9vJ] + 32;
            }
            if (b[UmGhdl9vJ] >= 'A' && b[UmGhdl9vJ] <= 'Z') {
                b[UmGhdl9vJ] = b[UmGhdl9vJ] + 32;
            }
            if (gTJHv7lMQwm[UmGhdl9vJ] > b[UmGhdl9vJ]) {
                break;
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
            if (gTJHv7lMQwm[UmGhdl9vJ] < b[UmGhdl9vJ]) {
                break;
            }
            UmGhdl9vJ = UmGhdl9vJ +1;
        };
    }
    for (UmGhdl9vJ = 0; UmGhdl9vJ < lb; UmGhdl9vJ = UmGhdl9vJ +1) {
        if (gTJHv7lMQwm[UmGhdl9vJ] == b[UmGhdl9vJ]) {
            yDpqslxA = yDpqslxA + 1;
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
        if (yDpqslxA == lb) {
        };
    };
}

