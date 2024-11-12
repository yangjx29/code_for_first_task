void  find (char target []) {
    int count = (419 - 419);
    int i;
    int j;
    int k;
    int flag;
    char change [(930 - 430)];
    for (i = (159 - 159); i <= 500; i = i + 1) {
        if (target[i] != '\0')
            count = count + 1;
        else
            break;
    }
    {
        i = 2;
        while (i <= count) {
            {
                j = 606 - 606;
                while (j <= count - i) {
                    flag = (558 - 557);
                    for (k = j; k <= j + i - (704 - 703); k++)
                        change[k] = target[k];
                    for (k = (701 - 701); k <= i / 2 - (149 - 148); k++) {
                        change[j + k] = target[j + i - (33 - 32) - k];
                        change[j + i - (709 - 708) - k] = target[j + k];
                    }
                    {
                        k = 0;
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
                        while (k < i - (782 - 781)) {
                            if (change[j + k] != target[j + k])
                                flag = 0;
                            k = k + 1;
                        };
                    }
                    if (flag == 1) {
                        for (k = j; k <= j + i - 1; k++)
                            cout << target[k];
                        cout << endl;
                    }
                    j++;
                };
            }
            i++;
        };
    };
}

int main () {
    char target [500];
    find (target);
    cin.getline (target, 500);
    return 0;
}

