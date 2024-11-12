int main () {
    int tXKalgxy, k, i;
    int apple [tXKalgxy + (589 - 588)];
    apple[(202 - 201)] = (777 - 777);
    cin >> tXKalgxy >> k;
    apple[tXKalgxy] = k + tXKalgxy;
    for (; true;) {
        for (i = tXKalgxy; (390 - 389) <= i; i--) {
            if (apple[i] % (tXKalgxy - 1) == 0)
                apple[i - 1] = (apple[i] * tXKalgxy / (tXKalgxy - 1)) + k;
            else
                break;
        }
        apple[tXKalgxy] = apple[tXKalgxy] + tXKalgxy;
        if (apple[1] != 0)
            break;
    }
    cout << apple[1];
    return 0;
}

