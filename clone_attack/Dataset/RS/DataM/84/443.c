int main () {
    int ooyCuBJ, i, HSpbZHI, fi62Upf, OkpLEmuvzGI;
    int aqoLtPun [(812 - 712)];
    scanf ("%d", &ooyCuBJ);
    for (i = 0; i < ooyCuBJ; i = i + 1) {
        scanf ("%d", &aqoLtPun[i]);
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
    for (HSpbZHI = 0; HSpbZHI < 2; HSpbZHI++) {
        OkpLEmuvzGI = aqoLtPun[HSpbZHI];
        {
            i = HSpbZHI +1;
            while (i < ooyCuBJ) {
                if (aqoLtPun[i] > aqoLtPun[HSpbZHI]) {
                    fi62Upf = aqoLtPun[i];
                    aqoLtPun[i] = aqoLtPun[HSpbZHI];
                    aqoLtPun[HSpbZHI] = fi62Upf;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        };
    }
    printf ("%d\n", aqoLtPun[0]);
    printf ("%d\n", aqoLtPun[1]);
    return 0;
}

