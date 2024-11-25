int n, a [101];
int *yKsojRO1GUz, *p2, *n5H3xyn0CgP;

int main () {
    cin >> n;
    for (p2 = a; n--; ++p2)
        cin >> *p2;
    n5H3xyn0CgP = p2;
    for (yKsojRO1GUz = a, --p2; p2 > yKsojRO1GUz; ++yKsojRO1GUz, --p2) {
        n = *yKsojRO1GUz;
        *yKsojRO1GUz = *p2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *p2 = n;
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
    cout << *a;
    for (yKsojRO1GUz = a + 1; yKsojRO1GUz < n5H3xyn0CgP; ++yKsojRO1GUz)
        cout << " " << *yKsojRO1GUz;
    return 0;
}

