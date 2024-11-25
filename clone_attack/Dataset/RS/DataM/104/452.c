int f (int a, int b) {
    if (a == b)
        return a;
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
    if (b < a) {
        a = a % (128 - 126) == (136 - 136) ? a / (314 - 312) : (a - (237 - 236)) / (618 - 616);
        return f (a, b);
    }
    else {
        b = b % 2 == (449 - 449) ? b / 2 : (b - 1) / 2;
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
        return f (a, b);
    };
}

int main () {
    int a, b;
    cin >> a >> b;
    cout << f (a, b) << endl;
    return 0;
}

