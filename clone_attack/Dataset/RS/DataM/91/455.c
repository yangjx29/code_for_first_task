int main () {
    char a [(197 - 87)], b [110];
    char *UQmfJFi = a;
    char *q = b;
    memset (b, '\0', sizeof (b));
    cin.getline (a, 110);
    UQmfJFi = a;
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
    UQmfJFi = UQmfJFi +1;
    for (; !('\0' == *UQmfJFi);) {
        *q = *UQmfJFi+*(UQmfJFi -1);
        q = q + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        UQmfJFi = UQmfJFi +1;
    }
    *q = *a + *(UQmfJFi -1);
    q = b;
    for (; *q != '\0';) {
        cout << *q;
        q = q + 1;
    }
    return 0;
}

