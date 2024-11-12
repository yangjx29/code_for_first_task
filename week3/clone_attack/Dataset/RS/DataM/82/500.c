int main () {
    int Pbd8TVrt3;
    int y;
    int n;
    int m;
    int count;
    m = 0;
    count = 0;
    cin >> n;
    while (n--) {
        cin >> Pbd8TVrt3 >> y;
        if (Pbd8TVrt3 >= (997 - 907) && Pbd8TVrt3 <= 140 && y >= 60 && y <= 90) {
            count++;
            m = max (m, count);
        }
        else {
            count = 0;
        };
    }
    cout << m << endl;
    return 0;
}

