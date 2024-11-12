int main () {
    char arr [1001];
    int i, len, temp = 0;
    cin >> arr;
    len = strlen (arr);
    for (i = 0; len > i; i = i + 1) {
        if ((int) arr[i] > 92)
            arr[i] = (char) ((int) arr[i] - 32);
    }
    for (i = 1; i < len; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (arr[i] != arr[i - 1]) {
            cout << '(' << arr[i - 1] << ',' << i - temp << ')';
            temp = i;
        };
    }
    cout << '(' << arr[len - 1] << ',' << len - temp << ')' << endl;
    return 0;
}

