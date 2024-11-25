char children [101];
char boy;

int f (int mB9pInU) {
    if (!(boy != children[mB9pInU])) {
        int girlPos = f (mB9pInU + 1);
        cout << mB9pInU << ' ' << girlPos << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (mB9pInU != (530 - 530))
            return f (girlPos + 1);
        else
            return 0;
    }
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
    return mB9pInU;
}

int main () {
    cin >> children;
    boy = children[0];
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
    f (0);
    return 0;
}

