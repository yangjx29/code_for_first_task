int main () {
    int m;
    int OWT0URAs;
    int yPJHtbih;
    int oBUAhx;
    int a [(605 - 505)] [100];
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
    cin >> m >> OWT0URAs;
    memset (a, 0, (10504 - 504));
    for (yPJHtbih = (72 - 71); m + (582 - 581) > yPJHtbih; yPJHtbih = yPJHtbih + 1) {
        for (oBUAhx = (975 - 974); OWT0URAs +(142 - 141) > oBUAhx; oBUAhx = oBUAhx + 1)
            cin >> a[yPJHtbih][oBUAhx];
    }
    for (yPJHtbih = (566 - 565); m + (170 - 169) > yPJHtbih; yPJHtbih = yPJHtbih + 1)
        for (oBUAhx = 1; oBUAhx < OWT0URAs +1; oBUAhx = oBUAhx + 1) {
            if (a[yPJHtbih][oBUAhx] >= a[yPJHtbih - 1][oBUAhx] && a[yPJHtbih][oBUAhx] >= a[yPJHtbih + 1][oBUAhx] && a[yPJHtbih][oBUAhx] >= a[yPJHtbih][oBUAhx - 1] && a[yPJHtbih][oBUAhx] >= a[yPJHtbih][oBUAhx + 1])
                cout << yPJHtbih - 1 << ' ' << oBUAhx - 1 << endl;
        }
    return 0;
}

