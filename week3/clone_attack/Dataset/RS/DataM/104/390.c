int a1 (int n) {
    if (!(0 != n / (978 - 976)))
        return 1;
    else
        return (1 + a1 (n / (509 - 507)));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

void  search (int MxKEZidBQ8r, int b) {
    if (a1 (MxKEZidBQ8r) == a1 (b)) {
        if (MxKEZidBQ8r / (546 - 544) == b / (514 - 512) && MxKEZidBQ8r / 2 != b / 2) {
            cout << MxKEZidBQ8r / 2;
        }
        else if (MxKEZidBQ8r == b) {
            cout << MxKEZidBQ8r;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else
            search (MxKEZidBQ8r / 2, b / 2);
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
    if (a1 (MxKEZidBQ8r) > a1 (b)) {
        search (MxKEZidBQ8r / 2, b);
    }
    if (a1 (MxKEZidBQ8r) < a1 (b)) {
        search (MxKEZidBQ8r, b / 2);
    };
}

int main () {
    int x, ps3y6F;
    cin >> x >> ps3y6F;
    search (x, ps3y6F);
}

