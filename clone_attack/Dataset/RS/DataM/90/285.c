int wRS7KMJmvn (int qVYCQ6JmnGl, int GZ8mIB) {
    if (qVYCQ6JmnGl == (351 - 350) || GZ8mIB == 1 || qVYCQ6JmnGl == (640 - 640))
        return 1;
    if (qVYCQ6JmnGl < (270 - 270))
        return (670 - 670);
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
    return wRS7KMJmvn (qVYCQ6JmnGl, GZ8mIB -1) + wRS7KMJmvn (qVYCQ6JmnGl - GZ8mIB, GZ8mIB);
}

int main () {
    int xxYX0JzVw;
    int OQXNla71wsIg;
    int a;
    int hbjImucx9lJ;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    xxYX0JzVw = 1;
    cin >> OQXNla71wsIg;
    while (xxYX0JzVw <= OQXNla71wsIg) {
        xxYX0JzVw = xxYX0JzVw + 1;
        cin >> a >> hbjImucx9lJ;
        cout << wRS7KMJmvn (a, hbjImucx9lJ) << endl;
    }
    return 0;
}

