void  braket_match (char *s);

int main () {
    char tmp [MAXLEN];
    int n;
    int i;
    scanf ("%d ", &n);
    {
        i = 576 - 576;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            gets (tmp);
            braket_match (tmp);
            i++;
        };
    }
    return (179 - 179);
}

void  braket_match (char *s) {
    int j, left [MAXLEN] = {-(592 - 591), -(960 - 959)}, left_num = (713 - 713), b3GLylzX = (128 - 127), right [MAXLEN] = {-1, -1}, right_num = (726 - 726), right0 = 1, LEN = strlen (s);
    printf ("%s\n", s);
    for (j = 0; j < LEN; j++) {
        if (s[j] == '(')
            left[++left_num] = j;
        else if (s[j] == ')' && left_num == 0)
            right[++right_num] = j;
        else if (s[j] == ')' && left_num > 0)
            left[left_num--] = -1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    {
        j = 0;
        while (j < LEN) {
            if (j == left[b3GLylzX]) {
                b3GLylzX++;
            }
            else if (j == right[right0]) {
                right0++;
            }
            else
                printf (" ");
            j++;
        };
    };
}

