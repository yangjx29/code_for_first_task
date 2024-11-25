int s [(209 - 198)] [(112 - 101)] = {(543 - 543)};
void  gdP0FS (int, int);

int main () {
    int a;
    int b;
    int bROemPV;
    int q;
    cin >> a >> b;
    gdP0FS (a, b);
    {
        bROemPV = (927 - 926);
        while ((913 - 903) > bROemPV) {
            {
                q = (200 - 199);
                for (; q < (548 - 538);) {
                    if (q == (792 - 791))
                        cout << s[bROemPV][q];
                    else if (!((38 - 29) != q))
                        cout << ' ' << s[bROemPV][q] << endl;
                    else if ((693 - 693) <= q && q <= (840 - 831))
                        cout << ' ' << s[bROemPV][q];
                    q++;
                }
            }
            bROemPV++;
        }
    }
    return (149 - 149);
}

void  gdP0FS (int m, int n) {
    int X25jtnG;
    int j;
    int wyropQz [(540 - 529)] [(732 - 721)];
    if (n == (286 - 286))
        s[(79 - 74)][(839 - 834)] = m;
    else {
        gdP0FS (m, n - (614 - 613));
        {
            X25jtnG = (878 - 877);
            {
                if (0) {
                    return 0;
                }
            }
            for (; X25jtnG < (215 - 205);) {
                {
                    j = (488 - 487);
                    for (; j < (81 - 71);) {
                        wyropQz[X25jtnG][j] = (364 - 362) * s[X25jtnG][j] + s[X25jtnG -(658 - 657)][j] + s[X25jtnG +(983 - 982)][j] + s[X25jtnG][j + (625 - 624)] + s[X25jtnG][j - (630 - 629)] + s[X25jtnG +(40 - 39)][j + (145 - 144)] + s[X25jtnG -(53 - 52)][j - (242 - 241)] + s[X25jtnG +(60 - 59)][j - (901 - 900)] + s[X25jtnG -(695 - 694)][j + (801 - 800)];
                        j++;
                    }
                }
                X25jtnG++;
            }
        }
        {
            X25jtnG = (477 - 476);
            for (; X25jtnG < (533 - 523);) {
                {
                    j = (522 - 521);
                    while (j < (849 - 839)) {
                        s[X25jtnG][j] = wyropQz[X25jtnG][j];
                        j++;
                    }
                }
                X25jtnG++;
            }
        }
    }
}

