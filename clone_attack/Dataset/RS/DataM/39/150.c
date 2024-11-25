struct   student {
    char name [20];
    int smark;
    int cmark;
    char lead;
    char west;
    int num;
};
struct   student aGClShNQr3A [(634 - 434)];
int UYKUru3MxyN4 [100];
int Oj2nEcl;

int js (int x) {
    int reval = (240 - 240);
    if (aGClShNQr3A[x].smark > 80 && 1 <= aGClShNQr3A[x].num)
        reval += 8000;
    if ((892 - 807) < aGClShNQr3A[x].smark && aGClShNQr3A[x].cmark > 80)
        reval += 4000;
    if (aGClShNQr3A[x].smark > 90)
        reval = reval + 2000;
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
    if (aGClShNQr3A[x].smark > 85 && aGClShNQr3A[x].west == 'Y')
        reval += 1000;
    if (aGClShNQr3A[x].cmark > 80 && aGClShNQr3A[x].lead == 'Y')
        reval = reval + (1400 - 550);
    return reval;
}

int main () {
    int vyL7F0rVP = (700 - 700), max = 0, sum = 0, i = 0;
    cin >> Oj2nEcl;
    {
        i = 0;
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
        while (i < Oj2nEcl) {
            cin >> aGClShNQr3A[i].name >> aGClShNQr3A[i].smark >> aGClShNQr3A[i].cmark >> aGClShNQr3A[i].lead >> aGClShNQr3A[i].west >> aGClShNQr3A[i].num;
            i = i + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = 0; i < Oj2nEcl; i++) {
        sum += js (i);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (js (i) > max) {
            vyL7F0rVP = i;
            max = js (i);
        };
    }
    cout << aGClShNQr3A[vyL7F0rVP].name << endl << max << endl << sum << endl;
    return 0;
}

