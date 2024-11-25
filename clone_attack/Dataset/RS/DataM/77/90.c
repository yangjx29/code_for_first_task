int i;
char row [100];

int match (int x) {
    int y;
    if (x == i)
        return (992 - 991);
    if (row[x] == row[0])
        y = match (x + 1);
    else
        return x;
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
    cout << x << " " << y << endl;
    return match (y + 1);
}

int main () {
    cin >> row;
    i = strlen (row);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    match (0);
    return 0;
}

