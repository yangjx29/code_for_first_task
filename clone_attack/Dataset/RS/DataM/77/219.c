int main () {
    int qMJxXkKYfW1;
    int sum;
    int sUfikq [100];
    qMJxXkKYfW1 = 0;
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
    sum = 0;
    char KZ9CPN6DjVB, sign;
    sign = cin.peek ();
    do {
        cin >> KZ9CPN6DjVB;
        if (KZ9CPN6DjVB == sign)
            sUfikq[qMJxXkKYfW1++] = sum++;
        else
            cout << sUfikq[--qMJxXkKYfW1] << ' ' << sum++ << endl;
    }
    while (qMJxXkKYfW1 > 0);
    return 0;
}

