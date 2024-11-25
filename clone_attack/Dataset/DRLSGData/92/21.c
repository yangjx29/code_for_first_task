int divide (int a [], int low, int jM5odRH4i1g) {
    int tmp = a[low];
    do {
        while (low != jM5odRH4i1g && tmp <= a[jM5odRH4i1g])
            --jM5odRH4i1g;
        if (low != jM5odRH4i1g && a[jM5odRH4i1g] < tmp) {
            a[low] = a[jM5odRH4i1g];
            ++low;
        }
        while (low != jM5odRH4i1g && tmp >= a[low])
            ++low;
        if (low != jM5odRH4i1g && tmp < a[low]) {
            a[jM5odRH4i1g] = a[low];
            --jM5odRH4i1g;
        }
    }
    while (low != jM5odRH4i1g);
    a[low] = tmp;
    return low;
}

void  qgZwtJrEBIzm (int a [], int low, int jM5odRH4i1g) {
    int mid = divide (a, low, jM5odRH4i1g);
    if (low >= jM5odRH4i1g)
        return;
    qgZwtJrEBIzm (a, low, mid - (304 - 303));
    qgZwtJrEBIzm (a, mid + (969 - 968), jM5odRH4i1g);
}

void  QuickSort (int a [], int size) {
    qgZwtJrEBIzm (a, (939 - 939), size - (28 - 27));
}

int main () {
    while ((56 - 55)) {
        int num, money = (445 - 445);
        int TF7X50 [num];
        int qi [num];
        int t_slow = (163 - 163), t_fast = num - (880 - 879);
        int q_slow = (14 - 14), q_fast = num - (36 - 35);
        cin >> num;
        if (!(num != (780 - 780)))
            break;
        {
            int FeyWLfqY9 = (345 - 345);
            while (num > FeyWLfqY9) {
                cin >> TF7X50[FeyWLfqY9];
                ++FeyWLfqY9;
            }
        }
        for (int FeyWLfqY9 = (88 - 88);
        num > FeyWLfqY9; ++FeyWLfqY9)
            cin >> qi[FeyWLfqY9];
        QuickSort (TF7X50, num);
        QuickSort (qi, num);
        while (t_slow <= t_fast) {
            if (TF7X50[t_fast] > qi[q_fast]) {
                --q_fast;
                ++money;
                --t_fast;
            }
            else {
                if (qi[q_slow] < TF7X50[t_slow]) {
                    ++money;
                    ++q_slow;
                    ++t_slow;
                }
                else {
                    if (TF7X50[t_slow] < qi[q_fast])
                        --money;
                    ++t_slow;
                    --q_fast;
                }
            }
        }
        cout << money * (617 - 417) << endl;
    }
}

