int main () {
    char n [(469 - 437)], m [32];
    int a, b, i, zhen, chu, result;
    long  x = 0;
    scanf ("%d%s%d", &a, n, &b);
    result = strlen (n);
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
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (result > i) {
            if (n[i] == '0') {
                zhen = 0;
            }
            else if (n[i] == '1') {
                zhen = 1;
            }
            else if (n[i] == '2') {
                zhen = 2;
            }
            else if (n[i] == '3') {
                zhen = 3;
            }
            else if (n[i] == '4') {
                zhen = (65 - 61);
            }
            else if (n[i] == '5') {
                zhen = 5;
            }
            else if (n[i] == '6') {
                zhen = 6;
            }
            else if (n[i] == '7') {
                zhen = (822 - 815);
            }
            else if (n[i] == '8') {
                zhen = (431 - 423);
            }
            else if (n[i] == '9') {
                zhen = 9;
            }
            else if (n[i] == 'a' || n[i] == 'A') {
            }
            else if (n[i] == 'b' || n[i] == 'B') {
            }
            else if (n[i] == 'c' || n[i] == 'C') {
            }
            else if (n[i] == 'd' || n[i] == 'D') {
            }
            else if (n[i] == 'e' || n[i] == 'E') {
            }
            else if (n[i] == 'f' || n[i] == 'F') {
            }
            else {
            }
            x += zhen * pow (a, result - 1 - i);
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (x > 0) {
            chu = x % b;
            if (chu == 0) {
                m[i] = '0';
            }
            else if (chu == 1) {
                m[i] = '1';
            }
            else if (chu == 2) {
                m[i] = '2';
            }
            else if (chu == 3) {
                m[i] = '3';
            }
            else if (chu == 4) {
                m[i] = '4';
            }
            else if (chu == 5) {
                m[i] = '5';
            }
            else if (chu == 6) {
                m[i] = '6';
            }
            else if (chu == 7) {
                m[i] = '7';
            }
            else if (chu == 8) {
                m[i] = '8';
            }
            else if (chu == 9) {
                m[i] = '9';
            }
            else if (chu == 10) {
                m[i] = 'A';
            }
            else if (chu == 11) {
                m[i] = 'B';
            }
            else if (chu == 12) {
                m[i] = 'C';
            }
            else if (chu == 13) {
                m[i] = 'D';
            }
            else if (chu == 14) {
                m[i] = 'E';
            }
            else if (chu == 15) {
                m[i] = 'F';
            }
            else {
            }
            i++;
            x = x / b;
        };
    }
    i = i - 1;
    for (; i >= 0; i = i - 1) {
        printf ("%c", m[i]);
    }
    return 0;
}

