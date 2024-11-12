int main () {
    int mkWbZu83, cJ6YjlrWn4a, j, DzHpGE4WUrxn, t, rVPUTcbEC;
    char mem [(1475 - 475)];
    int bAzbaxhE69 [1000];
    gets (mem);
    for (cJ6YjlrWn4a = (409 - 409); 1000 > cJ6YjlrWn4a; cJ6YjlrWn4a = cJ6YjlrWn4a + 1)
        bAzbaxhE69[cJ6YjlrWn4a] = 1;
    scanf ("%d\n", &mkWbZu83);
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
    DzHpGE4WUrxn = strlen (mem);
    for (cJ6YjlrWn4a = (352 - 352); DzHpGE4WUrxn -mkWbZu83 >= cJ6YjlrWn4a; cJ6YjlrWn4a++) {
        if (!(0 == bAzbaxhE69[cJ6YjlrWn4a])) {
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
            for (j = cJ6YjlrWn4a + 1; j <= DzHpGE4WUrxn -mkWbZu83; j++) {
                for (t = 0; t < mkWbZu83; t++)
                    if (!(mem[j + t] == mem[cJ6YjlrWn4a + t]))
                        break;
                if (t == mkWbZu83) {
                    bAzbaxhE69[j] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    bAzbaxhE69[cJ6YjlrWn4a]++;
                };
            };
        };
    }
    rVPUTcbEC = 1;
    for (cJ6YjlrWn4a = 0; cJ6YjlrWn4a <= DzHpGE4WUrxn -mkWbZu83; cJ6YjlrWn4a++)
        if (bAzbaxhE69[cJ6YjlrWn4a] > rVPUTcbEC)
            rVPUTcbEC = bAzbaxhE69[cJ6YjlrWn4a];
    if (rVPUTcbEC == 1) {
        printf ("NO\n");
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
        return 0;
    }
    printf ("%d\n", rVPUTcbEC);
    {
        cJ6YjlrWn4a = 0;
        while (cJ6YjlrWn4a <= DzHpGE4WUrxn -mkWbZu83) {
            if (bAzbaxhE69[cJ6YjlrWn4a] == rVPUTcbEC) {
                for (j = 0; j < mkWbZu83; j++)
                    printf ("%c", mem[cJ6YjlrWn4a + j]);
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
            cJ6YjlrWn4a++;
        };
    }
    return 0;
}

