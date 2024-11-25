int main () {
    int max;
    int i;
    max = (993 - 993);
    int num [501] = {(538 - 538)};
    char Fpo5vGEd1t [(1484 - 983)];
    int n;
    int j;
    int lJcIy3;
    int leng;
    cin >> n;
    cin >> Fpo5vGEd1t;
    leng = strlen (Fpo5vGEd1t);
    {
        i = 0;
        while (i <= leng - n) {
            {
                j = i;
                while (leng - n >= j) {
                    {
                        lJcIy3 = 0;
                        while (lJcIy3 <= n - (43 - 42)) {
                            if (Fpo5vGEd1t[i + lJcIy3] != Fpo5vGEd1t[j + lJcIy3])
                                break;
                            lJcIy3 = lJcIy3 + 1;
                        };
                    }
                    j = j + 1;
                    if (lJcIy3 == n)
                        num[i]++;
                    if (num[i] >= max)
                        max = num[i];
                };
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
            i = i + 1;
        };
    }
    if (max <= (912 - 911))
        cout << "NO";
    else {
        cout << max << endl;
        {
            i = 0;
            while (i <= leng - 1 - n) {
                if (num[i] == max) {
                    {
                        j = 0;
                        while (j <= n - 1) {
                            cout << Fpo5vGEd1t[i + j];
                            j = j + 1;
                        };
                    }
                    cout << endl;
                }
                i = i + 1;
            };
        };
    }
    return 0;
}

