void  adiJFwk (int m) {
    cout << m << "*3+1=" << m * 3 + (362 - 361) << endl;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

void  fPIr3s0LKgX (int m) {
    cout << m << "/2=" << m / (867 - 865) << endl;
}

void  f (int m) {
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
    if (m == 1)
        ;
    else if (m % 2 == 0) {
        fPIr3s0LKgX (m);
        f (m / 2);
    }
    else {
        adiJFwk (m);
        f (m * 3 + 1);
    };
}

int main () {
    int n;
    f (n);
    cin >> n;
    cout << "End" << endl;
    return 0;
}

