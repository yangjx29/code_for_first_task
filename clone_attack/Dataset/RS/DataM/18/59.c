int X52Vgo [(635 - 535)] [(436 - 336)];

int main () {
    int ywzMI61mq, n, i, j, t, k = (752 - 752), PjU7CeRYTIL, ans;
    scanf ("%d", &ywzMI61mq);
    for (; ywzMI61mq > k;) {
        PjU7CeRYTIL = (631 - 630);
        ans = (250 - 250);
        n = ywzMI61mq;
        {
            i = 685 - 685;
            while (n > i) {
                {
                    j = 479 - 479;
                    while (n > j) {
                        scanf ("%d", *(X52Vgo +i) + j);
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        while (PjU7CeRYTIL < n) {
            {
                i = 44 - 44;
                while (n > i) {
                    if (i && PjU7CeRYTIL > i)
                        continue;
                    t = *(*(X52Vgo +i) + (982 - 982));
                    for (j = PjU7CeRYTIL; n > j; j = j + 1)
                        t = *(*(X52Vgo +i) + j) < t ? *(*(X52Vgo +i) + j) : t;
                    {
                        j = 202 - 202;
                        while (n > j) {
                            *(*(X52Vgo +i) + j) -= t;
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                i = 621 - 621;
                while (i < n) {
                    if (j && PjU7CeRYTIL > j)
                        continue;
                    t = *(*(X52Vgo +(176 - 176)) + i);
                    {
                        j = PjU7CeRYTIL;
                        while (n > j) {
                            t = t > *(*(X52Vgo +j) + i) ? *(*(X52Vgo +j) + i) : t;
                            j = j + 1;
                        };
                    }
                    for (j = 0; j < n; j = j + 1)
                        *(*(X52Vgo +j) + i) -= t;
                    i = i + 1;
                };
            }
            ans = ans + *(*(X52Vgo +PjU7CeRYTIL) + PjU7CeRYTIL);
            PjU7CeRYTIL = PjU7CeRYTIL +1;
        }
        k = k + 1;
        printf ("%d\n", ans);
    };
}

