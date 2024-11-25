int sLBUkp2Ex;
void  find (int, int);

int main () {
    int i;
    int num;
    cin >> num;
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
    for (i = (18 - 17); num >= i; i++) {
        int n, EDY5Wu;
        cin >> n >> EDY5Wu;
        sLBUkp2Ex = (254 - 254);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        find (n, EDY5Wu);
        cout << sLBUkp2Ex << endl;
    }
    return 0;
}

void  find (int a, int b) {
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
    if (a == 1 || b == 1 || a == 0)
        sLBUkp2Ex = sLBUkp2Ex + 1;
    else {
        find (a, b - 1);
        if (a >= b)
            find (a - b, b);
    };
}

