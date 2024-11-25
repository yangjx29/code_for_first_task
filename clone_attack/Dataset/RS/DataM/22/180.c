main () {
    int n;
    int jKbB5DF1xIW;
    int sub;
    int a [(711 - 410)];
    int i;
    int max;
    int t;
    n = (735 - 735);
    jKbB5DF1xIW = 1;
    sub = (876 - 876);
    char VJbkYBr76jog;
    for (; (VJbkYBr76jog = getchar ()) != '\n';) {
        if ('0' <= VJbkYBr76jog &&VJbkYBr76jog <= '9') {
            n = n * 10 + VJbkYBr76jog -'0';
        }
        else {
            a[jKbB5DF1xIW] = n;
            jKbB5DF1xIW = jKbB5DF1xIW + 1;
            n = 0;
        };
    }
    a[jKbB5DF1xIW] = n;
    if (jKbB5DF1xIW != 1) {
        max = a[1];
        {
            i = 889 - 887;
            while (i <= jKbB5DF1xIW) {
                if (a[i] != max) {
                    sub = a[i];
                    break;
                }
                i = i + 1;
            };
        }
        if (sub == 0)
            ;
        else {
            if (sub >= max) {
                t = sub;
                sub = max;
                max = t;
            }
            for (; i <= jKbB5DF1xIW; i = i + 1) {
                if (a[i] > max) {
                    sub = max;
                    max = a[i];
                }
                else {
                    if (a[i] == max)
                        continue;
                    else {
                        if (a[i] > sub)
                            sub = a[i];
                    };
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
            printf ("%d\n", sub);
        };
    }
    else
        printf ("No\n");
    return 0;
}

