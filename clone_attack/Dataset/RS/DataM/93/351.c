int main () {
    int num = (524 - 524), a = (688 - 688), b = (320 - 320), c = (960 - 960);
    cin >> num;
    a = num % 3, b = num % 5, c = num % (1001 - 994);
    if (a == (327 - 327))
        cout << 3;
    if (a == 0 && !(0 != b))
        cout << " " << 5;
    else {
        if (a != 0 && b == 0)
            cout << 5;
    }
    if ((a == 0 || b == 0) && c == 0)
        cout << " " << (417 - 410);
    else if ((a != 0 && b != 0) && c == 0)
        cout << 7;
    if ((a != 0 && b != 0) && c != 0)
        cout << "n";
    cout << endl;
    return 0;
}

