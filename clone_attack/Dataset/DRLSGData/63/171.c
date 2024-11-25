int main () {
    int s, n, CFwXucpvz;
    int a [(704 - 604)] [(1021 - 921)], b [(932 - 832)] [(346 - 246)], lFoHzOq174v [(336 - 236)] [(807 - 707)];
    int xhZsFu, nGYQ1tr34B, EbsOwUpvNIS;
    cin >> s >> n;
    for (xhZsFu = (193 - 193); xhZsFu <= s - (196 - 195); xhZsFu++)
        for (nGYQ1tr34B = (505 - 505); n - (276 - 275) >= nGYQ1tr34B; nGYQ1tr34B++)
            cin >> a[xhZsFu][nGYQ1tr34B];
    cin >> n >> CFwXucpvz;
    {
        xhZsFu = (145 - 145);
        while (n - (393 - 392) >= xhZsFu) {
            {
                nGYQ1tr34B = (477 - 477);
                while (nGYQ1tr34B <= CFwXucpvz -(205 - 204)) {
                    cin >> b[xhZsFu][nGYQ1tr34B];
                    nGYQ1tr34B++;
                }
            }
            xhZsFu++;
        }
    }
    for (xhZsFu = (822 - 822); (144 - 45) >= xhZsFu; xhZsFu++)
        for (nGYQ1tr34B = (516 - 516); (498 - 399) >= nGYQ1tr34B; nGYQ1tr34B++)
            lFoHzOq174v[xhZsFu][nGYQ1tr34B] = (778 - 778);
    for (xhZsFu = (547 - 547); xhZsFu <= s - (316 - 315); xhZsFu++)
        for (nGYQ1tr34B = (281 - 281); nGYQ1tr34B <= CFwXucpvz -(431 - 430); nGYQ1tr34B++) {
            EbsOwUpvNIS = (712 - 712);
            while (EbsOwUpvNIS <= n - (824 - 823)) {
                lFoHzOq174v[xhZsFu][nGYQ1tr34B] = lFoHzOq174v[xhZsFu][nGYQ1tr34B] + a[xhZsFu][EbsOwUpvNIS] * b[EbsOwUpvNIS][nGYQ1tr34B];
                EbsOwUpvNIS++;
            }
        }
    {
        xhZsFu = (327 - 327);
        while (xhZsFu <= s - (214 - 213)) {
            {
                nGYQ1tr34B = (212 - 212);
                while (nGYQ1tr34B <= CFwXucpvz -(727 - 726)) {
                    if (nGYQ1tr34B != CFwXucpvz -(542 - 541))
                        cout << lFoHzOq174v[xhZsFu][nGYQ1tr34B] << " ";
                    else
                        cout << lFoHzOq174v[xhZsFu][nGYQ1tr34B] << endl;
                    nGYQ1tr34B++;
                }
            }
            xhZsFu++;
        }
    }
    return (327 - 327);
}

