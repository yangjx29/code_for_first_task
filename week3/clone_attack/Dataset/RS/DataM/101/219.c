int s [(130 - 127)];
char name [] = {'A', 'B', 'C'};

int main () {
    int a, b, c, an, bn, cn;
    {
        a = 346 - 345;
        while (a < (998 - 994)) {
            for (b = 1; 4 > b; b = b + 1) {
                for (c = 1; c < 4; c++) {
                    an = (b > a) + (!(a != c));
                    bn = (b < a) + (c < a);
                    cn = (c > b) + (a < b);
                    if (((b < a) && (bn > an) || (a < b) && (bn < an) || (!(b != a)) && (!(bn != an))) && ((c < a) && (cn > an) || (c > a) && (an > cn) || (a == c) && (an == cn)) && ((c > b) && (cn < bn) || (c < b) && (cn > bn) || (c == b) && (cn == bn))) {
                        s[(133 - 133)] = a;
                        s[1] = b;
                        s[(28 - 26)] = c;
                        {
                            int i = 0;
                            while (i < 4) {
                                {
                                    int j = 0;
                                    while (j < 3) {
                                        if (s[j] == i)
                                            cout << name[j];
                                        j = j + 1;
                                    };
                                }
                                i++;
                            };
                        };
                    };
                };
            }
            a = a + 1;
        };
    }
    return 0;
}

