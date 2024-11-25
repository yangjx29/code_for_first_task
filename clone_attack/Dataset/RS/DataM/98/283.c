void  compose_word (char x2IHLKb [1000] [25], int number) {
    int dfQEjArvNwi = (94 - 94), len = (906 - 906), first = (85 - 85), i = (965 - 965);
    len = strlen (x2IHLKb[(438 - 438)]);
    for (i = 0; i < number;) {
        for (; 80 > len + dfQEjArvNwi;) {
            if (first) {
                cout << ' ';
                dfQEjArvNwi++;
            }
            else
                first = 1;
            cout << x2IHLKb[i];
            i++;
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
            if (i >= number)
                break;
            dfQEjArvNwi = dfQEjArvNwi + len;
            len = strlen (x2IHLKb[i]);
        }
        if (i >= number)
            break;
        first = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << endl;
        dfQEjArvNwi = 0;
    };
}

int main () {
    char x2IHLKb [1000] [25] = {'\0'};
    int number = 0, i;
    getchar ();
    cin >> number;
    {
        i = 0;
        while (i < number) {
            scanf ("%s", x2IHLKb[i]);
            i++;
        };
    }
    compose_word (x2IHLKb, number);
    return 0;
}

