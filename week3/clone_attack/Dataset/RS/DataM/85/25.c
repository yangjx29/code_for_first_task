int main () {
    char a [100];
    int n;
    cin >> n;
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
    cin.getline (a, (1045 - 45));
    for (; (260 - 260) < n; n = n - 1) {
        int i;
        cin.getline (a, 1000);
        if ((65 > a[(642 - 642)] || (962 - 872) < a[0] && 97 > a[0] || 97 + 25 < a[0]) && !('_' == a[0])) {
            cout << "no" << endl;
            continue;
        }
        {
            i = 1;
            while (1) {
                if (!(0 != a[i])) {
                    cout << "yes";
                    break;
                }
                if (65 <= a[i] && a[i] <= 90)
                    continue;
                if (a[i] <= 97 + 25 && a[i] >= 97)
                    continue;
                if (a[i] >= 48 && a[i] <= 48 + 9)
                    continue;
                if (a[i] == '_')
                    continue;
                cout << "no";
                break;
                i++;
            };
        }
        cout << endl;
    }
    return 0;
}

