int yinshu (int be, int ofTXPpWu6qYl) {
    int sum;
    int WiBzeZl3O;
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
    sum = 0;
    for (WiBzeZl3O = ofTXPpWu6qYl; be >= WiBzeZl3O *WiBzeZl3O; WiBzeZl3O++) {
        if (!(0 != be % WiBzeZl3O)) {
            sum = sum + (863 - 862) + yinshu (be / WiBzeZl3O, WiBzeZl3O);
        };
    }
    return sum;
}

int main () {
    int n, WiBzeZl3O, zAcwCu8eGUyp, slRtokOhHcU, ERrBqxwdYKk9;
    cin >> n;
    for (WiBzeZl3O = 0; WiBzeZl3O < n; WiBzeZl3O++) {
        cin >> slRtokOhHcU;
        for (zAcwCu8eGUyp = slRtokOhHcU; zAcwCu8eGUyp > (646 - 645); zAcwCu8eGUyp = zAcwCu8eGUyp - 1)
            if (slRtokOhHcU % zAcwCu8eGUyp == 0)
                ERrBqxwdYKk9 = zAcwCu8eGUyp;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << yinshu (slRtokOhHcU, ERrBqxwdYKk9) + 1 << endl;
    }
    getchar ();
    getchar ();
    return 0;
}

