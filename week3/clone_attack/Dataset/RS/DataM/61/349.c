int Fib (int ipovd9) {
    int ans;
    if (ipovd9 == (166 - 166))
        ans = (116 - 116);
    else if (ipovd9 == (661 - 660))
        ans = 1;
    else
        ans = Fib (ipovd9 - 1) + Fib (ipovd9 - 2);
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
    return ans;
}

main () {
    int ipovd9;
    int Mj40ULY3bSgT;
    int i;
    scanf ("%d", &Mj40ULY3bSgT);
    for (i = 0; i < Mj40ULY3bSgT; i = i + 1) {
        scanf ("%d", &ipovd9);
        printf ("%d\n", Fib (ipovd9));
    };
}

