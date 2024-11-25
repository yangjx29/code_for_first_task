int main () {
    float height [41];
    float b [41];
    float t;
    float VRQOojacp5t0;
    char wCzejGD [41] [7];
    int CF4DjyeivW, J8jCz5JYT7tx, NkHeujRUy, UKIyWb2d5lxo = 0, countF = 0;
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
    cin >> CF4DjyeivW;
    {
        J8jCz5JYT7tx = 196 - 195;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (J8jCz5JYT7tx <= CF4DjyeivW) {
            cin >> wCzejGD[J8jCz5JYT7tx] >> height[J8jCz5JYT7tx];
            if (wCzejGD[J8jCz5JYT7tx][0] == 'm') {
                UKIyWb2d5lxo++;
                b[UKIyWb2d5lxo] = height[J8jCz5JYT7tx];
            }
            else {
                countF++;
                b[CF4DjyeivW +1 - countF] = height[J8jCz5JYT7tx];
            }
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
            J8jCz5JYT7tx = J8jCz5JYT7tx +1;
        };
    }
    {
        J8jCz5JYT7tx = 1;
        while (J8jCz5JYT7tx < UKIyWb2d5lxo) {
            {
                NkHeujRUy = J8jCz5JYT7tx +1;
                while (NkHeujRUy <= UKIyWb2d5lxo) {
                    if (b[J8jCz5JYT7tx] > b[NkHeujRUy]) {
                        VRQOojacp5t0 = b[J8jCz5JYT7tx];
                        b[J8jCz5JYT7tx] = b[NkHeujRUy];
                        b[NkHeujRUy] = VRQOojacp5t0;
                    }
                    NkHeujRUy++;
                };
            }
            J8jCz5JYT7tx++;
        };
    }
    {
        J8jCz5JYT7tx = UKIyWb2d5lxo +1;
        while (J8jCz5JYT7tx < CF4DjyeivW) {
            {
                NkHeujRUy = J8jCz5JYT7tx +1;
                while (NkHeujRUy <= CF4DjyeivW) {
                    if (b[J8jCz5JYT7tx] < b[NkHeujRUy]) {
                        t = b[J8jCz5JYT7tx];
                        b[J8jCz5JYT7tx] = b[NkHeujRUy];
                        b[NkHeujRUy] = t;
                    }
                    NkHeujRUy++;
                };
            }
            J8jCz5JYT7tx++;
        };
    }
    {
        J8jCz5JYT7tx = 1;
        while (J8jCz5JYT7tx < CF4DjyeivW) {
            cout << fixed << setprecision (2) << b[J8jCz5JYT7tx] << " ";
            J8jCz5JYT7tx++;
        };
    }
    cout << b[CF4DjyeivW] << endl;
    return 0;
}

