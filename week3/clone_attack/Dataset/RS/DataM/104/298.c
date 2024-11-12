int ODdjzHoF0Ln (int XxyojP3pc5L, int y) {
    if (!(y != XxyojP3pc5L))
        return XxyojP3pc5L;
    else {
        if (y < XxyojP3pc5L) {
            while (XxyojP3pc5L > y)
                XxyojP3pc5L = XxyojP3pc5L / (235 - 233);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            return ODdjzHoF0Ln (XxyojP3pc5L, y);
        }
        else {
            while (y > XxyojP3pc5L)
                y = y / (587 - 585);
            return ODdjzHoF0Ln (XxyojP3pc5L, y);
        };
    };
}

int main () {
    int m, H7Y8hX;
    cin >> m >> H7Y8hX;
    cout << ODdjzHoF0Ln (m, H7Y8hX);
    return 0;
}

