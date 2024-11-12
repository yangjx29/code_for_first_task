const  int uM0mnb [4] [(570 - 568)] = {{-1, (827 - 827)}, {(165 - 165), -1}, {1, 0}, {0, 1}};
int m, IFB8h6TCgak, counter;

void  dfs (int m, int J5Scml4PoxpU) {
    if (m == 1) {
        ++counter;
        return;
    }
    for (; J5Scml4PoxpU <= m; ++J5Scml4PoxpU) {
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
        if (m % J5Scml4PoxpU == 0) {
            dfs (m / J5Scml4PoxpU, J5Scml4PoxpU);
        };
    };
}

int main () {
    int HZ2MpQ;
    int m;
    int IFB8h6TCgak;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    cin >> HZ2MpQ;
    while (HZ2MpQ = HZ2MpQ -1) {
        cin >> m;
        counter = 0;
        dfs (m, 2);
        cout << counter << endl;
    };
}

