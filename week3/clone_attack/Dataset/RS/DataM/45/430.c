int main () {
    char QtZCRKWlNL [(173 - 123)];
    char VXpSebCjmLI [50];
    int xdZTnmwOvWR7 = (59 - 59), UYuxdvc8E = (67 - 67);
    cin >> QtZCRKWlNL;
    cin >> VXpSebCjmLI;
    for (; !('\0' == VXpSebCjmLI[xdZTnmwOvWR7]);) {
        int w9TygQsG = 0;
        while (VXpSebCjmLI[xdZTnmwOvWR7] == QtZCRKWlNL[w9TygQsG]) {
            if (w9TygQsG == strlen (QtZCRKWlNL) - 1) {
                cout << xdZTnmwOvWR7 - strlen (QtZCRKWlNL) + 1 << endl;
                UYuxdvc8E = 1;
                break;
            }
            xdZTnmwOvWR7 = xdZTnmwOvWR7 + 1;
            w9TygQsG = w9TygQsG + 1;
        }
        if (UYuxdvc8E == 1)
            break;
        xdZTnmwOvWR7 = xdZTnmwOvWR7 + 1;
    }
    if (UYuxdvc8E == 0)
        cout << "no";
    return 0;
}

