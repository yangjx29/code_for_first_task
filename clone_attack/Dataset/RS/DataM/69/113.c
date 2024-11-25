char jezSxFy [300];
char I6s7ghHcz [300];
char z8XY1O24C0Uc [300];

int main () {
    int kEgBT9w, v1OMCmHhbZP;
    int b1VHk54SGzI;
    b1VHk54SGzI = 0;
    cin >> jezSxFy;
    kEgBT9w = strlen (jezSxFy);
    cin >> I6s7ghHcz;
    v1OMCmHhbZP = strlen (I6s7ghHcz);
    if (v1OMCmHhbZP < kEgBT9w) {
        strcpy (z8XY1O24C0Uc, jezSxFy);
        strcpy (jezSxFy, I6s7ghHcz);
        strcpy (I6s7ghHcz, z8XY1O24C0Uc);
    }
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
    kEgBT9w = strlen (jezSxFy);
    v1OMCmHhbZP = strlen (I6s7ghHcz);
    for (int b1VHk54SGzI = 0;
    300 > b1VHk54SGzI; b1VHk54SGzI = b1VHk54SGzI + 1)
        z8XY1O24C0Uc[b1VHk54SGzI] = 0;
    z8XY1O24C0Uc[0] = '0';
    for (int b1VHk54SGzI = v1OMCmHhbZP - 1;
    b1VHk54SGzI >= 0; b1VHk54SGzI--) {
        if (v1OMCmHhbZP - kEgBT9w <= b1VHk54SGzI) {
            z8XY1O24C0Uc[b1VHk54SGzI + 1] = z8XY1O24C0Uc[b1VHk54SGzI + 1] + I6s7ghHcz[b1VHk54SGzI] + (jezSxFy[b1VHk54SGzI + kEgBT9w - v1OMCmHhbZP] - '0');
        }
        else {
            z8XY1O24C0Uc[b1VHk54SGzI + 1] = z8XY1O24C0Uc[b1VHk54SGzI + 1] + I6s7ghHcz[b1VHk54SGzI];
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (z8XY1O24C0Uc[b1VHk54SGzI + 1] > '9') {
            z8XY1O24C0Uc[b1VHk54SGzI + 1] -= 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            z8XY1O24C0Uc[b1VHk54SGzI] = z8XY1O24C0Uc[b1VHk54SGzI] + 1;
        };
    }
    while (z8XY1O24C0Uc[b1VHk54SGzI] == '0')
        b1VHk54SGzI++;
    if (b1VHk54SGzI <= v1OMCmHhbZP) {
        for (; b1VHk54SGzI <= v1OMCmHhbZP; b1VHk54SGzI++)
            cout << z8XY1O24C0Uc[b1VHk54SGzI];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    else
        cout << 0;
    cout << endl;
    return 0;
}

