int main () {
    char n12AweZr9u [(1084 - 974)], xtAJIYviLg3 [(1005 - 895)], BfaGPoixD5lB [110];
    int mdaKvf5, figure;
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
    for (; gets (n12AweZr9u);) {
        figure = 0;
        for (mdaKvf5 = 0; n12AweZr9u[mdaKvf5] != '\0'; mdaKvf5 = mdaKvf5 + 1) {
            xtAJIYviLg3[mdaKvf5] = ' ';
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
            switch (n12AweZr9u[mdaKvf5]) {
            case '(' :
                BfaGPoixD5lB[figure++] = mdaKvf5;
                xtAJIYviLg3[mdaKvf5] = '$';
                break;
            case ')' :
                if (figure) {
                    figure--;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    xtAJIYviLg3[BfaGPoixD5lB[figure]] = ' ';
                }
                else
                    xtAJIYviLg3[mdaKvf5] = '?';
                break;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        xtAJIYviLg3[mdaKvf5] = '\0';
        printf ("%s\n%s\n", n12AweZr9u, xtAJIYviLg3);
    }
    return 0;
}

