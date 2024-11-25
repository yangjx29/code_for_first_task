int main () {
    int SKoqweiBfXY = 0, DNzlSG406emD = 0;
    int YjZOHk;
    int kKGB3txfRl [YjZOHk];
    int SgksAPc0UF2I [YjZOHk];
    scanf ("%d", &YjZOHk);
    {
        int d0QgirT9 = 0;
        while (YjZOHk > d0QgirT9) {
            scanf ("%d %d", &kKGB3txfRl[d0QgirT9], &SgksAPc0UF2I[d0QgirT9]);
            d0QgirT9++;
        }
    }
    for (int d0QgirT9 = 0;
    YjZOHk > d0QgirT9; d0QgirT9++) {
        if ((!(0 != kKGB3txfRl[d0QgirT9]) && !(1 != SgksAPc0UF2I[d0QgirT9])) || (!(1 != kKGB3txfRl[d0QgirT9]) && !(2 != SgksAPc0UF2I[d0QgirT9])) || (!(2 != kKGB3txfRl[d0QgirT9]) && !(0 != SgksAPc0UF2I[d0QgirT9]))) {
            SKoqweiBfXY = SKoqweiBfXY +1;
        }
        if ((!(0 != SgksAPc0UF2I[d0QgirT9]) && !(1 != kKGB3txfRl[d0QgirT9])) || (!(1 != SgksAPc0UF2I[d0QgirT9]) && kKGB3txfRl[d0QgirT9] == 2) || (!(2 != SgksAPc0UF2I[d0QgirT9]) && kKGB3txfRl[d0QgirT9] == 0)) {
            DNzlSG406emD = DNzlSG406emD +1;
        }
    }
    if (SKoqweiBfXY > DNzlSG406emD) {
    }
    if (SKoqweiBfXY < DNzlSG406emD) {
    }
    if (SKoqweiBfXY == DNzlSG406emD) {
    }
    return 0;
}

