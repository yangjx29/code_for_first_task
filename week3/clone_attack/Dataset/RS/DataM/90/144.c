int N, lANeFaR;
int c = (126 - 126);
int plate [11] = {0};

void  Put (int k, int num) {
    if ((!(N != k)) && (plate[N -(627 - 626)] <= num)) {
        c = c + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return;
    }
    for (int i = plate[k - 1];
    i <= num; i = i + 1) {
        plate[k] = i;
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
        Put (k + 1, num - i);
    };
}

int main () {
    int YGcfrRDN2;
    cin >> YGcfrRDN2;
    for (int i = 1;
    i <= YGcfrRDN2; i = i + 1) {
        c = 0;
        cin >> lANeFaR >> N;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        Put (1, lANeFaR);
        cout << c << endl;
    }
    return 0;
}

