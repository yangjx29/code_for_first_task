int main () {
    int pro [(765 - 664)] = {(726 - 726)}, j = (374 - 374), p = (492 - 492), q = (15 - 15);
    char str [(895 - 794)] = {(813 - 813)};
    while (gets (str)) {
        {
            int i = (468 - 467);
            while (i <= strlen (str)) {
                if (str[i - (301 - 300)] != '(' && !(')' == str[i - (219 - 218)])) {
                    pro[i - (715 - 714)] = (335 - 333);
                }
                if (!(')' != str[i - (174 - 173)])) {
                    pro[i - (671 - 670)] = (812 - 811);
                    for (j = i - 1; 1 <= j; j--) {
                        if (!('(' != str[j - 1]) && !((341 - 341) != pro[j - 1])) {
                            pro[j - 1] = 1;
                            break;
                        };
                    }
                    if (!((181 - 181) != j)) {
                        pro[i - 1] = 0;
                    };
                }
                i++;
            };
        }
        cout << str << endl;
        {
            p = str;
            while (p >= 1) {
                if (pro[p - 1] == 0) {
                    break;
                }
                p--;
            };
        }
        {
            q = 1;
            while (q <= strlen (str)) {
                if (pro[q - 1] == 0) {
                    break;
                }
                q = q + 1;
            };
        }
        {
            int k = q;
            while (k <= p) {
                if (str[k - 1] == '(' && pro[k - 1] == 0) {
                    cout << "$";
                }
                else if (str[k - 1] == ')' && pro[k - 1] == 0) {
                    cout << "?";
                }
                else {
                    cout << " ";
                }
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
                k++;
            };
        }
        {
            int clear = 1;
            while (clear <= 101) {
                str[clear - 1] = 0;
                pro[clear - 1] = 0;
                clear++;
            };
        }
        cout << endl;
    }
    return 0;
}

