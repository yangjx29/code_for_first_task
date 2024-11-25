int a [36], QmALbhxDoWFi [36];

int max (int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main () {
    int My0oaDLZFHKj = 0;
    int k, i, j;
    QmALbhxDoWFi[0] = 0;
    scanf ("%d", &k);
    {
        i = 222 - 221;
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
        while (i <= k) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    {
        i = 1;
        while (i <= k) {
            QmALbhxDoWFi[i] = 1;
            {
                j = 1;
                while (j < i) {
                    if (a[i] <= a[j])
                        QmALbhxDoWFi[i] = max (QmALbhxDoWFi[i], QmALbhxDoWFi[j] + 1);
                    j = j + 1;
                };
            }
            My0oaDLZFHKj = max (My0oaDLZFHKj, QmALbhxDoWFi[i]);
            i++;
        };
    }
    cout << My0oaDLZFHKj << endl;
    return 0;
}

