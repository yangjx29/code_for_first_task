int main () {
    int tNDByqjcA6Rd;
    int xsHzou;
    int ebWvUaPh [(829 - 629)];
    int *p = ebWvUaPh;
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
    cin >> tNDByqjcA6Rd >> xsHzou;
    {
        p = ebWvUaPh;
        while (ebWvUaPh + tNDByqjcA6Rd > p) {
            if (ebWvUaPh + tNDByqjcA6Rd <= p + xsHzou)
                cin >> *(p + xsHzou - tNDByqjcA6Rd);
            else
                cin >> *(p + xsHzou);
            p = p + 1;
        };
    }
    {
        p = ebWvUaPh;
        while (p < ebWvUaPh + tNDByqjcA6Rd - 1) {
            cout << *p << ' ';
            p = p + 1;
        };
    }
    cout << *p << endl;
    return 0;
}

