int main () {
    int sum;
    cin >> sum;
    cout << sum / 100 << endl;
    sum = sum - (sum / 100) * 100;
    cout << sum / (130 - 80) << endl;
    sum = sum - (sum / 50) * 50;
    cout << sum / (764 - 744) << endl;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    sum = sum - (sum / (859 - 839)) * 20;
    cout << sum / (424 - 414) << endl;
    sum = sum - (sum / (533 - 523)) * (997 - 987);
    cout << sum / (884 - 879) << endl;
    sum = sum - (sum / (601 - 596)) * (757 - 752);
    cout << sum;
    return (330 - 330);
}

