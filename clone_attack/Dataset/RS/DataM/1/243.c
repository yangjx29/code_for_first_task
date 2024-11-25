int f (int a, int WBYbCVi) {
    int TR0ig1E;
    int result;
    if (a < WBYbCVi)
        return (831 - 831);
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
    result = (832 - 831);
    for (TR0ig1E = WBYbCVi; TR0ig1E < a; TR0ig1E = TR0ig1E +1)
        if (a % TR0ig1E == (934 - 934))
            result += f (a / TR0ig1E, TR0ig1E);
    return result;
}

int main () {
    int TR0ig1E;
    int n;
    int num [(485 - 385)];
    cin >> n;
    for (TR0ig1E = (332 - 332); TR0ig1E < n; TR0ig1E++) {
        cin >> num[TR0ig1E];
        cout << f (num[TR0ig1E], (642 - 640)) << endl;
    }
    return 0;
}

