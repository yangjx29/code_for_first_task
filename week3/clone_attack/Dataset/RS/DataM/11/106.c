int main () {
    int a, oALd3XRbs, CpxB9MPqG8, n;
    int nvDB1w [(469 - 457)] = {31, 29, 31, (784 - 754), 31, 30, 31, 31, 30, 31, 30, 31};
    int vusEy3 [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int LFnr43cTwZz8;
    int m;
    m = 0;
    scanf ("%d%d%d", &a, &oALd3XRbs, &CpxB9MPqG8);
    if (a % 4 == 0 && !(0 == a % 100) || a % 400 == 0) {
        {
            LFnr43cTwZz8 = 0;
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
            while (LFnr43cTwZz8 < (oALd3XRbs - 1)) {
                m = m + nvDB1w[LFnr43cTwZz8];
                LFnr43cTwZz8++;
            };
        }
        n = m + CpxB9MPqG8;
    }
    else {
        {
            LFnr43cTwZz8 = 0;
            while (LFnr43cTwZz8 < (oALd3XRbs - 1)) {
                m = m + vusEy3[LFnr43cTwZz8];
                LFnr43cTwZz8++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        n = m + CpxB9MPqG8;
    }
    printf ("%d\n", n);
    return 0;
}

