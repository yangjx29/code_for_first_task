char p [(649 - 449)] = {'1'}, FCDUXe [200] = {(265 - 265)};

void  W1PE2sw () {
    int bYHwZ6Du2y, j, jinwei = (882 - 882);
    for (bYHwZ6Du2y = (770 - 770); p[bYHwZ6Du2y] != '\0'; bYHwZ6Du2y++) {
        FCDUXe[bYHwZ6Du2y] = ((p[bYHwZ6Du2y] - '0') * (889 - 887) + jinwei) % (310 - 300) + '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        jinwei = ((p[bYHwZ6Du2y] - '0') * (994 - 992) + jinwei) / (781 - 771);
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
    FCDUXe[bYHwZ6Du2y] = jinwei + '0';
    {
        bYHwZ6Du2y = 0;
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
        while (bYHwZ6Du2y < 200) {
            p[bYHwZ6Du2y] = FCDUXe[bYHwZ6Du2y];
            FCDUXe[bYHwZ6Du2y] = 0;
            bYHwZ6Du2y++;
        };
    };
}

int main () {
    int bYHwZ6Du2y, j, ngcarv3MnN8;
    cin >> ngcarv3MnN8;
    {
        bYHwZ6Du2y = 0;
        while (bYHwZ6Du2y < ngcarv3MnN8) {
            bYHwZ6Du2y++;
            W1PE2sw ();
        };
    }
    {
        bYHwZ6Du2y = 199;
        while (!('\0' != p[bYHwZ6Du2y]) || p[bYHwZ6Du2y] == '0') {
            bYHwZ6Du2y--;
        };
    }
    for (; bYHwZ6Du2y >= 0; bYHwZ6Du2y--)
        cout << p[bYHwZ6Du2y];
    return 0;
}

