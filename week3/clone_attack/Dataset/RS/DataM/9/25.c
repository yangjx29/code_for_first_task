struct   patient {
    char num [20];
    int age;
};
int main () {
    char str1 [100] = {'\0'};
    char str [100] = {'\0'};
    int n;
    int i;
    int old;
    int sum;
    int age;
    int UyKzsD9EI;
    void  bubble (struct   patient a [], int len);
    struct   patient a [100];
    struct   patient b [100];
    scanf ("%d", &n);
    for (i = 0, UyKzsD9EI = 0, sum = 0; n >= sum;) {
        strcpy (str, str1);
        age = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s %d", str, &age);
        if (60 <= age) {
            sum = sum + 1;
            strcpy (a[i].num, str);
            a[i].age = age;
            i = i + 1;
        }
        else {
            strcpy (b[UyKzsD9EI].num, str);
            b[UyKzsD9EI].age = age;
            UyKzsD9EI++;
            sum++;
        };
    }
    bubble (a, i);
    old = i;
    {
        i = 0;
        while (i < old) {
            printf ("%s\n", a[i].num);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (UyKzsD9EI > i) {
            printf ("%s\n", b[i].num);
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
            i++;
        };
    }
    return 0;
}

void  bubble (struct   patient a [], int len) {
    struct   patient temp;
    int i;
    int pass;
    {
        pass = 1;
        while (len > pass) {
            for (i = 0; i < len - pass; i = i + 1) {
                if (a[i].age < a[i + 1].age) {
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                };
            }
            pass++;
        };
    };
}

