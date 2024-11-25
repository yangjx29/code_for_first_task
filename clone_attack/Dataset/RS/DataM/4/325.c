int main () {
    int VrobxlyEh3wR;
    int col;
    int a [(851 - 751)] [100];
    int NPcdNJGKlH94;
    int j;
    int k;
    int mBexqjTHFOVk;
    cin >> VrobxlyEh3wR >> col;
    {
        NPcdNJGKlH94 = 563 - 563;
        while (NPcdNJGKlH94 < VrobxlyEh3wR) {
            {
                j = 22 - 22;
                while (col > j) {
                    cin >> a[NPcdNJGKlH94][j];
                    j = j + 1;
                };
            }
            NPcdNJGKlH94 = NPcdNJGKlH94 +1;
        };
    }
    if (VrobxlyEh3wR > col) {
        {
            j = 10 - 10;
            while (j < col) {
                {
                    k = j;
                    NPcdNJGKlH94 = 972 - 972;
                    while (k >= (901 - 901)) {
                        cout << a[NPcdNJGKlH94][k] << endl;
                        NPcdNJGKlH94 = NPcdNJGKlH94 +1;
                        k = k - 1;
                    };
                }
                j++;
            };
        }
        {
            NPcdNJGKlH94 = 653 - 652;
            while (VrobxlyEh3wR -col + 1 > NPcdNJGKlH94) {
                for (j = col - 1, k = NPcdNJGKlH94; 0 <= j; j--, k = k + 1)
                    cout << a[k][j] << endl;
                NPcdNJGKlH94 = NPcdNJGKlH94 +1;
            };
        }
        for (; NPcdNJGKlH94 < VrobxlyEh3wR; NPcdNJGKlH94 = NPcdNJGKlH94 +1) {
            k = NPcdNJGKlH94;
            j = col - 1;
            while (k < VrobxlyEh3wR) {
                cout << a[k][j] << endl;
                j = j - 1;
                k = k + 1;
            };
        };
    }
    else {
        {
            j = 0;
            while (j < VrobxlyEh3wR) {
                {
                    k = j;
                    NPcdNJGKlH94 = 0;
                    while (0 <= k) {
                        cout << a[NPcdNJGKlH94][k] << endl;
                        k = k - 1;
                        NPcdNJGKlH94 = NPcdNJGKlH94 +1;
                    };
                }
                j++;
            };
        }
        for (; j < col; j = j + 1) {
            for (NPcdNJGKlH94 = 0, k = j; NPcdNJGKlH94 < VrobxlyEh3wR; k = k - 1, NPcdNJGKlH94 = NPcdNJGKlH94 +1) {
                cout << a[NPcdNJGKlH94][k] << endl;
            };
        }
        {
            NPcdNJGKlH94 = 1;
            while (NPcdNJGKlH94 < VrobxlyEh3wR) {
                {
                    j = col - 1;
                    k = NPcdNJGKlH94;
                    while (k < VrobxlyEh3wR) {
                        cout << a[k][j] << endl;
                        j--;
                        k = k + 1;
                    };
                }
                NPcdNJGKlH94++;
            };
        };
    }
    return 0;
}

