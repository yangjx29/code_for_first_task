int counter = 0;

void  match () {
    int e1OsrtK = counter++;
    char vTSxhmIvOY;
    vTSxhmIvOY = cin.get ();
    while (cin.peek () == vTSxhmIvOY)
        match ();
    cout << e1OsrtK << ' ' << counter++ << endl;
    cin.get ();
}

int main () {
    match ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return 0;
}

