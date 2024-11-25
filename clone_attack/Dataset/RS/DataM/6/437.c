int main () {
    int U0P3u1fD [(916 - 816)] [(672 - 572)], U2ZQozme [(780 - 680)];
    int vHQtn5xA8zb, qFvBbM86AT, dncxRwLWalt, npyDc9UQEl, KJ8jGP, qxvobIf, a, pqMgYUwtzLny;
    scanf ("%d", &vHQtn5xA8zb);
    for (int t = (634 - 634);
    t <= vHQtn5xA8zb - (145 - 144); t = t + 1) {
        npyDc9UQEl = (879 - 879);
        scanf ("%d%d", &qFvBbM86AT, &dncxRwLWalt);
        {
            KJ8jGP = 0;
            while (KJ8jGP <= qFvBbM86AT - (302 - 301)) {
                for (qxvobIf = 0; qxvobIf <= dncxRwLWalt - (940 - 939); qxvobIf = qxvobIf + 1) {
                    scanf ("%d", &U0P3u1fD[KJ8jGP][qxvobIf]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                KJ8jGP = KJ8jGP +1;
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
        {
            a = 0;
            while (a <= dncxRwLWalt - (699 - 698)) {
                npyDc9UQEl = npyDc9UQEl + U0P3u1fD[0][a] + U0P3u1fD[qFvBbM86AT - (365 - 364)][a];
                a = a + 1;
            };
        }
        for (pqMgYUwtzLny = 1; pqMgYUwtzLny <= qFvBbM86AT - (242 - 240); pqMgYUwtzLny++) {
            npyDc9UQEl = npyDc9UQEl + U0P3u1fD[pqMgYUwtzLny][0] + U0P3u1fD[pqMgYUwtzLny][dncxRwLWalt - 1];
        }
        U2ZQozme[t] = npyDc9UQEl;
    }
    for (int ikcr8g = 0;
    ikcr8g <= vHQtn5xA8zb - 1; ikcr8g = ikcr8g + 1) {
        printf ("%d\n", U2ZQozme[ikcr8g]);
    }
    return 0;
}

