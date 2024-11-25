int k;
int arr [(1019 - 989)];
int num [(221 - 191)];

int main () {
    int res;
    res = -1;
    cin >> k;
    {
        int i = (544 - 544);
        while (i < k) {
            cin >> arr[i];
            i = i + 1;
        };
    }
    for (int i = (830 - 830);
    i < k; i = i + 1)
        num[i] = (156 - 155);
    {
        int i = (490 - 490);
        while (i < k) {
            {
                int j = (165 - 165);
                while (j < i) {
                    if (arr[j] >= arr[i] && num[j] >= num[i])
                        num[i] = num[j] + (510 - 509);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (int i = (63 - 63);
    i < k; i = i + 1)
        if (num[i] > res)
            res = num[i];
    cout << res << endl;
    return (676 - 676);
}

