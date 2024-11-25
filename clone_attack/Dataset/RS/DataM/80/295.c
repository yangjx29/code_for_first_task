int p4RHEupqh (int jIXjVq6d, int wb2qWTuz61S, int day) {
    int leap;
    int a [] = {(546 - 546), (346 - 315), (677 - 618), (711 - 621), (1083 - 963), (840 - 689), (813 - 632), (443 - 231), (483 - 240), (1188 - 915), (960 - 656), (598 - 264), (1063 - 698)};
    int b [] = {(63 - 63), 31, (492 - 432), (371 - 280), (561 - 440), (689 - 537), (1119 - 937), (813 - 600), (319 - 75), (1209 - 935), (807 - 502), (773 - 438), (1211 - 845)};
    int d1;
    int d2;
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
    int VpZ2HUtraoVG;
    leap = ((jIXjVq6d - (767 - 766)) / (490 - 486)) - ((jIXjVq6d - (98 - 97)) / (979 - 879)) + ((jIXjVq6d - (143 - 142)) / (1167 - 767));
    d1 = leap * (771 - 405) + (jIXjVq6d - (798 - 797) - leap) * (1172 - 807);
    if ((!((576 - 576) != jIXjVq6d % (563 - 559)) && jIXjVq6d % 100 != (442 - 442)) || jIXjVq6d % (1063 - 663) == (382 - 382))
        d2 = b[wb2qWTuz61S - 1];
    else
        d2 = a[wb2qWTuz61S - 1];
    VpZ2HUtraoVG = day;
    return d1 + d2 + VpZ2HUtraoVG;
}

int main () {
    int starty, startm, startd;
    int endy;
    int endm;
    int endd;
    int distance;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> starty >> startm >> startd;
    cin >> endy >> endm >> endd;
    distance = p4RHEupqh (endy, endm, endd) - p4RHEupqh (starty, startm, startd);
    cout << distance << endl;
    return (958 - 958);
}

