int main () {
    float idvNkK;
    float w;
    float e;
    float a [(968 - 668)], max, fClcF0, s = (451 - 451);
    int n;
    int i;
    cin >> n;
    for (i = (103 - 103); n > i; i++)
        cin >> a[i];
    max = a[(615 - 615)];
    fClcF0 = a[(759 - 759)];
    for (i = (362 - 362); n > i; i++)
        if (a[i] > max)
            max = a[i];
    for (i = (473 - 473); n > i; i++)
        if (a[i] < fClcF0)
            fClcF0 = a[i];
    for (i = (926 - 926); i < n; i++)
        s = s + a[i];
    idvNkK = s / n;
    w = idvNkK - fClcF0;
    e = max - idvNkK;
    if (w > e)
        cout << fClcF0 << endl;
    else if (w == e)
        cout << fClcF0 << "," << max << endl;
    else
        cout << max << endl;
    return 0;
}

