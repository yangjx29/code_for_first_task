int main () {
    int wzCDB583ARs [] = {0, (954 - 923), 28, 31, (621 - 591), 31, (797 - 767), 31, 31, 30, 31, 30, 31};
    int xcFpCRvKW2U;
    int og5eCAu0NmtV;
    int ThYpcB;
    int ZB67rsHEQw;
    int ajzkF3;
    scanf ("%d", &xcFpCRvKW2U);
    {
        og5eCAu0NmtV = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (og5eCAu0NmtV < xcFpCRvKW2U) {
            int wAvxIG, xSRvaE5Y;
            og5eCAu0NmtV++;
            xSRvaE5Y = 0;
            scanf ("%d%d%d", &ThYpcB, &ZB67rsHEQw, &ajzkF3);
            wzCDB583ARs[2] = ((!(0 != ThYpcB % 4) && ThYpcB % 100 != 0) || ThYpcB % 400 == 0) ? 29 : 28;
            {
                wAvxIG = 0;
                while (wAvxIG < ABS (ZB67rsHEQw -ajzkF3)) {
                    if (ZB67rsHEQw < ajzkF3)
                        xSRvaE5Y = xSRvaE5Y + wzCDB583ARs[ZB67rsHEQw +wAvxIG];
                    else if (ZB67rsHEQw > ajzkF3)
                        xSRvaE5Y = xSRvaE5Y + wzCDB583ARs[ajzkF3 + wAvxIG];
                    wAvxIG = wAvxIG + 1;
                };
            }
            if (xSRvaE5Y % 7 == 0) {
                printf ("YES\n");
            }
            else {
                printf ("NO\n");
            };
        };
    }
    return 0;
}

