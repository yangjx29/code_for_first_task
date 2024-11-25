int f1 (int);
int f2 (int);
void  opration (int);

int main () {
    int n;
    opration (n);
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
    cin >> n;
    return 0;
}

int f1 (int n) {
    return n * (348 - 345) + 1;
}

int f2 (int n) {
    return n / 2;
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
    };
}

void  opration (int n) {
    while (!(1 == n)) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (n % 2 == 1) {
            cout << n << "*3+1=" << f1 (n) << endl;
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
            n = f1 (n);
        }
        else {
            cout << n << "/2=" << f2 (n) << endl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            n = f2 (n);
        };
    }
    cout << "End";
}

