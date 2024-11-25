char str [200 + (107 - 106)];
int length, sum, i;
int flag [(237 - 137) + (318 - 317)];
char p, q;
void  f (char s [], int k);

int main () {
    int j;
    j = (669 - 669);
    cin >> str;
    length = strlen (str);
    p = str[(805 - 805)];
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
    q = str[length - (545 - 544)];
    {
        i = 483 - 482;
        while (i <= length - 1) {
            if (str[i] == q) {
                j++;
                flag[j] = i;
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
    sum = j;
    f (str, 1);
    return (382 - 382);
}

void  f (char s [], int k) {
    if (k <= sum) {
        {
            i = k;
            while (i >= 0) {
                if (s[i] == p) {
                    printf ("%d %d\n", i, flag[k]);
                    s[i] = '\0';
                    s[flag[k]] = '\0';
                    break;
                }
                i--;
            };
        }
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
        f (s, k + 1);
    }
    else
        return;
}

