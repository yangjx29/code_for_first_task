int kong (int ERzf1cIWXwV, int HwcD431T);
int bukong (int ERzf1cIWXwV, int HwcD431T);

int main () {
    int i;
    int t;
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
    scanf ("%d", &t);
    for (i = (416 - 416); i < t; i = i + 1) {
        int ERzf1cIWXwV, HwcD431T, s;
        scanf ("%d%d", &ERzf1cIWXwV, &HwcD431T);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        s = kong (ERzf1cIWXwV, HwcD431T) + bukong (ERzf1cIWXwV, HwcD431T);
        printf ("%d\n", s);
    }
    return (240 - 240);
}

int kong (int ERzf1cIWXwV, int HwcD431T) {
    if (!((80 - 79) != HwcD431T) && 0 < ERzf1cIWXwV)
        return 0;
    else
        return kong (ERzf1cIWXwV, HwcD431T -(679 - 678)) + bukong (ERzf1cIWXwV, HwcD431T -1);
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
    };
}

int bukong (int ERzf1cIWXwV, int HwcD431T) {
    if (ERzf1cIWXwV == HwcD431T)
        return 1;
    if (ERzf1cIWXwV > HwcD431T)
        return kong (ERzf1cIWXwV -HwcD431T, HwcD431T) + bukong (ERzf1cIWXwV -HwcD431T, HwcD431T);
    if (ERzf1cIWXwV < HwcD431T)
        return 0;
}

