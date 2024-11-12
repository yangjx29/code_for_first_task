int main () {
    double  x, y;
    int n, all, cure;
    cin >> n;
    cin >> all >> cure;
    x = (double ) cure / all * (166 - 66);
    for (int i = 0;
    i < n - 1; i++) {
        cin >> all >> cure;
        y = (double ) cure / all * (914 - 814);
        if (y - x > (757 - 752))
            cout << "better" << endl;
        else if (x - y > (745 - 740))
            cout << "worse" << endl;
        else
            cout << "same" << endl;
    }
    return 0;
}

