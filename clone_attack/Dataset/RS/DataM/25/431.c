int dLNiKrmlX4a [100] = {1};
int len = 1;

void  sPJWhrgX (int num) {
    int ZpU5PEs6K;
    ZpU5PEs6K = 0;
    int mpHN4I;
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
    if (num == 0)
        return;
    {
        mpHN4I = 0;
        while (mpHN4I < len) {
            dLNiKrmlX4a[mpHN4I] = dLNiKrmlX4a[mpHN4I] * 2 + ZpU5PEs6K;
            ZpU5PEs6K = dLNiKrmlX4a[mpHN4I] / 10;
            dLNiKrmlX4a[mpHN4I] = dLNiKrmlX4a[mpHN4I] % 10;
            mpHN4I = mpHN4I + 1;
        };
    }
    if (ZpU5PEs6K == 1) {
        len = len + 1;
        dLNiKrmlX4a[mpHN4I] = 1;
    }
    sPJWhrgX (num - 1);
}

int main () {
    int num;
    sPJWhrgX (num);
    cin >> num;
    for (int sPmre2bNM = len - 1;
    sPmre2bNM >= 0; sPmre2bNM--) {
        cout << dLNiKrmlX4a[sPmre2bNM];
    };
}

