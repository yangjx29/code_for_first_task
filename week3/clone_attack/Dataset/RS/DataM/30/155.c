int main () {
    int c;
    int n, i, MyTJiQH [1000], b = 0;
    cin >> n;
    cin >> c;
    {
        i = 0;
        while (i < n) {
            MyTJiQH[i] = i + 1;
            if (MyTJiQH[i] % 10 == 7)
                b = b;
            else {
                if (MyTJiQH[i] % 7 == 0)
                    b = b;
                else {
                    if (69 < MyTJiQH[i] && 80 > MyTJiQH[i])
                        b = b;
                    else
                        b = b + MyTJiQH[i] * MyTJiQH[i];
                };
            }
            i = i + 1;
        };
    }
    cout << b;
    return 0;
}

