void  BcvLm1CdfZX (int a [], int b []);
void  PvfrbZY (int a [], int len);
void  combine (int a [], int b [], int lD1CsSa7fm8, int len2);
int lD1CsSa7fm8, len2;

int main () {
    int a [1000] = {0};
    int b [1000] = {0};
    BcvLm1CdfZX (a, b);
    PvfrbZY (a, lD1CsSa7fm8);
    PvfrbZY (b, len2);
    combine (a, b, lD1CsSa7fm8, len2);
    return 0;
}

void  BcvLm1CdfZX (int a [], int b []) {
    cin >> lD1CsSa7fm8 >> len2;
    {
        int bykuAU3EBVim;
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
        bykuAU3EBVim = 0;
        while (lD1CsSa7fm8 > bykuAU3EBVim) {
            cin >> a[bykuAU3EBVim];
            bykuAU3EBVim = bykuAU3EBVim + 1;
        };
    }
    for (int fD48ukUN9 = 0;
    len2 > fD48ukUN9; fD48ukUN9 = fD48ukUN9 + 1)
        cin >> b[fD48ukUN9];
    return;
}

void  PvfrbZY (int a [], int len) {
    int F8B5LOh;
    F8B5LOh = 0;
    for (int bykuAU3EBVim = 0;
    bykuAU3EBVim < len - 1; bykuAU3EBVim = bykuAU3EBVim + 1) {
        for (int fD48ukUN9 = 0;
        len - bykuAU3EBVim - 1 > fD48ukUN9; fD48ukUN9 = fD48ukUN9 + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (a[fD48ukUN9] > a[fD48ukUN9 + 1]) {
                F8B5LOh = a[fD48ukUN9];
                a[fD48ukUN9] = a[fD48ukUN9 + 1];
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
                a[fD48ukUN9 + 1] = F8B5LOh;
            };
        };
    }
    return;
}

void  combine (int a [], int b [], int lD1CsSa7fm8, int len2) {
    int pin = 0;
    for (int bykuAU3EBVim = lD1CsSa7fm8;
    lD1CsSa7fm8 + len2 > bykuAU3EBVim; bykuAU3EBVim = bykuAU3EBVim + 1) {
        a[bykuAU3EBVim] = b[bykuAU3EBVim - lD1CsSa7fm8];
    }
    for (int fD48ukUN9 = 0;
    lD1CsSa7fm8 + len2 > fD48ukUN9; fD48ukUN9 = fD48ukUN9 + 1) {
        if (pin == 0) {
            pin = 1;
            cout << a[fD48ukUN9];
        }
        else
            cout << " " << a[fD48ukUN9];
    }
    return;
}

