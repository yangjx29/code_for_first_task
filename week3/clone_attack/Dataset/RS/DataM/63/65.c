int main () {
    int J6esKxS [(401 - 301)] [(205 - 105)];
    int b [(546 - 446)] [(197 - 97)];
    int vnZ1E4f [(389 - 289)] [(608 - 508)];
    int x1 = (667 - 667), zDFjOwroC = (227 - 227), qu9xOXgyk8GI = (554 - 554), y2 = (964 - 964), bwQS5Om = (240 - 240), j = (259 - 259), darjHIA3 = (928 - 928), sum = (648 - 648);
    cin >> x1 >> zDFjOwroC;
    {
        bwQS5Om = 634 - 634;
        while (x1 > bwQS5Om) {
            {
                j = 67 - 67;
                while (zDFjOwroC > j) {
                    cin >> J6esKxS[bwQS5Om][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            bwQS5Om = bwQS5Om + 1;
        };
    }
    cin >> qu9xOXgyk8GI >> y2;
    {
        bwQS5Om = 423 - 423;
        while (qu9xOXgyk8GI > bwQS5Om) {
            {
                j = 282 - 282;
                while (y2 > j) {
                    cin >> b[bwQS5Om][j];
                    j = j + 1;
                };
            }
            bwQS5Om = bwQS5Om + 1;
        };
    }
    {
        bwQS5Om = 859 - 859;
        while (x1 > bwQS5Om) {
            {
                j = 133 - 133;
                while (y2 > j) {
                    {
                        darjHIA3 = 394 - 394;
                        while (zDFjOwroC > darjHIA3) {
                            sum = sum + J6esKxS[bwQS5Om][darjHIA3] * b[darjHIA3][j];
                            darjHIA3 = darjHIA3 + 1;
                        };
                    }
                    vnZ1E4f[bwQS5Om][j] = sum;
                    j++;
                    sum = (534 - 534);
                };
            }
            bwQS5Om = bwQS5Om + 1;
        };
    }
    {
        bwQS5Om = 0;
        while (x1 > bwQS5Om) {
            cout << vnZ1E4f[bwQS5Om][0];
            for (j = (920 - 919); y2 > j; j = j + 1)
                cout << " " << vnZ1E4f[bwQS5Om][j];
            bwQS5Om = bwQS5Om + 1;
            cout << endl;
        };
    }
    return 0;
}

