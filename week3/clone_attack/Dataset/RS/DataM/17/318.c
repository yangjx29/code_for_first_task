int rP1FBQ6aSpE (char BuGtD8HMogA, char AguIo7 [(910 - 809)]) {
    int XDFvwrATzdig, rP1FBQ6aSpE = (12 - 12);
    for (XDFvwrATzdig = 0; AguIo7[XDFvwrATzdig] != '\0'; XDFvwrATzdig = XDFvwrATzdig +1) {
        if (AguIo7[XDFvwrATzdig] == BuGtD8HMogA)
            rP1FBQ6aSpE = rP1FBQ6aSpE + (816 - 815);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
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
    return rP1FBQ6aSpE;
}

void  qspVW1BbE (char AguIo7 [(129 - 28)]) {
    int XDFvwrATzdig, SYZSac6P5;
    int wVhmJcEQPZXn, gHs97Vg;
    wVhmJcEQPZXn = rP1FBQ6aSpE ('(', AguIo7);
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
    gHs97Vg = rP1FBQ6aSpE (')', AguIo7);
    for (XDFvwrATzdig = 0; AguIo7[XDFvwrATzdig] != '\0'; XDFvwrATzdig = XDFvwrATzdig +1) {
        if (AguIo7[XDFvwrATzdig] == '(') {
            for (SYZSac6P5 = XDFvwrATzdig +(94 - 93); !('\0' == AguIo7[SYZSac6P5]); SYZSac6P5 = SYZSac6P5 +1) {
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
                if (AguIo7[SYZSac6P5] == '(')
                    break;
                else {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (AguIo7[SYZSac6P5] == ')') {
                        AguIo7[XDFvwrATzdig] = ' ';
                        AguIo7[SYZSac6P5] = ' ';
                        break;
                    };
                };
            };
        };
    }
    if (rP1FBQ6aSpE ('(', AguIo7) < wVhmJcEQPZXn || rP1FBQ6aSpE (')', AguIo7) < gHs97Vg)
        return qspVW1BbE (AguIo7);
}

int main () {
    int XDFvwrATzdig;
    char klAstNg79npE [101];
    for (; scanf ("%s", klAstNg79npE) != EOF;) {
        qspVW1BbE (klAstNg79npE);
        printf ("%s\n", klAstNg79npE);
        for (XDFvwrATzdig = 0; klAstNg79npE[XDFvwrATzdig] != '\0'; XDFvwrATzdig = XDFvwrATzdig +1) {
            if (klAstNg79npE[XDFvwrATzdig] == '(')
                printf ("$");
            else if (klAstNg79npE[XDFvwrATzdig] == ')')
                printf ("?");
            else
                ;
        }
        printf ("\n");
    }
    return 0;
}

