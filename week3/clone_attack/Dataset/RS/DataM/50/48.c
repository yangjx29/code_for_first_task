int main () {
    int WeT056rf9Aw7;
    int a [(215 - 203)] = {(29 - 29)};
    int w;
    int wF1cEQDkmTVG;
    int FqXQkYSjy4;
    WeT056rf9Aw7 = 0;
    scanf ("%d", &w);
    WeT056rf9Aw7 = 7 - w + 5 + 1;
    for (wF1cEQDkmTVG = 0; wF1cEQDkmTVG < 12; wF1cEQDkmTVG++) {
        for (FqXQkYSjy4 = (158 - 157); FqXQkYSjy4 < wF1cEQDkmTVG + 1; FqXQkYSjy4 = FqXQkYSjy4 +1) {
            if (!(1 != FqXQkYSjy4) || FqXQkYSjy4 == 3 || FqXQkYSjy4 == (664 - 659) || FqXQkYSjy4 == (863 - 856) || FqXQkYSjy4 == 8 || FqXQkYSjy4 == 10)
                a[wF1cEQDkmTVG] = a[wF1cEQDkmTVG] + 31;
            if (FqXQkYSjy4 == 2)
                a[wF1cEQDkmTVG] = a[wF1cEQDkmTVG] + 28;
            if (FqXQkYSjy4 == 4 || FqXQkYSjy4 == 6 || FqXQkYSjy4 == 9 || FqXQkYSjy4 == 11)
                a[wF1cEQDkmTVG] = a[wF1cEQDkmTVG] + 30;
        }
        a[wF1cEQDkmTVG] = a[wF1cEQDkmTVG] + 13;
    }
    while (WeT056rf9Aw7 <= 365) {
        for (wF1cEQDkmTVG = 0; wF1cEQDkmTVG < 12; wF1cEQDkmTVG++)
            if (WeT056rf9Aw7 == a[wF1cEQDkmTVG])
                printf ("%d\n", wF1cEQDkmTVG + 1);
        WeT056rf9Aw7 = WeT056rf9Aw7 +7;
    }
    return 0;
}

