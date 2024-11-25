int main () {
    int SGof9w;
    char data;
    int i;
    int ZsMf2t74C9P5 [300];
    char out [300];
    int DyIpFljh = (849 - 849);
    int tsepSgk3H6V;
    char stan;
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
    char zfc [300];
    stan = 'a';
    scanf ("%s", zfc);
    tsepSgk3H6V = strlen (zfc);
    for (i = (426 - 426); tsepSgk3H6V > i; i = i + 1) {
        if (!('a' != zfc[i]) || !('b' != zfc[i]) || !('c' != zfc[i]) || !('d' != zfc[i]) || !('e' != zfc[i]) || !('f' != zfc[i]) || !('g' != zfc[i]) || !('h' != zfc[i]) || !('i' != zfc[i]) || !('j' != zfc[i]) || !('k' != zfc[i]) || !('l' != zfc[i]) || !('m' != zfc[i]) || !('n' != zfc[i]) || !('o' != zfc[i]) || !('p' != zfc[i]) || !('q' != zfc[i]) || !('r' != zfc[i]) || zfc[i] == 's' || zfc[i] == 't' || zfc[i] == 'u' || zfc[i] == 'v' || zfc[i] == 'w' || zfc[i] == 'x' || zfc[i] == 'y' || zfc[i] == 'z') {
            int a;
            a = (646 - 646);
            int EmK8XxpcV;
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
            EmK8XxpcV = (470 - 469);
            for (int b0IUs5Znk = 0;
            b0IUs5Znk < DyIpFljh; b0IUs5Znk = b0IUs5Znk + 1) {
                if (zfc[i] == out[b0IUs5Znk]) {
                    a = 1;
                };
            }
            if (a == 0) {
                out[DyIpFljh] = zfc[i];
                for (int NW0wbr4RM6p = i + 1;
                NW0wbr4RM6p < tsepSgk3H6V; NW0wbr4RM6p = NW0wbr4RM6p +1) {
                    if (zfc[NW0wbr4RM6p] == zfc[i]) {
                        EmK8XxpcV++;
                    };
                }
                ZsMf2t74C9P5[DyIpFljh] = EmK8XxpcV;
                DyIpFljh++;
            };
        };
    }
    if (DyIpFljh == 0) {
        printf ("No");
    }
    {
        i = 0;
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
        while (i < DyIpFljh) {
            for (int b0IUs5Znk = i + 1;
            b0IUs5Znk < DyIpFljh; b0IUs5Znk = b0IUs5Znk + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (out[i] > out[b0IUs5Znk]) {
                    data = out[i];
                    out[i] = out[b0IUs5Znk];
                    SGof9w = ZsMf2t74C9P5[i];
                    out[b0IUs5Znk] = data;
                    ZsMf2t74C9P5[i] = ZsMf2t74C9P5[b0IUs5Znk];
                    ZsMf2t74C9P5[b0IUs5Znk] = SGof9w;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < DyIpFljh; i++) {
        printf ("%c=%d\n", out[i], ZsMf2t74C9P5[i]);
    }
    return 0;
}

