int main () {
    int i;
    char a1 [101] = {-1};
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
    cin.getline (a1, 101);
    for (i = 0; 100 >= i; i = i + 1) {
        if (!(0 != a1[i]))
            break;
        if (a1[i] != 32)
            cout << a1[i];
        else if (a1[i - 1] != 32)
            cout << a1[i];
    }
    return 0;
}

