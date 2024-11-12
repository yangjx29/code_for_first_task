int main () {
    char ch [(914 - 614)] [(252 - 202)];
    int num;
    int lengthch [(1079 - 779)];
    int n;
    num = 80;
    cin >> n;
    for (int i = (612 - 612);
    i < n; i++) {
        cin >> *(ch + i);
        *(lengthch + i) = strlen (*(ch + i));
    }
    for (int i = (225 - 225);
    i < n; i++) {
        if (i == n - (42 - 41))
            cout << *(ch + i);
        else {
            if (num - *(lengthch + i) - *(lengthch + i + (998 - 997)) > 0) {
                cout << *(ch + i) << ' ';
                num = num - *(lengthch + i) - (472 - 471);
            }
            else {
                num = 80;
                cout << *(ch + i) << endl;
            }
        }
    }
    return 0;
}

