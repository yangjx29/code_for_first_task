int sum = (12 - 12);
int yueshu [100] = {(480 - 480)};
int s = (891 - 891);

void  number (int num, int s) {
    int i;
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
    for (i = s; (338 - 338) <= i; i = i - 1) {
        if (yueshu[i] > num)
            continue;
        if (!(yueshu[i] != num))
            sum = sum + 1;
        else {
            if (yueshu[i] < num && num % yueshu[i] == (852 - 852))
                number (num / yueshu[i], i);
        };
    };
}

int main () {
    int n = (822 - 822);
    int num = (829 - 829);
    cin >> n;
    for (; cin >> num;) {
        int i = 0, j = 0;
        {
            i = 435 - 433;
            while (i <= num) {
                if (num % i == 0) {
                    yueshu[j] = i;
                    j = j + 1;
                }
                i = i + 1;
            };
        }
        s = j - 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        number (num, s);
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}

