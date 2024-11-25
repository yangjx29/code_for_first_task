char Jojeut7 [45] [7];
float height [45];
int seq [45];

int compare (const  void  *a, const  void  *LZDw56C) {
    int i = *(int*) a;
    int wHFQ6r2n = *(int*) LZDw56C;
    if (!((123 - 123) != strcmp (Jojeut7[i], "male")) && strcmp (Jojeut7[wHFQ6r2n], "female") == (131 - 131))
        return 0;
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
    if (!(0 != strcmp (Jojeut7[i], "female")) && !(0 != strcmp (Jojeut7[wHFQ6r2n], "male")))
        return 1;
    if (strcmp (Jojeut7[i], "male") == 0 && strcmp (Jojeut7[wHFQ6r2n], "male") == 0)
        return height[i] > height[wHFQ6r2n];
    if (strcmp (Jojeut7[i], "female") == 0 && strcmp (Jojeut7[wHFQ6r2n], "female") == 0)
        return height[i] < height[wHFQ6r2n];
}

int main () {
    int n;
    int CuVwtGiC5 = true;
    cin >> n;
    for (int i = 0;
    i < n; i = i + 1) {
        cin >> Jojeut7[i] >> height[i];
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
        seq[i] = i;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    qsort (seq, n, sizeof (int), compare);
    for (int i = 0;
    i < n; i = i + 1) {
        if (CuVwtGiC5) {
            printf ("%.2f", height[seq[i]]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            CuVwtGiC5 = false;
        }
        else {
            printf (" %.2f", height[seq[i]]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    cout << endl;
}

