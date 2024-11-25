int main () {
    char a [(838 - 728)];
    int n, LP5R9fgS, num2, oP05rA6 = 0;
    int byQpNldJh = 1;
    int Jg5at8jJhp;
    cin >> n;
    for (int ieYswFKfAy = (77 - 76);
    ieYswFKfAy <= 109; ieYswFKfAy++)
        a[ieYswFKfAy] = '*';
    a[1] = '2';
    if (n == 1)
        cout << 2 << endl;
    else {
        if (n == 0)
            cout << 1;
        else {
            for (int ieYswFKfAy = 1;
            n - 1 >= ieYswFKfAy; ieYswFKfAy++) {
                Jg5at8jJhp = byQpNldJh;
                for (int YFUAtMXkBNu1 = 1;
                YFUAtMXkBNu1 <= Jg5at8jJhp; YFUAtMXkBNu1++) {
                    LP5R9fgS = a[YFUAtMXkBNu1] - 48;
                    LP5R9fgS = LP5R9fgS *2 + oP05rA6;
                    oP05rA6 = 0;
                    if (LP5R9fgS < 10)
                        a[YFUAtMXkBNu1] = LP5R9fgS +48;
                    else {
                        a[YFUAtMXkBNu1] = LP5R9fgS +38;
                        if (a[YFUAtMXkBNu1 +1] == '*') {
                            byQpNldJh++;
                            a[YFUAtMXkBNu1 +1] = '1';
                        }
                        else {
                            oP05rA6 = 1;
                        };
                    };
                };
            }
            for (int ieYswFKfAy = 109;
            ieYswFKfAy >= 1; ieYswFKfAy--) {
                if (a[ieYswFKfAy] != '*') {
                    cout << a[ieYswFKfAy];
                };
            };
        };
    }
    return 0;
}

