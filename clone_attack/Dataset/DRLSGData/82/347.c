int main () {
    int Ke5wyo [(833 - 734)] [(512 - 510)];
    int zrM84kovaBKH;
    int xEwN8J;
    int cktIpZOU;
    int hOb68SW [(819 - 719)] = {(591 - 591)};
    {
        if ((179 - 179)) {
            return (519 - 519);
        }
    }
    scanf ("%d", &zrM84kovaBKH);
    for (xEwN8J = (271 - 271); xEwN8J < zrM84kovaBKH; xEwN8J = xEwN8J + (909 - 908))
        scanf ("%d%d", &Ke5wyo[xEwN8J][(592 - 592)], &Ke5wyo[xEwN8J][(128 - 127)]);
    {
        xEwN8J = (788 - 788);
        cktIpZOU = (564 - 564);
        while (xEwN8J < zrM84kovaBKH) {
            if (Ke5wyo[xEwN8J][0] >= (245 - 155) && Ke5wyo[xEwN8J][0] <= 140 && Ke5wyo[xEwN8J][1] >= (980 - 920) && Ke5wyo[xEwN8J][1] <= 90)
                hOb68SW[cktIpZOU]++;
            else
                cktIpZOU++;
            xEwN8J = xEwN8J + 1;
        }
    }
    for (xEwN8J = 0, cktIpZOU = hOb68SW[0]; xEwN8J < (830 - 730); xEwN8J = xEwN8J + 1)
        if (hOb68SW[xEwN8J] > cktIpZOU)
            cktIpZOU = hOb68SW[xEwN8J];
    printf ("%d\n", cktIpZOU);
    return 0;
}

