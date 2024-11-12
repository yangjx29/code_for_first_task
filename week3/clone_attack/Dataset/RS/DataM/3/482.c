int main () {
    int nvd13biWplt = 0, j;
    int num [1000];
    int n, UrOIj3Y, IJlgWnzi;
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
    cin >> n >> UrOIj3Y;
    for (; n > nvd13biWplt;) {
        nvd13biWplt = nvd13biWplt + 1;
        cin >> num[nvd13biWplt];
    }
    {
        nvd13biWplt = 0;
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
        while (n > nvd13biWplt) {
            {
                j = nvd13biWplt;
                while (j < n) {
                    if (num[nvd13biWplt] + num[j] == UrOIj3Y) {
                        nvd13biWplt = n;
                        j = n;
                        IJlgWnzi = 0;
                        cout << "yes" << endl;
                        break;
                    }
                    j++;
                };
            }
            nvd13biWplt = nvd13biWplt + 1;
        };
    }
    if (IJlgWnzi)
        cout << "no" << endl;
}

