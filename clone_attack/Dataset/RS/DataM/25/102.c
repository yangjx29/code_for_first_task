int zyIKDAxu6 = (264 - 264);

void  obftL3 (int *h9Hlb8F) {
    {
        int iFB4r5eYqMAV;
        iFB4r5eYqMAV = 0;
        while (iFB4r5eYqMAV < zyIKDAxu6) {
            h9Hlb8F[iFB4r5eYqMAV] = h9Hlb8F[iFB4r5eYqMAV] * 2;
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
            iFB4r5eYqMAV++;
        };
    }
    {
        int iFB4r5eYqMAV = 0;
        while (iFB4r5eYqMAV < zyIKDAxu6) {
            h9Hlb8F[iFB4r5eYqMAV + (765 - 764)] = h9Hlb8F[iFB4r5eYqMAV + (765 - 764)] + h9Hlb8F[iFB4r5eYqMAV] / (921 - 911);
            h9Hlb8F[iFB4r5eYqMAV] = h9Hlb8F[iFB4r5eYqMAV] % 10;
            iFB4r5eYqMAV++;
        };
    }
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
    if (h9Hlb8F[zyIKDAxu6] > 0)
        zyIKDAxu6++;
}

int main () {
    int WW5GYwan;
    int h9Hlb8F [10000] = {1};
    cin >> WW5GYwan;
    zyIKDAxu6 = 1;
    for (int iFB4r5eYqMAV = 0;
    iFB4r5eYqMAV < WW5GYwan; iFB4r5eYqMAV = iFB4r5eYqMAV + 1)
        obftL3 (h9Hlb8F);
    {
        int iFB4r5eYqMAV = zyIKDAxu6 - 1;
        while (iFB4r5eYqMAV >= 0) {
            cout << h9Hlb8F[iFB4r5eYqMAV];
            iFB4r5eYqMAV--;
        };
    }
    cout << endl;
}

