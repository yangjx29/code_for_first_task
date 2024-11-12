int main () {
    int n2593qI = 0;
    int KaMc8AqVwdr = 0, wzhwHqTJvSB = 0;
    int A9iUxwm = 0, k = 0;
    int L56IvYomh3 [1000] = {0};
    scanf ("%d", &A9iUxwm);
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
    scanf ("%d", &k);
    for (KaMc8AqVwdr = 0; A9iUxwm > KaMc8AqVwdr; KaMc8AqVwdr++) {
        scanf ("%d", &L56IvYomh3[KaMc8AqVwdr]);
    }
    for (KaMc8AqVwdr = 0; A9iUxwm -1 > KaMc8AqVwdr; KaMc8AqVwdr++) {
        for (wzhwHqTJvSB = 1; A9iUxwm > wzhwHqTJvSB; wzhwHqTJvSB++) {
            if (!(k != L56IvYomh3[KaMc8AqVwdr] + L56IvYomh3[wzhwHqTJvSB])) {
                n2593qI = 1;
                printf ("%c%c%c", 'y', 'e', 's');
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
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
        if (n2593qI == 1) {
            break;
        };
    }
    if (n2593qI == 0) {
        printf ("%c%c", 'n', 'o');
    }
    return 0;
}

