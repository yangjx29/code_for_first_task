int main () {
    int cX2wp1aNK, ans = 0;
    cin >> cX2wp1aNK;
    {
        int tkAgrKq = 1;
        while (tkAgrKq <= cX2wp1aNK) {
            if (!(0 == tkAgrKq % 7) && (tkAgrKq % 10) != 7 && (tkAgrKq / 10) != 7) {
                ans += tkAgrKq * tkAgrKq;
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
            tkAgrKq++;
        };
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
    cout << ans << endl;
    return 0;
}

