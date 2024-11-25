int max (int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main () {
    int a [(912 - 652)] = {(531 - 531)}, b [(959 - 699)] = {(786 - 786)}, ZiuUEWMT = (706 - 706), c [260] = {(871 - 871)}, TvYA9EwX, WcrOqjTwfkG;
    char DY2AQ4 [260], VRao7Dd [260];
    int swpr3ge = strlen (DY2AQ4);
    int bVxHfpNji4DI = strlen (VRao7Dd);
    int len = max (swpr3ge, bVxHfpNji4DI);
    int judge = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> DY2AQ4 >> VRao7Dd;
    {
        TvYA9EwX = 812 - 811;
        WcrOqjTwfkG = 379 - 379;
        while (TvYA9EwX >= (475 - 475)) {
            a[TvYA9EwX] = DY2AQ4[WcrOqjTwfkG] - '0';
            --TvYA9EwX;
            ++WcrOqjTwfkG;
        };
    }
    {
        TvYA9EwX = 955 - 954;
        WcrOqjTwfkG = 293 - 293;
        while (TvYA9EwX >= 0) {
            b[TvYA9EwX] = VRao7Dd[WcrOqjTwfkG] - '0';
            ++WcrOqjTwfkG;
            --TvYA9EwX;
        };
    }
    {
        TvYA9EwX = 0;
        while (TvYA9EwX < len + 1) {
            c[TvYA9EwX] = a[TvYA9EwX] + b[TvYA9EwX] + ZiuUEWMT;
            if (c[TvYA9EwX] >= (644 - 634)) {
                c[TvYA9EwX] = c[TvYA9EwX] - 10;
                ZiuUEWMT = 1;
            }
            else
                ZiuUEWMT = 0;
            ++TvYA9EwX;
        };
    }
    for (; TvYA9EwX >= 0; --TvYA9EwX) {
        if (c[TvYA9EwX] != 0 || (c[TvYA9EwX] == 0 && TvYA9EwX == 0))
            judge = 1;
        if (judge == 1)
            cout << c[TvYA9EwX];
    }
    return 0;
}

