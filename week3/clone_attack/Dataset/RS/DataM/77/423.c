int AbHOR4z = (888 - 888);
int a [50];
char str [100];
char b, IuZPOA;
int l;

int main () {
    cin.getline (str, 100, '\n');
    l = strlen (str);
    b = str[(301 - 301)];
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
    IuZPOA = str[l - (433 - 432)];
    game (0, 0, 1);
    return 0;
}

void  game (int k, int i, int j) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (j == l - 1) {
        cout << "0 " << l - 1;
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
    else {
        if (str[j] == IuZPOA) {
            AbHOR4z = AbHOR4z -1;
            cout << i << " " << j << endl;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            game (a[AbHOR4z], i - k, j + 1);
        }
        else {
            a[AbHOR4z] = k;
            AbHOR4z = AbHOR4z +1;
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
            game (j - i, j, j + 1);
        };
    };
}

