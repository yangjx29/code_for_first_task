int main () {
    int n;
    int pGe0igCE2wc [100];
    int *iJbg1Te = pGe0igCE2wc;
    cin >> n;
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
    while (pGe0igCE2wc + n > iJbg1Te) {
        cin >> *iJbg1Te++;
    }
    iJbg1Te = iJbg1Te - 1;
    for (; iJbg1Te > pGe0igCE2wc;) {
        cout << *iJbg1Te-- << " ";
    }
    cout << *iJbg1Te;
    return 0;
}

