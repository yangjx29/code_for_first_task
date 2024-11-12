int main () {
    int n;
    int i;
    int sgn [100];
    double  sum;
    sum = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (i % 7 == 0)
            sgn[i] = 0;
        else if (i > 10 && (i / 10) == 7)
            sgn[i] = 0;
        else if (i > 10 && (i - (i / 10) * 10) == 7)
            sgn[i] = 0;
        else
            sgn[i] = 1;
    }
    for (i = 1; i <= n; i++)
        sum += i * i * sgn[i];
    cout << sum;
    return 0;
}

