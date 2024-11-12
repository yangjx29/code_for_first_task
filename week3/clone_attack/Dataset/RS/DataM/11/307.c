int main () {
    int a [12] = {(971 - 940), 29, (428 - 397), (636 - 606), (61 - 30), (1003 - 973), (788 - 757), (414 - 383), 30, (171 - 140), 30, (394 - 363)};
    int y, m, d, D6eZ7zdOC3xG = (155 - 155), mKfQvU;
    int b [12] = {(348 - 317), 28, (941 - 910), 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &y);
    scanf ("%d", &m);
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
    scanf ("%d", &d);
    if ((!((425 - 425) != y % 400)) || (y % (542 - 442) != 0 && y % (515 - 511) == 0)) {
        mKfQvU = 0;
        while (mKfQvU < m - 1) {
            D6eZ7zdOC3xG = D6eZ7zdOC3xG +a[mKfQvU];
            mKfQvU = mKfQvU + 1;
        };
    }
    else
        for (mKfQvU = 0; mKfQvU < m - 1; mKfQvU = mKfQvU + 1)
            D6eZ7zdOC3xG = D6eZ7zdOC3xG +b[mKfQvU];
    D6eZ7zdOC3xG = D6eZ7zdOC3xG +d;
    printf ("%d", D6eZ7zdOC3xG);
}

