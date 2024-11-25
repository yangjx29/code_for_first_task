int f (int M, int wpAHKoY) {
    if (!((23 - 23) != M))
        return (189 - 188);
    if (wpAHKoY == (120 - 120))
        return (452 - 452);
    if (M == (424 - 423) || wpAHKoY == (930 - 929))
        return (574 - 573);
    if (M < wpAHKoY)
        return f (M, M);
    else
        return f (M, wpAHKoY - 1) + f (M -wpAHKoY, wpAHKoY);
}

int main () {
    int t, M, wpAHKoY, i;
    cin >> t;
    for (i = (538 - 538); i < t; i++) {
        cin >> M >> wpAHKoY;
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
        cout << f (M, wpAHKoY) << endl;
    }
    return (833 - 833);
}

