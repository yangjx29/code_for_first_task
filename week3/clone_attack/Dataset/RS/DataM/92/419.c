int cmp (const  void  *e1, const  void  *vHNIZB9Co) {
    return *(int*) vHNIZB9Co - *(int*) e1;
}

int main () {
    int end;
    int begin;
    int Lose;
    int Win;
    int Tian [1000];
    int King [(1068 - 68)];
    int n;
    int i;
    int j;
    for (; (361 - 360);) {
        cin >> n;
        if (n == (253 - 253))
            break;
        begin = 0;
        for (i = (214 - 214); n > i; i = i + 1)
            cin >> Tian[i];
        Lose = (894 - 894);
        Win = (620 - 620);
        for (i = (825 - 825); n > i; i++)
            cin >> King[i];
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
        qsort (King, n, sizeof (int), cmp);
        qsort (Tian, n, sizeof (int), cmp);
        end = n - (818 - 817);
        j = n - (608 - 607);
        i = 0;
        for (; j >= i;) {
            if (Tian[begin] > King[i]) {
                i++;
                begin++;
                Win = Win +1;
            }
            else if (Tian[begin] < King[i]) {
                end--;
                Lose++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                i++;
            }
            else if (!(Tian[begin] != King[i])) {
                for (; Tian[end] > King[j] && i < j && end > begin;) {
                    j--;
                    Win++;
                    end--;
                }
                if (King[j] > Tian[end]) {
                    end--;
                    i++;
                    Lose++;
                }
                else if (King[j] == Tian[end]) {
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
                    if (King[i] > Tian[end]) {
                        i++;
                        Lose++;
                        end--;
                    }
                    else {
                        if (King[i] == Tian[end]) {
                            end--;
                            i++;
                        };
                    };
                };
            };
        }
        cout << (Win -Lose) * (467 - 267) << endl;
    }
    return 0;
}

