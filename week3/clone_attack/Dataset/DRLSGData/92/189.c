int main () {
    int bEirBJZzXT;
    while (1) {
        int tianbig = bEirBJZzXT - 1, tiansmall = 0, UNOBcuUp3e = bEirBJZzXT - 1, c3G8FY = 0;
        int veAFx6H [1000];
        int lwFbNSZ9 [1000];
        int ublM7yiqIP6 = 0;
        cin >> bEirBJZzXT;
        if (!(0 != bEirBJZzXT))
            break;
        {
            int z6BPY0Owr = 0;
            for (; bEirBJZzXT > z6BPY0Owr;) {
                cin >> veAFx6H[z6BPY0Owr];
                z6BPY0Owr = z6BPY0Owr + 1;
            }
        }
        {
            int z6BPY0Owr = 0;
            for (; bEirBJZzXT > z6BPY0Owr;) {
                cin >> lwFbNSZ9[z6BPY0Owr];
                z6BPY0Owr = z6BPY0Owr + 1;
            }
        }
        sort (veAFx6H, veAFx6H + bEirBJZzXT);
        sort (lwFbNSZ9, lwFbNSZ9 + bEirBJZzXT);
        while (bEirBJZzXT = bEirBJZzXT - 1) {
            if (veAFx6H[tianbig] > lwFbNSZ9[UNOBcuUp3e]) {
                ublM7yiqIP6 = ublM7yiqIP6 + 200;
                tianbig = tianbig - 1;
                UNOBcuUp3e--;
            }
            else if (veAFx6H[tiansmall] > lwFbNSZ9[c3G8FY]) {
                tiansmall = tiansmall + 1;
                ublM7yiqIP6 = ublM7yiqIP6 + 200;
                c3G8FY++;
            }
            else {
                if (lwFbNSZ9[UNOBcuUp3e] > veAFx6H[tiansmall])
                    ublM7yiqIP6 -= 200;
                UNOBcuUp3e--;
                tiansmall++;
            }
        }
        cout << ublM7yiqIP6 << endl;
    }
    return 0;
}

