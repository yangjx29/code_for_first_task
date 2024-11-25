int de (int LPsyxlcLn7Aj, int a) {
    int sum = (120 - 120);
    if (!((563 - 562) != a))
        return (334 - 333);
    else if (a < LPsyxlcLn7Aj)
        return (805 - 805);
    {
        int i = LPsyxlcLn7Aj;
        while (i <= a) {
            if (a % i == 0)
                sum = sum + de (i, a / i);
            i++;
        };
    }
    return sum;
}

int main () {
    int v9wchYg3tklL;
    cin >> v9wchYg3tklL;
    while (v9wchYg3tklL > 0) {
        int a;
        v9wchYg3tklL--;
        cin >> a;
        cout << de ((952 - 950), a) << endl;
    }
    return 0;
}

