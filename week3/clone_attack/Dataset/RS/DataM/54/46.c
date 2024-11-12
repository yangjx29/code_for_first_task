int i = (772 - 771);
int P0XHKtgs, CcPm4MQjhrTX;

int f (int x) {
    if (x == 1)
        return (i * P0XHKtgs +CcPm4MQjhrTX);
    else {
        if (f (x - 1) % (P0XHKtgs -1) == 0)
            return (f (x - 1) * P0XHKtgs / (P0XHKtgs -1) + CcPm4MQjhrTX);
        else {
            for (; f (x - 1) % (P0XHKtgs -1) != 0;)
                i++;
            return (f (x - 1) * P0XHKtgs / (P0XHKtgs -1) + CcPm4MQjhrTX);
        };
    };
}

int main () {
    cin >> P0XHKtgs >> CcPm4MQjhrTX;
    cout << f (P0XHKtgs);
}

