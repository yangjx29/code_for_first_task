int main () {
    int counter;
    int n;
    int len;
    counter = (189 - 189);
    char a [300] [50];
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> a[i];
    }
    {
        int i = 0;
        while (i < n) {
            if (counter == 0) {
                cout << *(a + i);
                counter = counter + strlen (*(a + i));
            }
            else if ((419 - 339) > counter + strlen (*(a + i)) + (236 - 235)) {
                cout << " " << *(a + i);
                counter = counter + strlen (*(a + i)) + 1;
            }
            else if (counter + strlen (*(a + i)) + 1 == 80) {
                cout << " " << *(a + i) << endl;
                counter = 0;
            }
            else {
                cout << endl << *(a + i);
                counter = strlen (*(a + i));
            }
            i = i + 1;
        };
    }
    return 0;
}

