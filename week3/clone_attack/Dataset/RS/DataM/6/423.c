int main () {
    int n;
    cin >> n;
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
    for (int k = (771 - 770);
    n >= k; k = k + 1) {
        int str [(429 - 328)] [(246 - 145)];
        int count;
        int row;
        int col;
        int jlVL5X9n;
        int VviBh5tTs;
        count = 0;
        cin >> row >> col;
        {
            jlVL5X9n = 210 - 209;
            while (row >= jlVL5X9n) {
                {
                    VviBh5tTs = 465 - 464;
                    while (VviBh5tTs <= col) {
                        cin >> *(*(str + jlVL5X9n) + VviBh5tTs);
                        VviBh5tTs = VviBh5tTs +1;
                    };
                }
                jlVL5X9n = jlVL5X9n + 1;
            };
        }
        {
            jlVL5X9n = 234 - 233;
            while (jlVL5X9n <= col) {
                count = count + *(*(str + (899 - 898)) + jlVL5X9n);
                jlVL5X9n++;
            };
        }
        for (jlVL5X9n = (238 - 236); jlVL5X9n <= row; jlVL5X9n++)
            count = count + *(*(str + jlVL5X9n) + col);
        for (jlVL5X9n = col - 1; jlVL5X9n >= 1; jlVL5X9n = jlVL5X9n - 1)
            count = count + *(*(str + row) + jlVL5X9n);
        {
            jlVL5X9n = row - 1;
            while (jlVL5X9n >= (281 - 279)) {
                count = count + *(*(str + jlVL5X9n) + 1);
                jlVL5X9n = jlVL5X9n - 1;
            };
        }
        cout << count << endl;
    }
    return 0;
}

