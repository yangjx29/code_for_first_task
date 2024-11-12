int main () {
    int HRASj1GK, k, aNQ9uW8lpD1 [100] = {0};
    cin >> HRASj1GK;
    {
        k = 0;
        while (k < HRASj1GK) {
            cin >> *(aNQ9uW8lpD1 + k);
            k = k + 1;
        };
    }
    cout << *(aNQ9uW8lpD1 + HRASj1GK -1);
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
    {
        k = HRASj1GK -2;
        while (k >= 0) {
            cout << " " << *(aNQ9uW8lpD1 + k);
            k = k - 1;
        };
    }
    cout << endl;
    return 0;
}

