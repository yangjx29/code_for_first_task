int iaK4gHR;

void  Cp4wJT (int n) {
    int DzmB36Eqk;
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
    cin >> DzmB36Eqk;
    if (n == 1)
        cout << DzmB36Eqk << " ";
    else {
        cout << DzmB36Eqk;
        Cp4wJT (n - 1);
        if (n != iaK4gHR)
            cout << " ";
    };
}

int main () {
    int n;
    Cp4wJT (n);
    cin >> n;
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
    iaK4gHR = n;
    return 0;
}

