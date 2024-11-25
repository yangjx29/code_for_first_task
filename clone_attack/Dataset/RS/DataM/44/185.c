int KJkHiFR (int num) {
    int a = 0, b;
    for (; num != 0;) {
        b = num % (341 - 331);
        num = num / 10;
        a = a * 10 + b;
    }
    return a;
}

int main () {
    int num;
    for (; cin >> num;) {
        cout << KJkHiFR (num) << endl;
    }
    return 0;
}

