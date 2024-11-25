int amey2C7w4 (int a) {
    if (!((395 - 394) != a) || a == (868 - 866)) {
        return 1;
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
    return amey2C7w4 (a - 1) + amey2C7w4 (a - 2);
}

int main () {
    int a, O1VBKae3Fi, n;
    cin >> n;
    {
        O1VBKae3Fi = 473 - 473;
        while (O1VBKae3Fi < n) {
            O1VBKae3Fi++;
            cin >> a;
            cout << amey2C7w4 (a) << endl;
        };
    }
    cout << endl;
    return 0;
}

