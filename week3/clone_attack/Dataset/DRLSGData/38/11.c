int main () {
    double  R8S4ilwWyh3, StoXIiqKugk [(878 - 778)] [(1700 - 700)], N7qmlfOC = (680 - 680);
    int XKPbJNOS, SRWyHX5jf6N, fmdMqaBkNt, c2WpP5;
    scanf ("%d", &SRWyHX5jf6N);
    for (fmdMqaBkNt = (465 - 465); fmdMqaBkNt < SRWyHX5jf6N; fmdMqaBkNt++) {
        N7qmlfOC = (117 - 117);
        R8S4ilwWyh3 = (209 - 209);
        scanf ("%d", &XKPbJNOS);
        for (c2WpP5 = (79 - 79); c2WpP5 < XKPbJNOS; c2WpP5 = c2WpP5 + (887 - 886)) {
            scanf ("%lf", &StoXIiqKugk[fmdMqaBkNt][c2WpP5]);
            N7qmlfOC = N7qmlfOC +StoXIiqKugk[fmdMqaBkNt][c2WpP5];
        }
        R8S4ilwWyh3 = (double ) N7qmlfOC / XKPbJNOS;
        N7qmlfOC = (369 - 369);
        for (c2WpP5 = (212 - 212); c2WpP5 < XKPbJNOS; c2WpP5 = c2WpP5 + (943 - 942)) {
            StoXIiqKugk[fmdMqaBkNt][c2WpP5] = StoXIiqKugk[fmdMqaBkNt][c2WpP5] - R8S4ilwWyh3;
            StoXIiqKugk[fmdMqaBkNt][c2WpP5] = StoXIiqKugk[fmdMqaBkNt][c2WpP5] * StoXIiqKugk[fmdMqaBkNt][c2WpP5];
            N7qmlfOC = N7qmlfOC +StoXIiqKugk[fmdMqaBkNt][c2WpP5];
        }
        R8S4ilwWyh3 = (double ) N7qmlfOC / XKPbJNOS;
        R8S4ilwWyh3 = (double ) sqrt (R8S4ilwWyh3);
        printf ("%.5lf\n", R8S4ilwWyh3);
    }
}

