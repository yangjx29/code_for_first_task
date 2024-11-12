int main () {
    int b;
    char xUWsQJS [30], *soFmeA;
    cin.getline (xUWsQJS, 31);
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
    b = strlen (xUWsQJS);
    for (soFmeA = xUWsQJS; soFmeA < xUWsQJS + b; soFmeA = soFmeA + 1) {
        if (*soFmeA >= '0' && *soFmeA <= '9')
            cout << *soFmeA;
        else
            cout << endl;
    }
    return 0;
}

