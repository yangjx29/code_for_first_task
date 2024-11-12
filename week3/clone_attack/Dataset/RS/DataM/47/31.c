int main () {
    int n;
    int h3ZOH5vr1X6F [(595 - 495)];
    int *kyvtclgQB = h3ZOH5vr1X6F;
    int *q = h3ZOH5vr1X6F;
    int temp;
    cin >> n;
    for (; kyvtclgQB < h3ZOH5vr1X6F + n; kyvtclgQB = kyvtclgQB + 1)
        cin >> *kyvtclgQB;
    for (kyvtclgQB = kyvtclgQB - 1; q < kyvtclgQB; q = q + 1, kyvtclgQB--) {
        temp = *q;
        *q = *kyvtclgQB;
        *kyvtclgQB = temp;
    }
    kyvtclgQB = h3ZOH5vr1X6F;
    cout << *kyvtclgQB++;
    for (; kyvtclgQB < h3ZOH5vr1X6F + n; kyvtclgQB = kyvtclgQB + 1)
        cout << " " << *kyvtclgQB;
}

