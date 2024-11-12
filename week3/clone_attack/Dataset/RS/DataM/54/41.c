int n, k, amount;

int Amount (int amount, int step) {
    if (amount % (n - 1) == 0) {
        step++;
        amount = n * amount / (n - 1) + k;
    }
    else
        return 0;
    if (n > step)
        return Amount (amount, step);
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
    if (step == n)
        return amount;
}

int main () {
    int step;
    int Xv8W92KrGslw;
    step = 1;
    cin >> n >> k;
    for (int i = 1;
    ; i++) {
        amount = n * i + k;
        Xv8W92KrGslw = Amount (amount, step);
        if (Xv8W92KrGslw == 0)
            continue;
        else {
            cout << Xv8W92KrGslw << endl;
            break;
        };
    }
    return 0;
}

