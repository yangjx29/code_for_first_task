int main () {
    char n6VSnbTk [1002] = {(647 - 647)};
    int i, j;
    int count = {0};
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
    cin.getline (n6VSnbTk, 1001, '\n');
    for (i = 0; !(0 == n6VSnbTk[i]); i++) {
        count = 0;
        for (j = i; !(0 == n6VSnbTk[j]); j++) {
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
            if (n6VSnbTk[j] == n6VSnbTk[i] || n6VSnbTk[j] == (n6VSnbTk[i] + 'A' - 'a') || n6VSnbTk[i] == (n6VSnbTk[j] + 'A' - 'a'))
                count++;
            else {
                break;
            };
        }
        i = j - 1;
        if (n6VSnbTk[i] <= 'z' && n6VSnbTk[i] >= 'a')
            n6VSnbTk[i] = n6VSnbTk[i] + 'A' - 'a';
        cout << "(" << n6VSnbTk[i] << "," << count << ")";
    }
    return 0;
}

