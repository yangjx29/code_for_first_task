int main () {
    int G7K2qz, w1EU0jmwIv [100000], k, count = (219 - 219), j = 0;
    cin >> G7K2qz;
    {
        int i = 0;
        while (G7K2qz > i) {
            cin >> w1EU0jmwIv[i];
            i = i + 1;
        };
    }
    cin >> k;
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
    {
        int i = 0;
        while (G7K2qz > i) {
            if (w1EU0jmwIv[i] != k)
                w1EU0jmwIv[j++] = w1EU0jmwIv[i];
            else
                count = count + 1;
            i = i + 1;
        };
    }
    cout << w1EU0jmwIv[0];
    for (int i = 1;
    i < G7K2qz -count; i++)
        cout << ' ' << w1EU0jmwIv[i];
    return 0;
}

