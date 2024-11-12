int main () {
    int yCcdKYOR5;
    int c2;
    int temp;
    int vvy6Up;
    yCcdKYOR5 = (346 - 345);
    c2 = 1;
    temp = -1;
    char ch [1001];
    int len;
    len = strlen (ch);
    int UDG82IqZyKJN [len];
    cin >> ch;
    for (vvy6Up = (633 - 633); len > vvy6Up; vvy6Up++)
        if (ch[vvy6Up] <= 'Z')
            UDG82IqZyKJN[vvy6Up] = ch[vvy6Up] - 'A';
        else
            UDG82IqZyKJN[vvy6Up] = ch[vvy6Up] - 'a';
    {
        vvy6Up = 0;
        while (len > vvy6Up) {
            if (!(-1 != temp)) {
                temp = UDG82IqZyKJN[vvy6Up];
                if (!(len - 1 != vvy6Up))
                    cout << "(" << (char) (temp + 65) << "," << yCcdKYOR5 << ")";
            }
            else if (UDG82IqZyKJN[vvy6Up] == temp) {
                yCcdKYOR5++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (vvy6Up == len - 1)
                    cout << "(" << (char) (temp + 65) << "," << yCcdKYOR5 << ")";
            }
            else {
                cout << "(" << (char) (temp + 65) << "," << yCcdKYOR5 << ")";
                yCcdKYOR5 = 1, temp = UDG82IqZyKJN[vvy6Up];
                if (vvy6Up == len - 1)
                    cout << "(" << (char) (temp + 65) << "," << yCcdKYOR5 << ")";
            }
            vvy6Up++;
        };
    }
    return 0;
}

