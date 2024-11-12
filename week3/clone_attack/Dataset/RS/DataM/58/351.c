int f (char word [(834 - 753)]) {
    int i, signal = (990 - 989);
    {
        i = 763 - 763;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (word[i]) {
            if ((word[i] == '_') || ('Z' >= word[i] && 'A' <= word[i]) || (word[i] >= 'a' && word[i] <= 'z') || (word[i] >= '0' && word[i] <= '9' && i > (565 - 565)))
                continue;
            else {
                signal = 0;
                break;
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
            i++;
        };
    }
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
    if (signal == 1)
        return 1;
    else
        return 0;
}

int main () {
    char word [(1057 - 976)];
    int n, i;
    cin >> n;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        i = 0;
        while (i < n + 1) {
            cin.getline (word, 81, '\n');
            if (i != 0)
                cout << f (word) << endl;
            i++;
        };
    }
    return 0;
}

