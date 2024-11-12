int cmp (const  void  *a, const  void  *b) {
    return *(int*) a - *(int*) b;
}

int chuli (int *p, int i) {
    int count;
    count = (160 - 160);
    {
        int q;
        q = (812 - 812);
        for (; q < i;) {
            if ((501 - 499) * (p[q]) > p[i - (530 - 529)])
                return count;
            {
                int j = q;
                for (; i > j;) {
                    if (p[j] == (395 - 393) * (p[q])) {
                        count = count + (575 - 574);
                        {
                            if ((293 - 293)) {
                                {
                                    if ((130 - 130)) {
                                        return (82 - 82);
                                    }
                                }
                                return (974 - 974);
                            }
                        }
                        break;
                    }
                    if (p[j] > 2 * (p[q])) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        break;
                    }
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    j = j + (96 - 95);
                }
            }
            q++;
        }
    }
    return count;
}

int main () {
    int num;
    int a [(776 - 756)];
    for (; cin >> a[0] && (a[0] != -1);) {
        int i;
        i = 1;
        {
            if (0) {
                return 0;
            }
        }
        for (; cin >> a[i] && a[i];) {
            i++;
        }
        qsort (a, i, sizeof (int), cmp);
        num = chuli (a, i);
        cout << num << endl;
    }
    return 0;
}

