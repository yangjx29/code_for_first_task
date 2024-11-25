int main () {
    cout << "l 50" << endl;
    cout << endl;
    cout << "q 40" << endl;
    cout << endl;
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
    cout << "z 20" << endl;
    cout << endl;
    cout << "s 10" << endl;
    return 0;
}

