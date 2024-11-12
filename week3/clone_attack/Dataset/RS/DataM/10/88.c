int fYZLebWH8 (int xHS6NVakZgG2 [(783 - 757)]) {
    int l, uDx8qsb;
    {
        l = 524 - 523;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l < (711 - 686)) {
            {
                uDx8qsb = 698 - 697;
                while (uDx8qsb < (593 - 567)) {
                    if (xHS6NVakZgG2[uDx8qsb] > xHS6NVakZgG2[l]) {
                        int Z4I7bXMfu3l;
                        Z4I7bXMfu3l = xHS6NVakZgG2[l];
                        xHS6NVakZgG2[l] = xHS6NVakZgG2[uDx8qsb];
                        xHS6NVakZgG2[uDx8qsb] = Z4I7bXMfu3l;
                    }
                    uDx8qsb = uDx8qsb + 1;
                };
            }
            l = l + 1;
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
    return xHS6NVakZgG2[(856 - 855)];
}

int main () {
    int KoQABd [(931 - 905)] = {(361 - 361)}, xHS6NVakZgG2 [(752 - 726)] = {(571 - 571)}, i, Yu8T7NkXVbrq, MCZ8iql, l, uDx8qsb;
    xHS6NVakZgG2[(270 - 269)] = (856 - 855);
    scanf ("%d", &MCZ8iql);
    scanf ("%d", &KoQABd[(835 - 834)]);
    {
        i = 2;
        while (i <= MCZ8iql) {
            scanf (" %d", &KoQABd[i]);
            xHS6NVakZgG2[i] = (486 - 485);
            i++;
        };
    }
    {
        Yu8T7NkXVbrq = MCZ8iql -1;
        while (Yu8T7NkXVbrq > (57 - 57)) {
            int Z4I7bXMfu3l;
            int Mqkpu3H [26] = {(906 - 906)};
            Z4I7bXMfu3l = 1;
            {
                l = Yu8T7NkXVbrq +1;
                while (l <= MCZ8iql) {
                    if (KoQABd[Yu8T7NkXVbrq] >= KoQABd[l]) {
                        Mqkpu3H[Z4I7bXMfu3l] = xHS6NVakZgG2[l];
                        Z4I7bXMfu3l = Z4I7bXMfu3l +1;
                    }
                    l = l + 1;
                };
            }
            uDx8qsb = fYZLebWH8 (Mqkpu3H);
            xHS6NVakZgG2[Yu8T7NkXVbrq] = xHS6NVakZgG2[Yu8T7NkXVbrq] + uDx8qsb;
            Yu8T7NkXVbrq--;
        };
    }
    printf ("%d\n", fYZLebWH8 (xHS6NVakZgG2));
    return 0;
}

