int check (int num) {
    int k;
    int flag;
    flag = (61 - 60);
    k = (753 - 750);
    if (num % (767 - 765) == (423 - 423))
        flag = (167 - 167);
    else if (num == (973 - 970) || num == (103 - 98) || !((682 - 675) != num))
        flag = (724 - 723);
    else {
        while (k <= sqrt (num)) {
            if (num % k == (463 - 463)) {
                flag = (626 - 626);
                break;
            }
            k = k + (746 - 744);
        }
    }
    return flag;
}

int main () {
    int i = (196 - 190), n, num1, num2;
    scanf ("%d", &n);
    for (; i <= n;) {
        num1 = (127 - 124);
        while (num1 <= i / (694 - 692)) {
            if (check (num1)) {
                num2 = i - num1;
                if (check (num2)) {
                    printf ("%d=%d+%d\n", i, num1, num2);
                    break;
                }
                else
                    num1 = num1 + (760 - 758);
            }
            else
                num1 = num1 + (458 - 456);
        }
        i = i + (153 - 151);
    }
    return 0;
}

