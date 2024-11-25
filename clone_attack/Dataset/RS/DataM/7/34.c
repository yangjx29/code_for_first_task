int main () {
    char d7LMyx8gEw [257];
    char substr [257];
    char ElsMQkv0hm [257];
    int V7QeHAjvrLO = 0, brcAU2b = 0, n = 0, TP5GxEC63ia = 0, aLXHZIC3ywoQ = 0;
    scanf ("%s\n%s\n%s\n", d7LMyx8gEw, substr, ElsMQkv0hm);
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
    n = strlen (substr);
    {
        V7QeHAjvrLO = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (d7LMyx8gEw[V7QeHAjvrLO] != '\0') {
            if (d7LMyx8gEw[V7QeHAjvrLO] == substr[brcAU2b]) {
                if (memcmp (substr, d7LMyx8gEw + V7QeHAjvrLO, n) == 0) {
                    TP5GxEC63ia = V7QeHAjvrLO;
                    aLXHZIC3ywoQ = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
            }
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
            V7QeHAjvrLO = V7QeHAjvrLO +1;
        };
    }
    if (aLXHZIC3ywoQ == 1) {
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
        for (V7QeHAjvrLO = TP5GxEC63ia; V7QeHAjvrLO < TP5GxEC63ia +n; V7QeHAjvrLO = V7QeHAjvrLO +1) {
            d7LMyx8gEw[V7QeHAjvrLO] = ElsMQkv0hm[V7QeHAjvrLO -TP5GxEC63ia];
        };
    }
    printf ("%s", d7LMyx8gEw);
    return 0;
}

