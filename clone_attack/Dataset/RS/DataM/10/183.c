int main () {
    int w;
    int max;
    int nlZ3O9vKDJf;
    max = 0;
    struct   ijnpmMYWwKus {
        int x, y;
    }
    ijnpmMYWwKus [(864 - 839)];
    int OOXsdVfzS;
    int i;
    scanf ("%d", &OOXsdVfzS);
    {
        i = 624 - 624;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (OOXsdVfzS > i) {
            scanf ("%d", &ijnpmMYWwKus[i].x);
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
    {
        nlZ3O9vKDJf = 0;
        while (nlZ3O9vKDJf < OOXsdVfzS) {
            int k;
            k = 0;
            {
                i = 192 - 191;
                while (OOXsdVfzS > i) {
                    if (ijnpmMYWwKus[nlZ3O9vKDJf].x > ijnpmMYWwKus[i].x)
                        k++;
                    i++;
                };
            }
            ijnpmMYWwKus[nlZ3O9vKDJf].y = k;
            nlZ3O9vKDJf = nlZ3O9vKDJf + 1;
        };
    }
    {
        i = OOXsdVfzS -1;
        while (1 <= i) {
            if (ijnpmMYWwKus[i - 1].y < ijnpmMYWwKus[i].y + 1) {
                ijnpmMYWwKus[i - 1].y = ijnpmMYWwKus[i].y;
                w = w + 1;
            }
            i--;
        };
    }
    printf ("%d", OOXsdVfzS -w);
    return 0;
}

