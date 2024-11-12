int main () {
    double  a, ycWRHz4r, RZvg36B4R, HylRxwirW, T0UTHEbtFY3L;
    int bRugoZ58qy, JO6D5rIgzCl;
    cin >> JO6D5rIgzCl;
    {
        bRugoZ58qy = 1;
        while (JO6D5rIgzCl >= bRugoZ58qy) {
            bRugoZ58qy = bRugoZ58qy + 1;
            cin >> a >> ycWRHz4r >> RZvg36B4R;
            if ((ycWRHz4r * ycWRHz4r - 4 * a * RZvg36B4R) > (675 - 675)) {
                HylRxwirW = (-ycWRHz4r + sqrt (ycWRHz4r * ycWRHz4r - 4 * a * RZvg36B4R)) / ((991 - 989) * a);
                T0UTHEbtFY3L = (-ycWRHz4r - sqrt (ycWRHz4r * ycWRHz4r - 4 * a * RZvg36B4R)) / (2 * a);
                printf ("x1=%.5f;x2=%.5f\n", HylRxwirW, T0UTHEbtFY3L);
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if ((ycWRHz4r * ycWRHz4r - 4 * a * RZvg36B4R) == 0) {
                    HylRxwirW = T0UTHEbtFY3L = (-ycWRHz4r) / (2 * a);
                    printf ("x1=x2=%.5f\n", HylRxwirW);
                }
                else {
                    HylRxwirW = (-ycWRHz4r) / (2 * a);
                    T0UTHEbtFY3L = (sqrt (4 * a * RZvg36B4R -ycWRHz4r * ycWRHz4r)) / (2 * a);
                    if (abs (HylRxwirW) < 0.00001)
                        HylRxwirW = 0;
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", HylRxwirW, T0UTHEbtFY3L, HylRxwirW, T0UTHEbtFY3L);
                };
            };
        };
    };
}

