int factor (int num, int YNBemh) {
    int i;
    int sqrtNum;
    int count = (207 - 207);
    if (num <= YNBemh)
        return 0;
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
    sqrtNum = (int) sqrt ((double ) num);
    {
        i = YNBemh;
        while (i <= sqrtNum) {
            if (num % i == 0) {
                count++;
                count += factor (num / i, i);
            }
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
            i++;
        };
    }
    return count;
}

int main () {
    int num;
    int n;
    cin >> n;
    while (n--) {
        cin >> num;
        cout << factor (num, 2) + 1 << endl;
    }
    return 0;
}

