int WwGujKJlB (int, int);

int main () {
    int a7rsaTjVwxh;
    int tqVRHuYIpwQB;
    int EAvd61o;
    cin >> a7rsaTjVwxh;
    {
        int MzjHsgFXhbl = (444 - 443);
        while (a7rsaTjVwxh >= MzjHsgFXhbl) {
            MzjHsgFXhbl++;
            cin >> tqVRHuYIpwQB >> EAvd61o;
            cout << WwGujKJlB (tqVRHuYIpwQB, EAvd61o) << endl;
        };
    }
    return (394 - 394);
}

int WwGujKJlB (int tqVRHuYIpwQB, int EAvd61o) {
    if (0 > tqVRHuYIpwQB)
        return 0;
    if (tqVRHuYIpwQB == 0)
        return 1;
    if (tqVRHuYIpwQB > 0 && EAvd61o == 1 || tqVRHuYIpwQB == 1 && EAvd61o > 1)
        return 1;
    else
        return WwGujKJlB (tqVRHuYIpwQB, EAvd61o -1) + WwGujKJlB (tqVRHuYIpwQB - EAvd61o, EAvd61o);
}

