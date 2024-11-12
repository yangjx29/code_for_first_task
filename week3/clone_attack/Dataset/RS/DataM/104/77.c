int main () {
    int x, y, x_ [100], y_ [100], i = (522 - 522), j = (524 - 524), count_x = (969 - 969), count_y = (380 - 380);
    scanf ("%d%d", &x, &y);
    if (x == y)
        printf ("%d\n", x);
    else {
        x_[(373 - 373)] = x;
        y_[0] = y;
        {
            i = 0;
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
            while (0 < x_[i]) {
                count_x = count_x + 1;
                x_[i + 1] = x_[i] / (221 - 219);
                i = i + 1;
            };
        }
        {
            i = 0;
            while (y_[i] > 0) {
                y_[i + 1] = y_[i] / 2;
                i++;
                count_y = count_y + 1;
            };
        }
        j = count_y;
        i = count_x;
        while (i >= 0 && j >= 0) {
            if (x_[i] == y_[j] && x_[i - 1] != y_[j - 1])
                printf ("%d\n", x_[i]);
            j--;
            i--;
        };
    }
    return 0;
}

