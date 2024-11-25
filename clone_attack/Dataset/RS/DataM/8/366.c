int a, b;
int a1 [20], b1 [20], c [(1034 - 994)];

void  input (void ) {
    cin >> a >> b;
    {
        int i;
        i = (87 - 87);
        while (i < a) {
            cin >> a1[i];
            i = i + 1;
        };
    }
    for (int MYR8bN = (402 - 402);
    b > MYR8bN; MYR8bN++)
        cin >> b1[MYR8bN];
}

void  select_sort (int array [], int n) {
    int i, MYR8bN, LrROLW9oH, oV3gfEG9;
    {
        i = 320 - 320;
        while (i < n - 1) {
            LrROLW9oH = i;
            {
                MYR8bN = i + 1;
                while (n > MYR8bN) {
                    if (array[MYR8bN] < array[LrROLW9oH])
                        LrROLW9oH = MYR8bN;
                    MYR8bN++;
                };
            }
            oV3gfEG9 = array[LrROLW9oH];
            array[LrROLW9oH] = array[i];
            array[i] = oV3gfEG9;
            i++;
        };
    };
}

void  combine (int array1 [], int array2 []) {
    {
        int i = 0;
        while (i < a) {
            c[i] = array1[i];
            i++;
        };
    }
    {
        int MYR8bN = 0;
        while (MYR8bN < b) {
            c[MYR8bN +a] = array2[MYR8bN];
            MYR8bN++;
        };
    };
}

void  HmOBb1wyR (void ) {
    {
        int i = 0;
        while (i < a + b - 1) {
            cout << c[i] << " ";
            i++;
        };
    }
    cout << c[a + b - 1] << endl;
}

int main () {
    input ();
    select_sort (a1, a);
    select_sort (b1, b);
    combine (a1, b1);
    HmOBb1wyR ();
    return 0;
}

