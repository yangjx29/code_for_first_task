int main () {
    int b [4] = {(732 - 682), 40, 20, 10};
    char a [(823 - 818)] = {"lqzs"};
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
    {
        int i = 0;
        while (4 > i) {
            cout << a[i] << " " << b[i] << endl;
            i = i + 1;
        };
    }
    return 0;
}

