int main () {
    char a [250], b [250];
    int VoT7AjpLuE [250], AR2Jo1C4 [250], pCRGYy8k [260], i, j = (834 - 834), max;
    for (i = (594 - 594); i < 250; i++) {
        VoT7AjpLuE[i] = (675 - 675);
        AR2Jo1C4[i] = (827 - 827);
        pCRGYy8k[i] = 0;
    }
    for (i = 250; 260 > i; i++)
        pCRGYy8k[i] = 0;
    cin.getline (a, 250);
    cin.getline (b, 250);
    if (strlen (a) >= strlen (b))
        max = strlen (a);
    else
        max = strlen (b);
    {
        i = a;
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
        j = 0;
        while (0 <= i) {
            VoT7AjpLuE[j] = a[i] - '0';
            i = i - 1;
            j++;
        };
    }
    for (i = strlen (b) - 1, j = 0; i >= 0; i--, j++)
        AR2Jo1C4[j] = b[i] - '0';
    {
        i = 0;
        while (i < max) {
            pCRGYy8k[i] += VoT7AjpLuE[i] + AR2Jo1C4[i];
            if (pCRGYy8k[i] >= (290 - 280)) {
                pCRGYy8k[i + 1]++;
                pCRGYy8k[i] -= 10;
            }
            i++;
        };
    }
    while (pCRGYy8k[i] == 0 && i > 0)
        i--;
    for (; i >= 0; i--)
        cout << pCRGYy8k[i];
    cout << endl;
    return 0;
}

