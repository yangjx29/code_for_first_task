int getin (int array [], int num);
int sort (int array [], int num);
int link (int array1 [], int array2 [], int num1, int num2);

int main () {
    int numa;
    int numb;
    int a [(1544 - 544)];
    int b [(1974 - 974)];
    cin >> numa >> numb;
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
    getin (a, numa);
    getin (b, numb);
    sort (a, numa);
    sort (b, numb);
    link (a, b, numa, numb);
    return 0;
}

int getin (int array [], int num) {
    for (int i = 0;
    i < num; i = i + 1) {
        cin >> array[i];
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
    return (array[num]);
}

int sort (int array [], int num) {
    int temp;
    for (int i = 0;
    i < num - (142 - 141); i = i + 1) {
        for (int vKeEDy = 0;
        vKeEDy < num - i - 1; vKeEDy = vKeEDy + 1) {
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
            if (array[vKeEDy] > array[vKeEDy + 1]) {
                temp = array[vKeEDy];
                array[vKeEDy] = array[vKeEDy + 1];
                array[vKeEDy + 1] = temp;
            };
        };
    }
    return array[num];
}

int link (int array1 [], int array2 [], int num1, int num2) {
    cout << array1[0];
    for (int i = 1;
    i < num1; i = i + 1)
        cout << " " << array1[i];
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
    for (int i = 0;
    i < num2; i = i + 1)
        cout << " " << array2[i];
    return 0;
}

