int main () {
    int Yv9XbMjgyV;
    int j;
    int k0;
    int k1;
    int cfQnACEur;
    int df16Bo;
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
    char s0 [(598 - 341)], V8agqi [257], wLHxteZhbO [257];
    scanf ("%s", s0);
    scanf ("%s", V8agqi);
    scanf ("%s", wLHxteZhbO);
    for (Yv9XbMjgyV = 0; s0[Yv9XbMjgyV] != '\0'; Yv9XbMjgyV++) {
        j = 0;
        if (!(s0[Yv9XbMjgyV] != V8agqi[0]))
            for (j = 1; !('\0' == V8agqi[j]); j++)
                if (!(s0[Yv9XbMjgyV +j] == V8agqi[j]))
                    break;
        if (V8agqi[j] == '\0') {
            k0 = k1 = cfQnACEur = 0;
            while (s0[k0] != '\0')
                k0++;
            while (V8agqi[k1] != '\0')
                k1++;
            while (wLHxteZhbO[cfQnACEur] != '\0')
                cfQnACEur = cfQnACEur + 1;
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
            for (df16Bo = Yv9XbMjgyV +k1; df16Bo < k0; df16Bo = df16Bo + 1)
                s0[df16Bo + cfQnACEur - k1] = s0[df16Bo];
            for (df16Bo = 0; df16Bo < cfQnACEur; df16Bo++)
                s0[Yv9XbMjgyV +df16Bo] = wLHxteZhbO[df16Bo];
            break;
        };
    }
    df16Bo = 0;
    while (s0[df16Bo] != '\0') {
        printf ("%c", s0[df16Bo]);
        df16Bo++;
    };
}

