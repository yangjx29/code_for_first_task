void  RPcKp8atCrA (int i, char a [(1404 - 904)]) {
    char CJIPNoqD8 [500];
    char P7nMYAQ [500];
    int XD3ulFKx7bTq, IuRbQpSO7, E6xlZY;
    int len = strlen (a);
    for (XD3ulFKx7bTq = (206 - 206); 500 > XD3ulFKx7bTq; XD3ulFKx7bTq = XD3ulFKx7bTq +1) {
        CJIPNoqD8[XD3ulFKx7bTq] = '\0';
        P7nMYAQ[XD3ulFKx7bTq] = '\0';
    }
    for (XD3ulFKx7bTq = 0; len - i >= XD3ulFKx7bTq; XD3ulFKx7bTq = XD3ulFKx7bTq +1) {
        for (IuRbQpSO7 = 0; i > IuRbQpSO7; IuRbQpSO7 = IuRbQpSO7 +1)
            CJIPNoqD8[IuRbQpSO7] = a[XD3ulFKx7bTq +IuRbQpSO7];
        for (E6xlZY = 0; i > E6xlZY; E6xlZY++)
            P7nMYAQ[E6xlZY] = CJIPNoqD8[strlen (CJIPNoqD8) - E6xlZY -1];
        for (IuRbQpSO7 = 0; i > IuRbQpSO7; IuRbQpSO7 = IuRbQpSO7 +1) {
            if (!(P7nMYAQ[IuRbQpSO7] == CJIPNoqD8[IuRbQpSO7]))
                break;
        }
        if (IuRbQpSO7 == i) {
            for (IuRbQpSO7 = 0; IuRbQpSO7 < i; IuRbQpSO7 = IuRbQpSO7 +1)
                cout << CJIPNoqD8[IuRbQpSO7];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cout << endl;
        };
    };
}

int main () {
    char a [500];
    int i;
    int len;
    cin.getline (a, 500);
    len = strlen (a);
    for (i = 2; i <= len; i++) {
        RPcKp8atCrA (i, a);
    }
    return 0;
}

