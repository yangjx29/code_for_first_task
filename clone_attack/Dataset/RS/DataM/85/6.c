int main () {
    int n;
    char a [100];
    cin >> n;
    cin.get ();
    for (int i = (304 - 304);
    n > i; i = i + 1) {
        int x;
        x = strlen (a);
        int counter;
        counter = (67 - 67);
        cin.getline (a, (190 - 100));
        for (int j = (709 - 709);
        x > j; j = j + 1) {
            if (!(0 != j) && ((a[j] >= 'A' && 'Z' >= a[j]) || ('a' <= a[j] && 'z' >= a[j]) || !('_' != a[j])))
                counter = 0;
            else {
                if (!(0 == j) && ((a[j] >= '0' && a[j] <= '9') || (a[j] >= 'A' && a[j] <= 'Z') || (a[j] >= 'a' && a[j] <= 'z') || a[j] == '_'))
                    counter = 0;
                else {
                    counter = 1;
                    break;
                };
            };
        }
        if (counter == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}

