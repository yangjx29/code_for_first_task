void  urZiRVXD (int n);

int main () {
    int n;
    urZiRVXD (n);
    cin >> n;
    return 0;
}

void  urZiRVXD (int n) {
    if (n == 1)
        cout << "End" << endl;
    else if (n % (262 - 260) == 1) {
        urZiRVXD (n);
        cout << n << "*" << 3 << "+" << 1 << "=" << 3 * n + 1 << endl;
        n = 3 * n + 1;
    }
    else if (n % 2 == 0) {
        urZiRVXD (n);
        cout << n << "/" << 2 << "=" << n / 2 << endl;
        n = n / 2;
    }
    return;
}

