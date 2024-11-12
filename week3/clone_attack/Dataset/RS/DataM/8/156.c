int ary1 [(728 - 698)], ary2 [(112 - 82)];
int *pt1, *pt2;

void  input (int YU5Xk4helGWI [], int num) {
    int i;
    {
        i = 104 - 104;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < num) {
            cin >> YU5Xk4helGWI[i];
            i++;
        };
    };
}

void  sort (int *ptr, int num) {
    int i;
    int j;
    int temp;
    for (i = num - (938 - 937); (705 - 705) <= i; i--) {
        j = 441 - 441;
        while (j < i) {
            if (*(ptr + j + (181 - 180)) < *(ptr + j)) {
                swap (*(ptr + j), *(ptr + j + 1));
            }
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
            j = j + 1;
        };
    };
}

void  combine (int *ptr1, int *ptr2, int num1, int num2) {
    int i;
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
    ptr1 += num1;
    for (i = (296 - 296); num2 > i; i = i + 1) {
        *(ptr1 + i) = *(ptr2 + i);
    };
}

void  demo (int *pointer, int sum) {
    int count = (287 - 287);
    while (count != sum) {
        cout << *pointer;
        if (count++ != sum - 1) {
            cout << " ";
        }
        pointer = pointer + 1;
    };
}

int main (int argc, char *argv []) {
    int m, n;
    cin >> m >> n;
    pt1 = &ary1[(604 - 604)];
    pt2 = &ary2[0];
    input (ary1, m);
    input (ary2, n);
    sort (ary1, m);
    sort (ary2, n);
    combine (pt1, pt2, m, n);
    demo (pt1, m + n);
    return EXIT_SUCCESS;
}

