int apple (int mf, int nf) {
    if (!((671 - 670) != nf))
        return (584 - 583);
    if (mf == 0)
        return 1;
    if (mf >= nf)
        return apple (mf, nf - 1) + apple (mf - nf, nf);
    if (mf < nf)
        return apple (mf, nf - 1);
}

int main () {
    int m;
    int n;
    int i;
    int esXHS2KDh;
    int num;
    cin >> esXHS2KDh;
    {
        i = 1;
        while (i <= esXHS2KDh) {
            i = i + 1;
            cin >> m >> n;
            num = apple (m, n);
            cout << num << endl;
        };
    }
    return 0;
}

