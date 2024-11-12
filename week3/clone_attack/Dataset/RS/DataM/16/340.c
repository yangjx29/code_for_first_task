int main () {
    int JRkOSoFYJBQ, m62ADjrN, Judna2qTRf, d, e, f;
    scanf ("%d", &JRkOSoFYJBQ);
    if (JRkOSoFYJBQ >= 0 && JRkOSoFYJBQ < 10) {
        printf ("%d\n", JRkOSoFYJBQ);
    }
    else {
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
        if (JRkOSoFYJBQ >= 10 && 100 > JRkOSoFYJBQ) {
            m62ADjrN = JRkOSoFYJBQ % 10;
            Judna2qTRf = (JRkOSoFYJBQ -m62ADjrN) / 10;
            d = m62ADjrN * 10 + Judna2qTRf;
            printf ("%02d\n", d);
        }
        else if (JRkOSoFYJBQ >= 100 && JRkOSoFYJBQ < 1000) {
            m62ADjrN = JRkOSoFYJBQ % 10;
            Judna2qTRf = (JRkOSoFYJBQ -m62ADjrN) % 100;
            d = (JRkOSoFYJBQ -m62ADjrN - Judna2qTRf) / 100;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            e = m62ADjrN * 100 + Judna2qTRf +d;
            printf ("%03d\n", e);
        }
        else if (JRkOSoFYJBQ >= 1000 && JRkOSoFYJBQ < 10000) {
            m62ADjrN = JRkOSoFYJBQ % 10;
            Judna2qTRf = (JRkOSoFYJBQ -m62ADjrN) % 100;
            d = (JRkOSoFYJBQ -m62ADjrN - Judna2qTRf) % 1000;
            e = (JRkOSoFYJBQ -m62ADjrN - Judna2qTRf -d) / 1000;
            f = m62ADjrN * 1000 + Judna2qTRf *10 + d / 10 + e;
            printf ("%04d\n", f);
        };
    }
    printf ("\n");
    return 0;
}

