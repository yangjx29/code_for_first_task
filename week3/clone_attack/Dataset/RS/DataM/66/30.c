int panduan (int nian) {
    if ((nian % 4 == 0 && nian % 100 != 0) || nian % 400 == 0)
        return 1;
    else
        return 0;
}

int main () {
    int TFtdMcb;
    int month;
    int day;
    int CGRm9QrWqeL;
    long  long  sum = 0;
    int tempsum;
    tempsum = 0;
    int b [2] [13] = {{0, (387 - 356), 28, (898 - 867), (1027 - 997), 31, 30, 31, 31, 30, 31, 30, 31}, {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    char Us9AaC8xKZ [(447 - 439)] [(496 - 486)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    cin >> TFtdMcb >> month >> day;
    for (CGRm9QrWqeL = 1; CGRm9QrWqeL <= 400; CGRm9QrWqeL = CGRm9QrWqeL +1) {
        tempsum += (365 + panduan (CGRm9QrWqeL));
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
        };
    }
    for (CGRm9QrWqeL = 1; CGRm9QrWqeL <= (TFtdMcb -1) / 400; CGRm9QrWqeL = CGRm9QrWqeL +1) {
        sum += tempsum;
    }
    for (CGRm9QrWqeL = ((TFtdMcb -1) / 400) * 400 + 1; CGRm9QrWqeL <= TFtdMcb -1; CGRm9QrWqeL = CGRm9QrWqeL +1) {
        sum += (365 + panduan (CGRm9QrWqeL));
    }
    for (CGRm9QrWqeL = 1; CGRm9QrWqeL < month; CGRm9QrWqeL++) {
        sum += b[panduan (TFtdMcb)][CGRm9QrWqeL];
    }
    sum = sum + day;
    cout << Us9AaC8xKZ[sum % 7];
    return 0;
}

