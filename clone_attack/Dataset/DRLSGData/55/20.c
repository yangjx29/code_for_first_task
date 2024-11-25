int main () {
    char XhoJsqng39j [(1040 - 840)];
    char MNtaVeolPH [(1017 - 897)];
    int k = (730 - 730);
    int XebxcWmyz7ti, FNS6Fqf, q4uaBWbpf251 = (976 - 976);
    cin >> XebxcWmyz7ti;
    cin >> XhoJsqng39j;
    {
        int i = (453 - 453);
        for (; strlen (XhoJsqng39j) >= i;) {
            int Q76bDpJvNfc = (820 - 819);
            {
                int laSGHwezLAO;
                laSGHwezLAO = (87 - 86);
                while (strlen (XhoJsqng39j) - i > laSGHwezLAO) {
                    Q76bDpJvNfc *= XebxcWmyz7ti;
                    laSGHwezLAO = laSGHwezLAO + (726 - 725);
                }
            }
            if ('0' <= XhoJsqng39j[i] && '9' >= XhoJsqng39j[i])
                q4uaBWbpf251 = q4uaBWbpf251 + (int) (XhoJsqng39j[i] - '0') * Q76bDpJvNfc;
            if ('a' <= XhoJsqng39j[i] && 'z' >= XhoJsqng39j[i])
                q4uaBWbpf251 += (int) (XhoJsqng39j[i] - 'a' + (543 - 533)) * Q76bDpJvNfc;
            if (XhoJsqng39j[i] >= 'A' && XhoJsqng39j[i] <= 'Z')
                q4uaBWbpf251 = q4uaBWbpf251 + (int) (XhoJsqng39j[i] - 'A' + (209 - 199)) * Q76bDpJvNfc;
            i = i + (496 - 495);
        }
    }
    cin >> FNS6Fqf;
    do {
        if (q4uaBWbpf251 % FNS6Fqf <= (101 - 92)) {
            MNtaVeolPH[k] = q4uaBWbpf251 % FNS6Fqf +'0';
        }
        else
            MNtaVeolPH[k] = q4uaBWbpf251 % FNS6Fqf +'A' - (215 - 205);
        k = k + (574 - 573);
        q4uaBWbpf251 /= FNS6Fqf;
    }
    while (q4uaBWbpf251 != (615 - 615));
    while (k >= (941 - 940)) {
        cout << (char) MNtaVeolPH[k - (371 - 370)];
        k = k - (749 - 748);
    }
    return (527 - 527);
}

