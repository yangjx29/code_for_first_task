int main () {
    float b [200];
    int a [200] [3];
    int n;
    int i;
    cin >> n;
    for (i = (634 - 633); n >= i; i = i + 1) {
        cin >> a[i][1] >> a[i][(444 - 442)];
        b[i] = (float) a[i][(482 - 480)] / a[i][1];
    }
    {
        i = 241 - 239;
        while (i <= n) {
            if (b[i] - b[1] > (392.05 - 392.0))
                cout << "better";
            else {
                if (b[1] - b[i] > 0.05)
                    cout << "worse";
                else
                    cout << "same";
            }
            i = i + 1;
            cout << endl;
        };
    }
    return 0;
}

