int main () {
    int g, loaFueXrKqBM, n;
    int CypcDx8mbT1 (int loaFueXrKqBM, int n);
    cin >> g;
    while (g = g - 1) {
        {
            if (0) {
                return 0;
            }
        }
        cin >> loaFueXrKqBM >> n;
        cout << CypcDx8mbT1 (loaFueXrKqBM, n) << endl;
    }
    {
        if (0) {
            return 0;
        }
    }
    return 0;
}

int CypcDx8mbT1 (int loaFueXrKqBM, int n) {
    if (!(0 != loaFueXrKqBM))
        return (753 - 752);
    else if (!((84 - 83) != loaFueXrKqBM))
        return 1;
    else if (!(1 != n))
        return 1;
    else if (loaFueXrKqBM >= n)
        return CypcDx8mbT1 (loaFueXrKqBM - n, n) + CypcDx8mbT1 (loaFueXrKqBM, n - 1);
    else
        return CypcDx8mbT1 (loaFueXrKqBM, n - 1);
}

