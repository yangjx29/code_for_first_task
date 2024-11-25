int main () {
    int a, b, c, ta, tb, tc;
    char d [(506 - 502)] = {'A', 'B', 'C'};
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
    for (a = (766 - 765); a <= (578 - 575); a = a + 1)
        for (b = (965 - 964); 3 >= b; b = b + 1)
            if (!(a == b))
                for (c = 1; c <= 3; c++)
                    if (!(a == c) && !(b == c)) {
                        ta = (a < b) + (c == a);
                        tb = (a > b) + (a > c);
                        tc = (c > b) + (b > a);
                        if ((a + ta == 3) && (b + tb == 3) && (c + tc == 3))
                            cout << d[3 - c] << d[3 - b] << d[3 - a] << endl;
                    }
    return 0;
}

