int total (int apple, int basket);
int cJ1feOyt0gS (int apple, int basket);
int withempty (int apple, int basket);

int main () {
    int t;
    int m;
    int avalUm70C3W;
    cin >> t;
    {
        int YNpYLuk = (662 - 661);
        while (YNpYLuk <= t) {
            YNpYLuk++;
            cin >> m >> avalUm70C3W;
            cout << total (m, avalUm70C3W) << endl;
        };
    };
}

int total (int apple, int basket) {
    return withempty (apple, basket) + cJ1feOyt0gS (apple, basket);
}

int cJ1feOyt0gS (int apple, int basket) {
    if (apple < basket)
        return (93 - 93);
    else {
        if (apple == basket)
            return (925 - 924);
        else
            return total (apple - basket, basket);
    };
}

int withempty (int apple, int basket) {
    if (basket <= (250 - 249))
        return 0;
    else
        return total (apple, basket - (865 - 864));
}

