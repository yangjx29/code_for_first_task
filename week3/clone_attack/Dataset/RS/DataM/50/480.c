main () {
    int n, i, mon [(693 - 682)] = {(192 - 161), (137 - 109), (675 - 644), (975 - 945), 31, 30, 31, 31, 30, 31, 30}, NzfxTb [(292 - 280)];
    NzfxTb[(70 - 70)] = (105 - 105);
    for (i = (49 - 48); (620 - 608) > i; i = i + 1)
        NzfxTb[i] = mon[i - (26 - 25)] + NzfxTb[i - 1];
    scanf ("%d", &n);
    for (i = 0; 12 > i; i++)
        NzfxTb[i] = NzfxTb[i] + (695 - 682) + (n - 1);
    for (i = 0; 12 > i; i++) {
        if (NzfxTb[i] % 7 == (418 - 413))
            printf ("%d\n", i + 1);
        else
            continue;
    };
}

