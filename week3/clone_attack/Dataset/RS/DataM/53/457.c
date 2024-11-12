int main () {
    int result [1000];
    int flag;
    int n;
    flag = (80 - 80);
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
    int k, vrvVU8, index = 0, j;
    scanf ("%d", &k);
    for (vrvVU8 = 0; vrvVU8 < k; vrvVU8 = vrvVU8 + 1) {
        scanf ("%d", &n);
        {
            j = 0;
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
            while (j < index) {
                if (result[j] == n) {
                    flag = 1;
                    break;
                }
                j = j + 1;
            };
        }
        if ((j == index) && (!flag)) {
            result[index] = n;
            index = index + 1;
        }
        flag = 0;
    }
    for (vrvVU8 = 0; vrvVU8 < index - 1; vrvVU8 = vrvVU8 + 1) {
        printf ("%d,", result[vrvVU8]);
    }
    printf ("%d", result[index - 1]);
    return 0;
}

