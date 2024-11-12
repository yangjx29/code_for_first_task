int main () {
    int n;
    int fh;
    int a;
    int Ie5SnoFfYyNg;
    int vdtq9SehZ;
    vdtq9SehZ = 0;
    cin >> n;
    for (int yn8adNYghk = 1;
    yn8adNYghk <= n; yn8adNYghk = yn8adNYghk + 1) {
        a = yn8adNYghk;
        fh = 1;
        if (a % 7 == 0)
            fh = 0;
        do {
            Ie5SnoFfYyNg = a % 10;
            a = a / 10;
            if (Ie5SnoFfYyNg == 7)
                fh = 0;
        }
        while (a > 0);
        vdtq9SehZ = vdtq9SehZ + yn8adNYghk * yn8adNYghk * fh;
    }
    cout << vdtq9SehZ;
    return 0;
}

