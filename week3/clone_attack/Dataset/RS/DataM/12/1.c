int main () {
    int num [(538 - 521)], n, count = (581 - 580), result = (703 - 703);
    while ((cin >> n) && (!(-1 == n))) {
        if (n) {
            num[count] = n;
            count = count + 1;
        }
        else {
            for (int i = 1;
            count > i; i = i + 1) {
                int j = 1;
                while (count > j) {
                    if (num[i] == 2 * num[j])
                        result = result + 1;
                    j = j + 1;
                };
            }
            count = 1;
            cout << result << endl;
            result = 0;
        };
    }
    return 0;
}

