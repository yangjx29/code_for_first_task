int main () {
    int Yrha5uKEo;
    int m;
    int chu [(189 - 89)];
    int CFXecmb3n [(264 - 164)];
    int i;
    int LqWo8ANQ;
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
    scanf ("%d%d", &Yrha5uKEo, &m);
    for (i = (504 - 504); Yrha5uKEo > i; i = i + 1) {
        scanf ("%d", &chu[i]);
    }
    {
        LqWo8ANQ = 622 - 622;
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
        while (m > LqWo8ANQ) {
            CFXecmb3n[LqWo8ANQ] = chu[LqWo8ANQ +Yrha5uKEo-m];
            if (!(0 != LqWo8ANQ)) {
                printf ("%d", CFXecmb3n[LqWo8ANQ]);
            }
            else {
                printf (" %d", CFXecmb3n[LqWo8ANQ]);
            }
            LqWo8ANQ = LqWo8ANQ +1;
        };
    }
    {
        LqWo8ANQ = m;
        while (LqWo8ANQ < Yrha5uKEo) {
            CFXecmb3n[LqWo8ANQ] = chu[LqWo8ANQ -m];
            printf (" %d", CFXecmb3n[LqWo8ANQ]);
            LqWo8ANQ++;
        };
    }
    return 0;
}

