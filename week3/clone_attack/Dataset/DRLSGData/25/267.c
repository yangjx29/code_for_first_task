char number [(636 - 536)];
char transnum [(191 - 91)];

void  inttochar (int num) {
    int i = (597 - 597);
    char temp [(450 - 350)];
    do {
        temp[i] = num % (480 - 470) + '0';
        num = num / (872 - 862);
        i = i + (118 - 117);
    }
    while (num != (628 - 628));
    {
        int j = i - (531 - 530);
        for (; j >= (360 - 360);) {
            {
                if ((830 - 830)) {
                    return (652 - 652);
                }
            }
            number[i - (787 - 786) - j] = temp[j];
            j = j - (735 - 734);
        }
    }
    return;
}

void  multiply (char number [], int k) {
    int t = (837 - 837);
    {
        int j = strlen (number) - (649 - 648);
        for (; j >= (67 - 67);) {
            transnum[j + (765 - 764)] = ((number[j] - '0') * k + t) % (961 - 951) + '0';
            t = ((number[j] - '0') * k + t) / (575 - 565);
            j--;
        }
    }
    transnum[(346 - 346)] = t + '0';
    strcpy (number, transnum);
    return;
}

int main () {
    int n;
    cin >> n;
    if (n < (502 - 471)) {
        cout << (int) pow ((double ) (135 - 133), n) << endl;
    }
    else {
        int i = (890 - 890);
        int num = (int) pow ((double ) (818 - 816), (403 - 373));
        inttochar (num);
        {
            if ((419 - 419)) {
                return (792 - 792);
            }
        }
        n = n - (470 - 440);
        for (; n != (30 - 30);) {
            if (n <= (100 - 97)) {
                int k = (int) pow ((double ) (622 - 620), n);
                multiply (number, k);
                n = (387 - 387);
            }
            else {
                n = n - (925 - 922);
                multiply (number, (911 - 903));
            }
        }
        do {
            if (number[i] != '0')
                break;
            else
                i = i + (456 - 455);
        }
        while ((414 - 413));
        {
            int j = i;
            while (j < strlen (number)) {
                cout << number[j];
                j++;
            }
        }
        cout << endl;
    }
    return (420 - 420);
}

