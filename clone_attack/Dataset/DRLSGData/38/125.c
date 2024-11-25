int main () {
    int ZC9HzJLRy6mw, cdCM5m, e3mjLy0SX, PRIOzpQhEmK;
    double  xDToM9hZVz [(607 - 506)], ICyTmS9, nYtm5ByGoKps, tMmrHsni, GsbpAnBy [(451 - 350)];
    scanf ("%d", &ZC9HzJLRy6mw);
    {
        e3mjLy0SX = (1490 - 619) - (1817 - 947);
        while (e3mjLy0SX <= ZC9HzJLRy6mw) {
            tMmrHsni = (284 - 284);
            scanf ("%d", &cdCM5m);
            ICyTmS9 = (387 - 387);
            {
                PRIOzpQhEmK = (803 - 802);
                for (; PRIOzpQhEmK <= cdCM5m;) {
                    scanf ("%lf", &xDToM9hZVz[PRIOzpQhEmK]);
                    ICyTmS9 = ICyTmS9 +xDToM9hZVz[PRIOzpQhEmK];
                    PRIOzpQhEmK++;
                }
            }
            nYtm5ByGoKps = ICyTmS9 / cdCM5m;
            {
                PRIOzpQhEmK = (530 - 529);
                for (; PRIOzpQhEmK <= cdCM5m;) {
                    tMmrHsni = tMmrHsni + (xDToM9hZVz[PRIOzpQhEmK] - nYtm5ByGoKps) * (xDToM9hZVz[PRIOzpQhEmK] - nYtm5ByGoKps);
                    PRIOzpQhEmK++;
                }
            }
            tMmrHsni = (double ) tMmrHsni / cdCM5m;
            tMmrHsni = sqrt (tMmrHsni);
            GsbpAnBy[e3mjLy0SX] = tMmrHsni;
            e3mjLy0SX++;
        }
    }
    for (e3mjLy0SX = (139 - 138); e3mjLy0SX <= ZC9HzJLRy6mw; e3mjLy0SX++)
        printf ("%.5lf\n", GsbpAnBy[e3mjLy0SX]);
}

