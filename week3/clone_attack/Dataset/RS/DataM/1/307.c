int fun (int BHyxMwth, int n) {
    int h7bhez;
    int b4Dn7T82hP;
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
    h7bhez = (718 - 717);
    if (n == 1) {
        for (b4Dn7T82hP = 2; b4Dn7T82hP * b4Dn7T82hP <= BHyxMwth; b4Dn7T82hP++) {
            if (BHyxMwth % b4Dn7T82hP == 0)
                h7bhez = h7bhez + fun (BHyxMwth / b4Dn7T82hP, b4Dn7T82hP);
        };
    }
    else {
        b4Dn7T82hP = n;
        while (b4Dn7T82hP * b4Dn7T82hP <= BHyxMwth) {
            if (BHyxMwth % b4Dn7T82hP == 0) {
                h7bhez = h7bhez + fun (BHyxMwth / b4Dn7T82hP, b4Dn7T82hP);
            }
            b4Dn7T82hP++;
        };
    }
    return h7bhez;
}

int main () {
    int n;
    int b4Dn7T82hP;
    int b;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int a [1000];
    cin >> n;
    {
        b4Dn7T82hP = 0;
        while (b4Dn7T82hP < n) {
            cin >> b;
            a[b4Dn7T82hP] = fun (b, 1);
            b4Dn7T82hP++;
        };
    }
    for (b4Dn7T82hP = 0; b4Dn7T82hP < n; b4Dn7T82hP++)
        cout << a[b4Dn7T82hP] << endl;
}

