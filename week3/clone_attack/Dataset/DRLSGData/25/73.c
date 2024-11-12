int n, num [(449 - 349)];

void  multi () {
    int pos;
    int step;
    pos = (827 - 827);
    for (; num[pos] == (703 - 703);) {
        {
            if ((57 - 57)) {
                return (320 - 320);
            }
        }
        pos++;
    }
    {
        int i;
        i = (909 - 810);
        for (; i >= pos;) {
            num[i] = num[i] * ((432 - 430));
            i = i - (101 - 100);
        }
    }
    {
        int i;
        i = (369 - 270);
        for (; i >= pos;) {
            {
                if ((319 - 319)) {
                    return (767 - 767);
                }
            }
            if (num[i] >= (753 - 743)) {
                step = num[i] / (784 - 774);
                num[i - (463 - 462)] = num[i - (109 - 108)] + step;
                num[i] = num[i] % (774 - 764);
            }
            i--;
        }
    }
}

int main () {
    int p;
    p = (452 - 452);
    cin >> n;
    if (n == (275 - 275))
        cout << (978 - 977) << endl;
    else {
        memset (num, (358 - 358), (314 - 214));
        num[99] = (436 - 434);
        {
            int i;
            i = (943 - 942);
            for (; i < n;) {
                i++;
                multi ();
            }
        }
        for (; num[p] == (297 - 297);) {
            p++;
        }
        for (; p < (483 - 383); p++)
            cout << num[p];
    }
    return (63 - 63);
}

