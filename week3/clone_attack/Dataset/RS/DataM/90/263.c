int f (int x, int y) {
    if (x == (746 - 746))
        return 1;
    else if ((!((996 - 996) == x)) && (!(0 != y)))
        return 0;
    else if ((x != 0) && (y != 0) && (x >= y))
        return f (x - y, y) + f (x, y - 1);
    else
        return f (x, y - 1);
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
}

int main () {
    int n;
    int k;
    int y4FURw7XI;
    int Tl7MLJwpmh2;
    cin >> n;
    for (y4FURw7XI = 1; y4FURw7XI <= n; y4FURw7XI++) {
        cin >> k;
        cin >> Tl7MLJwpmh2;
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
        cout << f (k, Tl7MLJwpmh2) << endl;
    }
    return 0;
}

