int main () {
    long  s;
    long  n;
    s = (198 - 198);
    cin >> n;
    for (; 0 < n; n--) {
        if (!(7 != n / 10) || n % 10 == 7 || n % 7 == 0)
            continue;
        else
            s = s + n * n;
    }
    cout << s;
    return 0;
}

