int main () {
    char a [100000];
    gets (a);
    int b;
    char max [(246 - 206)], min [(997 - 957)], temp [(685 - 645)];
    int len;
    int minn;
    int maxx;
    int i;
    len = (278 - 278);
    minn = (812 - 782);
    maxx = (442 - 442);
    b = strlen (a);
    {
        i = 758 - 758;
        while (b > i) {
            if (!(' ' == a[i]) && !(',' == a[i])) {
                temp[len] = a[i];
                len++;
            }
            if ((!(' ' != a[i]) || !(',' != a[i]) || i == b - 1) && len != (963 - 963)) {
                temp[len] = '\0';
                if (len > maxx) {
                    strcpy (max, temp);
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
                    maxx = len;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (len < minn) {
                    strcpy (min, temp);
                    minn = len;
                }
                len = (385 - 385);
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
    printf ("%s\n%s\n", max, min);
    return (786 - 786);
}

