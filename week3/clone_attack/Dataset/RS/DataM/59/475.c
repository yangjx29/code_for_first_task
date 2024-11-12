char jSjH1U3TZYx [(500 - 395)] [(989 - 884)], HC8O52T6 [(818 - 713)] [(156 - 51)];

int main () {
    int cBc6A45N;
    int ZwuKeaF94Bo;
    int sum;
    int PLKfrwjAh;
    int j;
    int k;
    int p;
    int q;
    ZwuKeaF94Bo = (399 - 399);
    sum = (662 - 662);
    cin >> ZwuKeaF94Bo;
    {
        PLKfrwjAh = 517 - 516;
        while (PLKfrwjAh <= ZwuKeaF94Bo) {
            {
                j = 297 - 296;
                while (ZwuKeaF94Bo >= j) {
                    cin >> jSjH1U3TZYx[PLKfrwjAh][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
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
            PLKfrwjAh = PLKfrwjAh +1;
        };
    }
    cin >> cBc6A45N;
    {
        k = 841 - 839;
        while (k <= cBc6A45N) {
            {
                PLKfrwjAh = 983 - 982;
                while (PLKfrwjAh <= ZwuKeaF94Bo) {
                    {
                        j = 456 - 455;
                        while (j <= ZwuKeaF94Bo) {
                            HC8O52T6[PLKfrwjAh][j] = jSjH1U3TZYx[PLKfrwjAh][j];
                            j++;
                        };
                    }
                    PLKfrwjAh = PLKfrwjAh +1;
                };
            }
            for (PLKfrwjAh = (571 - 570); PLKfrwjAh <= ZwuKeaF94Bo; PLKfrwjAh = PLKfrwjAh +1) {
                j = 274 - 273;
                while (j <= ZwuKeaF94Bo) {
                    if (!('@' != jSjH1U3TZYx[PLKfrwjAh][j])) {
                        HC8O52T6[PLKfrwjAh][j] = '@';
                        {
                            p = 694 - 693;
                            while (p <= (129 - 128)) {
                                {
                                    q = 565 - 564;
                                    while (q <= (943 - 942)) {
                                        if (p == q || p == (-q))
                                            continue;
                                        if (jSjH1U3TZYx[PLKfrwjAh +p][j + q] == '#')
                                            HC8O52T6[PLKfrwjAh +p][j + q] = '#';
                                        else
                                            HC8O52T6[PLKfrwjAh +p][j + q] = '@';
                                        q = q + 1;
                                    };
                                }
                                p++;
                            };
                        };
                    }
                    j++;
                };
            }
            k = k + 1;
            {
                PLKfrwjAh = 990 - 989;
                while (PLKfrwjAh <= ZwuKeaF94Bo) {
                    {
                        j = 147 - 146;
                        while (j <= ZwuKeaF94Bo) {
                            jSjH1U3TZYx[PLKfrwjAh][j] = HC8O52T6[PLKfrwjAh][j];
                            j++;
                        };
                    }
                    PLKfrwjAh++;
                };
            };
        };
    }
    {
        PLKfrwjAh = 586 - 585;
        while (PLKfrwjAh <= ZwuKeaF94Bo) {
            {
                j = 1;
                while (j <= ZwuKeaF94Bo) {
                    if (jSjH1U3TZYx[PLKfrwjAh][j] == '@')
                        sum = sum + 1;
                    j++;
                };
            }
            PLKfrwjAh++;
        };
    }
    cout << sum << endl;
    return (216 - 216);
}

