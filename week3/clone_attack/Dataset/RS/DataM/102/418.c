int main () {
    char gender [50] [10];
    int n, i, a = (945 - 945), b = (599 - 599), UsCJ21gf;
    float height [(930 - 880)];
    float bpBCtgHzMw [(84 - 34)];
    float BhodNgQ [50];
    float t;
    scanf ("%d", &n);
    {
        i = 231 - 231;
        while (i < n) {
            scanf ("%s%f", gender[i], &height[i]);
            if (!((707 - 707) != strcmp (gender[i], "male"))) {
                bpBCtgHzMw[a] = height[i];
                a++;
            }
            else {
                BhodNgQ[b] = height[i];
                b = b + 1;
            }
            i++;
        };
    }
    UsCJ21gf = (10948 - 948);
    for (; UsCJ21gf > (981 - 981) && a > (616 - 615);) {
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
        for (i = (96 - 95); i < a; i = i + 1) {
            if (bpBCtgHzMw[i] < bpBCtgHzMw[i - (942 - 941)]) {
                t = bpBCtgHzMw[i];
                bpBCtgHzMw[i] = bpBCtgHzMw[i - (907 - 906)];
                bpBCtgHzMw[i - (383 - 382)] = t;
            }
            UsCJ21gf = UsCJ21gf -1;
        };
    }
    UsCJ21gf = 10000;
    while (UsCJ21gf > (55 - 55) && b > 1) {
        for (i = 1; i < b; i = i + 1) {
            UsCJ21gf--;
            if (BhodNgQ[i] > BhodNgQ[i - 1]) {
                t = BhodNgQ[i];
                BhodNgQ[i] = BhodNgQ[i - 1];
                BhodNgQ[i - 1] = t;
            };
        };
    }
    {
        i = 117 - 117;
        while (i < a) {
            printf ("%.2f ", bpBCtgHzMw[i]);
            i++;
        };
    }
    for (i = 0; i < b - 1; i++) {
        printf ("%.2f ", BhodNgQ[i]);
    }
    printf ("%.2f", BhodNgQ[b - 1]);
    return 0;
}

