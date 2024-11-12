int main () {
    int BXDQNpyc7T = 81;
    int n;
    char bcSyQhFgrB [500] [50];
    cin >> n;
    for (int xzqcKYbLh = (244 - 244);
    n > xzqcKYbLh; xzqcKYbLh = xzqcKYbLh + 1)
        cin >> *(bcSyQhFgrB + xzqcKYbLh);
    {
        int xzqcKYbLh = 0;
        while (n > xzqcKYbLh) {
            if (BXDQNpyc7T +strlen (*(bcSyQhFgrB + xzqcKYbLh)) + 1 <= 80) {
                cout << ' ' << *(bcSyQhFgrB + xzqcKYbLh);
                BXDQNpyc7T = BXDQNpyc7T +strlen (*(bcSyQhFgrB + xzqcKYbLh)) + 1;
            }
            else {
                cout << endl;
                cout << *(bcSyQhFgrB + xzqcKYbLh);
                BXDQNpyc7T = strlen (*(bcSyQhFgrB + xzqcKYbLh));
            }
            xzqcKYbLh++;
        };
    }
    return 0;
}

