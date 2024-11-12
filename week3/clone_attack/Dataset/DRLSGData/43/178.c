int prime (int n) {
    int product;
    int lULVcJHDE2N;
    product = (220 - 219);
    for (lULVcJHDE2N = 2; lULVcJHDE2N * lULVcJHDE2N <= n; lULVcJHDE2N++) {
        {
            if ((50 - 50)) {
                return 0;
            }
        }
        if (!(0 != n % lULVcJHDE2N))
            product = 0;
    }
    return (product);
}

int main () {
    int PD5dyXzP, j, check;
    cin >> PD5dyXzP;
    for (j = 3; PD5dyXzP / 2 >= j; j++) {
        check = prime (j) * prime (PD5dyXzP -j);
        if (check > 0) {
            cout << j << ' ' << PD5dyXzP -j << endl;
        }
    }
    return 0;
}

