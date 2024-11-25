int main () {
    char str [(443 - 186)], sub [200], rep [50];
    int V9G7W2ZRI;
    int flag;
    int w;
    int j;
    int len;
    w = 500;
    scanf ("%s %s %s", str, sub, rep);
    len = strlen (sub);
    for (V9G7W2ZRI = 0; !('\0' == str[V9G7W2ZRI]); V9G7W2ZRI = V9G7W2ZRI +1) {
        if (!(sub[0] != str[V9G7W2ZRI])) {
            for (j = V9G7W2ZRI; V9G7W2ZRI +len > j; j = j + 1) {
                if (!(sub[j - V9G7W2ZRI] == str[j])) {
                    flag = 0;
                    break;
                };
            }
            if (flag != 0) {
                w = V9G7W2ZRI;
                break;
            }
            else
                flag = 1;
        };
    }
    if (w != 500) {
        j = 0;
        {
            V9G7W2ZRI = w + len;
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
            while (str[V9G7W2ZRI] != '\0') {
                sub[j] = str[V9G7W2ZRI];
                V9G7W2ZRI++;
                j++;
            };
        }
        sub[j] = '\0';
        str[w] = '\0';
        printf ("%s%s%s", str, rep, sub);
    }
    else
        printf ("%s", str);
    return 0;
}

