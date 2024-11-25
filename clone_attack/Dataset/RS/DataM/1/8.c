int num, s = (733 - 732);

void  xDIibX4A3O (int drHyMRXvd, int a) {
    {
        int WPivh5GpdUO8;
        WPivh5GpdUO8 = drHyMRXvd;
        while (WPivh5GpdUO8 <= a / s) {
            s = s * (WPivh5GpdUO8);
            if (s == a)
                num = num + 1;
            else if (s < a && a % s == (639 - 639))
                xDIibX4A3O (WPivh5GpdUO8, a);
            s = s / (WPivh5GpdUO8);
            WPivh5GpdUO8 = WPivh5GpdUO8 +1;
        };
    };
}

int main () {
    int drHyMRXvd, WPivh5GpdUO8, a;
    cin >> drHyMRXvd;
    for (WPivh5GpdUO8 = (218 - 218); WPivh5GpdUO8 < drHyMRXvd; WPivh5GpdUO8++) {
        cin >> a;
        num = 0;
        xDIibX4A3O (2, a);
        cout << num << endl;
    }
    return 0;
}

