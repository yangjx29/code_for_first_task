int RBs0cq9ne4wk (int m, int n);
int pJil6XV1gp (int m, int n);
int orOSCpwX2g (int m, int n);

int main () {
    int dBabVvq64, VzmDuKr1, m, n;
    cin >> dBabVvq64;
    {
        VzmDuKr1 = 0;
        while (VzmDuKr1 < dBabVvq64) {
            VzmDuKr1 = VzmDuKr1 +1;
            cin >> m >> n;
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
            if (!(1 == n))
                cout << RBs0cq9ne4wk (m, n) << endl;
            else
                cout << "1" << endl;
        };
    }
    return 0;
}

int pJil6XV1gp (int m, int n) {
    if (n == 2)
        return 1;
    else
        return RBs0cq9ne4wk (m, n - 1);
}

int orOSCpwX2g (int m, int n) {
    if (m < n)
        return 0;
    else
        return RBs0cq9ne4wk (m - n, n);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
}

int RBs0cq9ne4wk (int m, int n) {
    return pJil6XV1gp (m, n) + orOSCpwX2g (m, n);
}

