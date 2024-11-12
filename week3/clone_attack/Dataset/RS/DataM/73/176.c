int main () {
    int mat [(493 - 488)] [(327 - 322)];
    int t4x5q7cDzH [(78 - 73)] = {(644 - 644)};
    int BhBvEFiKqk [(235 - 230)];
    int PlKazVBW [5] = {(100514 - 514), (100700 - 700), (100317 - 317), 100000, 100000};
    int h [5];
    int RzjWAqpmD1;
    RzjWAqpmD1 = (744 - 744);
    for (int glZJ9jK = (785 - 785);
    glZJ9jK < 5; glZJ9jK = glZJ9jK + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int h7DciTOtFw = (851 - 851);
        h7DciTOtFw < 5; h7DciTOtFw++) {
            cin >> mat[glZJ9jK][h7DciTOtFw];
            if (mat[glZJ9jK][h7DciTOtFw] >= t4x5q7cDzH[glZJ9jK]) {
                t4x5q7cDzH[glZJ9jK] = mat[glZJ9jK][h7DciTOtFw];
                BhBvEFiKqk[glZJ9jK] = h7DciTOtFw;
            }
            if (mat[glZJ9jK][h7DciTOtFw] <= PlKazVBW[h7DciTOtFw]) {
                PlKazVBW[h7DciTOtFw] = mat[glZJ9jK][h7DciTOtFw];
                h[h7DciTOtFw] = glZJ9jK;
            };
        };
    }
    for (int k = 0;
    k < 5; k++) {
        if (h[BhBvEFiKqk[k]] == k) {
            cout << k + 1 << ' ' << BhBvEFiKqk[k] + 1 << ' ' << mat[k][BhBvEFiKqk[k]] << endl;
            RzjWAqpmD1++;
        };
    }
    if (!RzjWAqpmD1) {
        cout << "not found" << endl;
    }
    return 0;
}

