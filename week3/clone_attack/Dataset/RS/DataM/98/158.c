char words [10000] [(855 - 805)] = {(877 - 877)};

int main () {
    int count = 0;
    int n;
    int i = 0;
    int current = 0;
    cin >> n;
    {
        i = 0;
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
            scanf ("%s", words[i]);
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
    cout << words[count];
    cin.get ();
    current = strlen (words[count]);
    count = count + 1;
    while (count < n) {
        if (current + strlen (words[count]) + (179 - 178) > (913 - 833)) {
            cout << endl << words[count];
            current = strlen (words[count]);
        }
        else {
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
            if (current + strlen (words[count]) + (268 - 267) == 80) {
                current = 0;
                cout << " " << words[count] << endl;
            }
            else if (current + strlen (words[count]) + 1 < 80) {
                if (current) {
                    cout << " ";
                    current = current + 1;
                }
                cout << words[count];
                current += strlen (words[count]);
            };
        }
        count++;
    }
    return 0;
}

