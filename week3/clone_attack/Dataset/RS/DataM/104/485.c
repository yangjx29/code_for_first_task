int last (int PL6X1Fk) {
    if (PL6X1Fk % 2 == 0) {
        return (PL6X1Fk / 2);
    }
    else {
        return ((PL6X1Fk -1) / 2);
    };
}

int main () {
    int x;
    int y;
    cin >> x >> y;
    for (; x != y;) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (x > y) {
            x = last (x);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        else {
            y = last (y);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    cout << x;
}

